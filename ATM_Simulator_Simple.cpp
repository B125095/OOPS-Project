/*  ==========================================================
    ATM SIMULATOR  (simple version)
    Name : Ranjan Kumar Nandi      ID : B125095
    College : International Institute of Information Technology

    OOP CONCEPTS USED
    ----------------------------------------------------------
    1. Class and Object   : Transaction, Account, SavingsAccount,
                            CurrentAccount, ATM
    2. Encapsulation      : balance and pin are PRIVATE in Account
    3. Abstraction        : Account is an abstract class (= 0)
    4. Inheritance        : SavingsAccount and CurrentAccount
                            are made from Account
    5. Polymorphism       : getWithdrawLimit() works differently
                            for Savings and Current accounts
    6. Constructor        : sets the starting values of an object
    7. Exception handling : try, throw, catch

    HOW TO RUN :  g++ ATM_Simulator_Simple.cpp -o atm
                  ./atm          (Windows: atm.exe)
    Demo card  :  ID 10000001   PIN 1234
    ========================================================== */

#include <iostream>
#include <string>
#include <stdexcept>   // for runtime_error (used in exceptions)
#include <cstdlib>     // for rand() and srand()
#include <ctime>       // for time()
using namespace std;

// ---------- Rules of the bank (fixed numbers) ----------
const int MAX_WITHDRAW = 100000;  // withdraw must be BELOW this amount
const int MAX_DEPOSIT  = 200000;  // deposit limit at one time
const int MIN_BALANCE  = 500;     // a Savings account must keep this much
const int OVERDRAFT    = 10000;   // a Current account can go this much below zero

// ---------- Two small helper functions for input ----------
int readNumber() {                // keeps asking until the user types a number
    int x;
    while (!(cin >> x)) {
        if (cin.eof()) {                      // input finished (for example Ctrl+D): stop the program
            cout << "\nInput closed. Goodbye!\n";
            exit(0);
        }
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Please enter numbers only: ";
    }
    return x;
}

string readText() {               // reads a full line, for example a name with spaces
    string s;
    getline(cin >> ws, s);
    return s;
}

// =============================================================
// CLASS 1 : Transaction  - remembers one action (deposit, withdraw...)
// =============================================================
class Transaction {
public:
    string type;
    int amount;
    int balanceAfter;

    Transaction() {                                   // default constructor
        type = "";
        amount = 0;
        balanceAfter = 0;
    }
    Transaction(string t, int a, int b) {             // constructor with values
        type = t;
        amount = a;
        balanceAfter = b;
    }
};

// =============================================================
// CLASS 2 : Account  - the BASE class
//   Encapsulation : data is private, only methods can change it
//   Abstraction   : two functions are "= 0", so Account is abstract
//                   (we cannot make an object of Account itself)
// =============================================================
class Account {
private:                                  // hidden from the outside world
    int cardId;
    string name;
    int pin;
    int balance;
    bool blocked;
    Transaction history[100];
    int historyCount;

    void addHistory(string type, int amount) {        // private helper
        if (historyCount < 100) {
            history[historyCount] = Transaction(type, amount, balance);
            historyCount++;
        }
    }

public:
    // Constructor : runs automatically when an account object is created
    Account(int id, string n, int p, int openingBalance) {
        cardId = id;
        name = n;
        pin = p;
        balance = openingBalance;
        blocked = false;
        historyCount = 0;
        addHistory("Opening deposit", openingBalance);
    }

    virtual ~Account() {}                 // needed for classes with virtual functions

    // Abstract functions: every type of account MUST write its own version
    virtual string getType() = 0;
    virtual int getWithdrawLimit() = 0;

    // Getters : let others READ the data, but not change it
    int getId()         { return cardId; }
    string getName()    { return name; }
    int getBalance()    { return balance; }
    bool isBlocked()    { return blocked; }

    bool checkPin(int p) { return p == pin; }
    void block()         { blocked = true; }

    void deposit(int amount) {
        if (amount <= 0)
            throw runtime_error("Amount must be greater than zero.");
        if (amount > MAX_DEPOSIT)
            throw runtime_error("You can deposit up to Rs. 2,00,000 at a time.");
        balance = balance + amount;
        addHistory("Deposit", amount);
    }

    void withdraw(int amount) {
        if (amount <= 0)
            throw runtime_error("Amount must be greater than zero.");
        if (amount >= MAX_WITHDRAW)
            throw runtime_error("You can withdraw only below Rs. 1,00,000 at a time (maximum Rs. 99,999).");

        // POLYMORPHISM : this call runs the Savings or Current version
        int canWithdraw = getWithdrawLimit();
        if (amount > canWithdraw) {
            if (canWithdraw < 0) canWithdraw = 0;
            throw runtime_error("Insufficient balance. You can withdraw up to Rs. " + to_string(canWithdraw) + ".");
        }
        balance = balance - amount;
        addHistory("Withdraw", amount);
    }

    void changePin(int oldPin, int newPin) {
        if (oldPin != pin)
            throw runtime_error("The old PIN is wrong.");
        if (newPin < 1000 || newPin > 9999)
            throw runtime_error("New PIN must be exactly 4 digits.");
        if (newPin == pin)
            throw runtime_error("New PIN must be different from the old PIN.");
        pin = newPin;
    }

    void showStatement() {                // shows the last 5 transactions
        int start = historyCount - 5;
        if (start < 0) start = 0;
        for (int i = historyCount - 1; i >= start; i--) {
            string sign = (history[i].type == "Withdraw") ? "-" : "+";
            cout << "  " << history[i].type << "   " << sign << "Rs. " << history[i].amount
                 << "   Balance: Rs. " << history[i].balanceAfter << endl;
        }
    }
};

// =============================================================
// CLASS 3 : SavingsAccount  - INHERITS from Account
//   Rule: Rs. 500 must always remain in the account
// =============================================================
class SavingsAccount : public Account {
public:
    // calls the constructor of the base class (Account) first
    SavingsAccount(int id, string n, int p, int b) : Account(id, n, p, b) {}

    string getType() { return "Savings"; }
    int getWithdrawLimit() { return getBalance() - MIN_BALANCE; }
};

// =============================================================
// CLASS 4 : CurrentAccount  - INHERITS from Account
//   Rule: the balance may go Rs. 10,000 below zero (overdraft)
// =============================================================
class CurrentAccount : public Account {
public:
    CurrentAccount(int id, string n, int p, int b) : Account(id, n, p, b) {}

    string getType() { return "Current"; }
    int getWithdrawLimit() { return getBalance() + OVERDRAFT; }
};

// =============================================================
// CLASS 5 : ATM  - the machine. It keeps all accounts and runs the workflow
//   The array holds Account* pointers, but they really point to
//   Savings or Current objects. This is what makes polymorphism work.
// =============================================================
class ATM {
private:
    Account* accounts[50];
    int total;

    // Find an account by its card ID. Returns NULL if not found.
    Account* findAccount(int id) {
        for (int i = 0; i < total; i++) {
            if (accounts[i]->getId() == id)
                return accounts[i];
        }
        return NULL;
    }

    void showCard(Account* a) {
        cout << "\n  +--------------------------------+\n";
        cout << "  |  ATM SIMULATOR   " << a->getType() << " card\n";
        cout << "  |  Card ID : " << a->getId() << "\n";
        cout << "  |  Name    : " << a->getName() << "\n";
        cout << "  +--------------------------------+\n\n";
    }

    // STEP 1 : create a new account and generate its card
    Account* createAccount() {
        if (total >= 50) {
            cout << "Sorry, the bank is full.\n";
            return NULL;
        }
        cout << "\n--- CREATE NEW ACCOUNT ---\n";
        cout << "Full name: ";
        string name = readText();
        cout << "Choose a 4-digit PIN: ";
        int pin = readNumber();
        if (pin < 1000 || pin > 9999) {
            cout << "PIN must be exactly 4 digits.\n";
            return NULL;
        }
        cout << "Opening deposit (minimum Rs. 500): ";
        int money = readNumber();
        if (money < 500) {
            cout << "Opening deposit must be at least Rs. 500.\n";
            return NULL;
        }
        cout << "Account type (1 = Savings, 2 = Current): ";
        int type = readNumber();

        int id;                                        // make a card ID that nobody has
        do {
            id = 40000000 + rand() % 9000000;
        } while (findAccount(id) != NULL);

        // one pointer type (Account*), two possible objects
        if (type == 2)
            accounts[total] = new CurrentAccount(id, name, pin, money);
        else
            accounts[total] = new SavingsAccount(id, name, pin, money);
        total++;

        cout << "\nGenerating your card...";
        showCard(accounts[total - 1]);
        cout << "Account created. Please note your CARD ID: " << id << endl;
        return accounts[total - 1];
    }

    // STEP 3 : check the PIN, the user gets 3 chances
    bool verifyPin(Account* a) {
        for (int attempt = 1; attempt <= 3; attempt++) {
            cout << "Enter your PIN: ";
            int p = readNumber();
            if (a->checkPin(p)) {
                cout << "PIN accepted.\n";
                return true;
            }
            cout << "Wrong PIN. " << (3 - attempt) << " attempt(s) left.\n";
        }
        a->block();
        cout << "Card blocked after 3 wrong PIN attempts.\n";
        return false;
    }

    // STEP 2, 3, 4... : scan the card, check the PIN, show the menu
    void useCard(Account* a) {
        cout << "\nScanning card...\n";
        cout << "Card recognised: " << a->getName() << endl;

        if (a->isBlocked()) {
            cout << "This card is blocked. Please contact the bank.\n";
            return;
        }
        if (!verifyPin(a))
            return;

        char again = 'y';
        while (again == 'y' || again == 'Y') {
            cout << "\n===== MAIN MENU (" << a->getName() << ") =====\n";
            cout << " 1. Balance Enquiry\n";
            cout << " 2. Withdraw Cash\n";
            cout << " 3. Deposit Cash\n";
            cout << " 4. Change PIN\n";
            cout << " 5. Mini Statement\n";
            cout << " 6. Exit\n";
            cout << "Choose an option: ";
            int choice = readNumber();

            if (choice == 6)
                break;

            try {                                       // errors are caught below
                if (choice == 1) {
                    cout << "Your balance is Rs. " << a->getBalance()
                         << " (" << a->getType() << " account)\n";
                }
                else if (choice == 2) {
                    cout << "Enter amount to withdraw: ";
                    int amount = readNumber();
                    a->withdraw(amount);                // may throw an error
                    cout << "Please collect your cash. New balance: Rs. " << a->getBalance() << endl;
                }
                else if (choice == 3) {
                    cout << "Enter amount to deposit: ";
                    int amount = readNumber();
                    a->deposit(amount);                 // may throw an error
                    cout << "Deposit successful. New balance: Rs. " << a->getBalance() << endl;
                }
                else if (choice == 4) {
                    cout << "Old PIN: ";
                    int oldPin = readNumber();
                    cout << "New PIN: ";
                    int newPin = readNumber();
                    a->changePin(oldPin, newPin);       // may throw an error
                    cout << "PIN changed successfully.\n";
                }
                else if (choice == 5) {
                    cout << "\n--- MINI STATEMENT ---\n";
                    a->showStatement();
                }
                else {
                    cout << "Invalid choice. Please select 1 to 6.\n";
                    continue;
                }
            }
            catch (exception &e) {                      // handles any error from above
                cout << "Error: " << e.what() << endl;
            }

            cout << "\nAnother transaction? (y/n): ";
            cin >> again;
        }
        cout << "\nPlease take your card. Thank you for using ATM Simulator!\n";
    }

    bool askScan() {
        cout << "Enter 1 to SCAN your card (0 to cancel): ";
        return readNumber() == 1;
    }

public:
    ATM() {                                             // constructor of ATM
        srand(time(0));
        total = 0;
        accounts[total] = new SavingsAccount(10000001, "Demo Customer", 1234, 25000);
        total++;
    }

    ~ATM() {                                            // destructor frees the memory
        for (int i = 0; i < total; i++)
            delete accounts[i];
    }

    void start() {
        cout << "=========================================\n";
        cout << "            ATM SIMULATOR\n";
        cout << "=========================================\n";
        while (true) {
            cout << "\n 1. Create new account\n";
            cout << " 2. I already have an account\n";
            cout << " 3. Exit program\n";
            cout << "Choose: ";
            int c = readNumber();

            if (c == 1) {
                Account* a = createAccount();
                if (a != NULL && askScan())
                    useCard(a);
            }
            else if (c == 2) {
                cout << "Enter your card ID number: ";
                int id = readNumber();
                Account* a = findAccount(id);
                if (a == NULL) {
                    cout << "No account found with this ID.\n";
                } else {
                    showCard(a);
                    if (askScan())
                        useCard(a);
                }
            }
            else if (c == 3) {
                cout << "Goodbye!\n";
                break;
            }
            else {
                cout << "Please choose 1, 2 or 3.\n";
            }
        }
    }
};

int main() {
    ATM atm;          // one object of the ATM class
    atm.start();
    return 0;
}
