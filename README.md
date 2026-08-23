
<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:0f172a,25:2563eb,55:7c3aed,100:06b6d4&height=250&section=header&text=AI%20Powered%20Personal%20Assistant&fontSize=38&fontColor=ffffff&animation=twinkling&fontAlignY=36&desc=Adaptive%20User%20Response%20Assistant%20·%20AURA&descAlignY=56&descSize=16" width="100%"/>

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=20&duration=2800&pause=900&color=22D3EE&center=true&vCenter=true&width=680&lines=Analyzes.+Prioritizes.+Recommends.;An+OOP+engine+for+real+productivity.;Built+in+pure+C%2B%2B+%E2%80%94+no+bloat." alt="Typing SVG"/>

<br/>


<br/>

<img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/>
<img src="https://img.shields.io/badge/Paradigm-OOP-8A2BE2?style=for-the-badge"/>
<img src="https://img.shields.io/badge/STL-Enabled-06B6D4?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Storage-File%20Handling-22C55E?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Status-Active%20Development-F97316?style=for-the-badge"/>
<img src="https://img.shields.io/badge/License-MIT-14B8A6?style=for-the-badge"/>
<svg viewBox="0 0 1000 24" xmlns="http://www.w3.org/2000/svg">
  <defs>
    <linearGradient id="lineGrad" x1="0%" y1="0%" x2="100%" y2="0%">
      <stop offset="0%" stop-color="#0f172a"/>
      <stop offset="50%" stop-color="#2563eb"/>
      <stop offset="100%" stop-color="#0f172a"/>
    </linearGradient>
    <radialGradient id="dotGlow" cx="50%" cy="50%" r="50%">
      <stop offset="0%" stop-color="#ffffff"/>
      <stop offset="35%" stop-color="#22d3ee"/>
      <stop offset="100%" stop-color="#22d3ee" stop-opacity="0"/>
    </radialGradient>
  </defs>

  <rect x="0" y="10" width="1000" height="3" fill="url(#lineGrad)"/>

  <circle r="9" fill="url(#dotGlow)">
    <animateMotion dur="3.2s" repeatCount="indefinite" path="M0,12 L1000,12"/>
  </circle>
  <circle r="4" fill="#ffffff">
    <animateMotion dur="3.2s" repeatCount="indefinite" path="M0,12 L1000,12"/>
    <animate attributeName="opacity" values="0.3;1;0.3" dur="0.6s" repeatCount="indefinite"/>
  </circle>

  <circle r="7" fill="url(#dotGlow)" opacity="0.7">
    <animateMotion dur="3.2s" begin="-1.6s" repeatCount="indefinite" path="M1000,12 L0,12"/>
  </circle>
  <circle r="3" fill="#a78bfa">
    <animateMotion dur="3.2s" begin="-1.6s" repeatCount="indefinite" path="M1000,12 L0,12"/>
  </circle>
</svg>

<br/>

<img src="https://img.shields.io/github/stars/YOUR_USERNAME/AURA?style=social"/>
<img src="https://img.shields.io/github/forks/YOUR_USERNAME/AURA?style=social"/>
<img src="https://komarev.com/ghpvc/?username=YOUR_USERNAME&label=Profile%20Views&color=06b6d4&style=flat"/>

<br/><br/>

<a href="#-overview">Overview</a> ·
<a href="#-why-aura">Why AURA</a> ·
<a href="#-feature-showcase">Features</a> ·
<a href="#-the-ai-engine">AI Engine</a> ·
<a href="#-oop-architecture">Architecture</a> ·
<a href="#-how-aura-works">Workflow</a> ·
<a href="#-terminal-demo">Demo</a> ·
<a href="#-installation">Install</a> ·
<a href="#-usage-guide">Usage</a> ·
<a href="#-development-roadmap">Roadmap</a> ·
<a href="#-future-vision">Vision</a> ·
<a href="#-contributing">Contributing</a>

</div>

<img src="assets/aura-glow-divider.svg" width="100%"/>

## ✨ Overview

**AI Powered Personal Assistant** — codename **AURA**, short for *Adaptive User Response Assistant* — is a productivity system built entirely in Object-Oriented C++. Instead of just storing your tasks, reminders, habits, notes, and expenses, AURA actively analyzes them and tells you what to focus on next.

<table>
<tr>
<td width="62%" valign="top">

It's built around one idea: a productivity tool should *think*, even a little. AURA does this with a rule-based priority engine — every task is scored on importance and category, ranked, and surfaced as a recommendation, automatically.

<img src="https://img.shields.io/badge/🟢_Engine_Status-Rule--Based_%26_Deterministic-1a1a2e?style=flat-square&labelColor=22c55e"/>

</td>
<td width="38%" align="center">

<img src="https://capsule-render.vercel.app/api?type=soft&color=timeGradient&height=150&section=header&text=🧠%20AI%20CORE&fontSize=22&fontColor=fff&animation=fadeIn" width="100%"/>

</td>
</tr>
</table>

```mermaid
flowchart LR
    A(["👤 User"]) --> B(["⌨️ Input"]) --> C(["🧩 AURA Core"]) --> D(["🧠 AI Engine"]) --> E(["📈 Priority"]) --> F(["💡 Recommendation"]) --> G(["✅ Action"])

    style A fill:#2563eb,color:#fff,stroke:#1e3a8a
    style C fill:#7c3aed,color:#fff,stroke:#4c1d95
    style D fill:#06b6d4,color:#0a0a0a,stroke:#0e7490
    style E fill:#f97316,color:#0a0a0a,stroke:#c2410c
    style G fill:#22c55e,color:#0a0a0a,stroke:#15803d
```

> **Note on "AI":** AURA's current engine uses deterministic, OOP-based decision logic — not an external LLM. That distinction matters, and it's called out explicitly wherever it's relevant. External LLM integration is a planned future extension — see [Future Vision](#-future-vision).

<br/>

## ⚖️ Why AURA?

A typical task manager is passive — it stores what you type and shows it back to you. AURA is built to be active.

<table>
<tr>
<th align="left">🗃️ Traditional Task Manager</th>
<th align="left">🤖 AURA</th>
</tr>
<tr>
<td valign="top">

- Stores tasks as flat records
- Displays them in the order added
- Leaves prioritization entirely to the user
- No feedback on productivity or consistency

</td>
<td valign="top">

- 🧠 Scores every task by importance + category
- 📈 Ranks tasks and surfaces the top priority
- ⚡ Recommends what to work on, automatically
- 🔥 Tracks habit streaks and spending over time

</td>
</tr>
</table>

<img src="assets/aura-glow-divider.svg" width="100%"/>

## 🧩 Feature Showcase

<table>
<tr>
<td width="25%" valign="top">

<img src="https://img.shields.io/badge/🧠-AI_Recommendation-2563eb?style=for-the-badge"/>

Analyzes every pending task and recommends the one to tackle first.

</td>
<td width="25%" valign="top">

<img src="https://img.shields.io/badge/📋-Smart_Tasks-7c3aed?style=for-the-badge"/>

Academic, work, and personal categories — each with its own priority weighting.

</td>
<td width="25%" valign="top">

<img src="https://img.shields.io/badge/⏰-Reminders-06b6d4?style=for-the-badge"/>

Message, date, and time — created and reviewed from the same menu.

</td>
<td width="25%" valign="top">

<img src="https://img.shields.io/badge/📝-Notes-22c55e?style=for-the-badge"/>

Structured personal notes that persist across sessions.

</td>
</tr>
<tr>
<td width="25%" valign="top">

<img src="https://img.shields.io/badge/🔥-Habit_Tracking-f97316?style=for-the-badge"/>

Daily completion tracking with streak counts.

</td>
<td width="25%" valign="top">

<img src="https://img.shields.io/badge/💰-Expenses-14b8a6?style=for-the-badge"/>

Log spending and see running totals.

</td>
<td width="25%" valign="top">

<img src="https://img.shields.io/badge/📊-Analytics-8b5cf6?style=for-the-badge"/>

Completed vs. pending counts and a productivity percentage.

</td>
<td width="25%" valign="top">

<img src="https://img.shields.io/badge/💾-Persistence-2563eb?style=for-the-badge"/>

Everything is saved to disk and reloaded on the next run.

</td>
</tr>
</table>

<img src="assets/aura-glow-divider.svg" width="100%"/>

## 🧠 The AI Engine

```mermaid
flowchart TD
    A["📥 User Tasks"] --> B["🗂️ Task Collection"] --> C["🏷️ Classification"] --> D["🔎 Importance Analysis"] --> E["📊 Priority Score"] --> F["📈 Task Ranking"] --> G["💡 Recommendation"] --> H["✅ User Action"]

    style A fill:#2563eb,color:#fff
    style D fill:#8b5cf6,color:#fff
    style E fill:#06b6d4,color:#0a0a0a
    style G fill:#f97316,color:#0a0a0a
    style H fill:#22c55e,color:#0a0a0a
```

**How the score is calculated:**

```
Priority Score = Importance + Category Weight

🎓 Academic Task  →  Importance + 20
💼 Work Task      →  Importance + 15
🏠 Personal Task  →  Importance +  0
```

A higher score means a higher recommendation priority. Here's the engine working on a real example:

```text
╭──────────────────────────────────────╮
│ 🤖 AURA — Priority Calculation        │
├──────────────────────────────────────┤
│ Task:            DAA Assignment      │
│ Category:        🎓 Academic          │
│ Importance:       80                 │
│ Category Bonus:  +20                 │
│ Final Priority:   100  🔥🔥🔥         │
│                                       │
│ Recommendation → Work on this first. │
╰──────────────────────────────────────╯
```

<img src="assets/aura-glow-divider.svg" width="100%"/>

## 🏛️ OOP Architecture

```
PersonalAssistant
│
├── 🧠 AIEngine
│
├── 📋 Task (base class)
│   ├── 🎓 AcademicTask
│   ├── 💼 WorkTask
│   └── 🏠 PersonalTask
│
├── ⏰ Reminder
├── 📝 Note
├── 🔥 Habit
└── 💰 Expense
```

<table>
<tr><th align="left">Class</th><th align="left">Responsibility</th></tr>
<tr><td><code>PersonalAssistant</code></td><td>Central orchestrator — composes and manages every other component</td></tr>
<tr><td><code>Task</code></td><td>Base representation of a unit of work</td></tr>
<tr><td><code>AcademicTask / WorkTask / PersonalTask</code></td><td>Category-specific subclasses, each with its own priority weighting</td></tr>
<tr><td><code>AIEngine</code></td><td>Applies the priority algorithm and generates recommendations</td></tr>
<tr><td><code>Reminder</code></td><td>Encapsulates a scheduled message with a date and time</td></tr>
<tr><td><code>Note</code></td><td>Encapsulates structured free-text notes</td></tr>
<tr><td><code>Habit</code></td><td>Tracks daily completion and streak consistency</td></tr>
<tr><td><code>Expense</code></td><td>Tracks individual spending entries and totals</td></tr>
</table>

**Class relationships:**

```mermaid
classDiagram
    class Task {
        <<abstract>>
        -string name
        -int importance
        -bool completed
        +calculatePriority() int
    }
    class AcademicTask
    class WorkTask
    class PersonalTask
    class Reminder { -string message -string date -string time }
    class Note { -string content }
    class Habit { -string name -int streak }
    class Expense { -string label -double amount }
    class AIEngine { +recommend(tasks) Task }
    class PersonalAssistant {
        -vector~Task~ tasks
        -vector~Reminder~ reminders
        -vector~Note~ notes
        -vector~Habit~ habits
        -vector~Expense~ expenses
    }

    Task <|-- AcademicTask
    Task <|-- WorkTask
    Task <|-- PersonalTask
    PersonalAssistant "1" *-- "many" Task
    PersonalAssistant "1" *-- "many" Reminder
    PersonalAssistant "1" *-- "many" Note
    PersonalAssistant "1" *-- "many" Habit
    PersonalAssistant "1" *-- "many" Expense
    PersonalAssistant --> AIEngine
```

**OOP concepts actually implemented in the codebase:**

<img src="assets/aura-skills.svg" width="100%"/>

<table>
<tr><td>🔒 <b>Encapsulation</b> — private task/user data</td><td>🧬 <b>Inheritance</b> — Academic/Work/Personal tasks</td></tr>
<tr><td>🎭 <b>Polymorphism</b> — virtual task behavior</td><td>🧩 <b>Abstraction</b> — AIEngine's simple interface</td></tr>
<tr><td>🧱 <b>Composition</b> — PersonalAssistant owns components</td><td>🏗️ <b>Constructors/Destructors</b> — init & cleanup</td></tr>
<tr><td>💾 <b>Dynamic Memory</b> — <code>new</code>/<code>delete</code></td><td>📚 <b>STL</b> — <code>vector</code> + algorithms</td></tr>
<tr><td>⚠️ <b>Exception Handling</b> — input/error handling</td><td>💽 <b>File Handling</b> — persistent storage</td></tr>
</table>

<sub>Only concepts genuinely present in the code are listed as implemented — anything else is tracked in the <a href="#-development-roadmap">Roadmap</a> instead of being claimed here.</sub>

<img src="assets/aura-glow-divider.svg" width="100%"/>

## 🔄 How AURA Works

<table>
<tr><td align="center"><b>01</b></td><td>📥 <b>User Input</b></td><td>User selects a menu option and provides data</td></tr>
<tr><td align="center"><b>02</b></td><td>⚙️ <b>Command Processing</b></td><td>Input is routed to the correct handler</td></tr>
<tr><td align="center"><b>03</b></td><td>🗂️ <b>Data Management</b></td><td>Entities are stored in memory using STL containers</td></tr>
<tr><td align="center"><b>04</b></td><td>🧠 <b>AI Analysis</b></td><td><code>AIEngine</code> inspects all pending tasks</td></tr>
<tr><td align="center"><b>05</b></td><td>📊 <b>Priority Calculation</b></td><td>Importance + category weight is computed per task</td></tr>
<tr><td align="center"><b>06</b></td><td>💡 <b>Recommendation</b></td><td>The highest-priority task is surfaced to the user</td></tr>
<tr><td align="center"><b>07</b></td><td>📈 <b>Productivity Tracking</b></td><td>Completion stats and habit streaks are updated</td></tr>
<tr><td align="center"><b>08</b></td><td>💾 <b>Data Persistence</b></td><td>State is written to disk for the next session</td></tr>
</table>

### Walking through an example

**Input:** *"I have a DAA assignment due tomorrow."*

```text
╭──────────────────────────────────────╮
│ 🤖 AURA                               │
├──────────────────────────────────────┤
│ Task detected:  DAA Assignment        │
│ Category:       🎓 Academic            │
│ Importance:     80                    │
│ Priority:       100 🔥                │
│                                        │
│ Recommendation → Complete this first. │
╰──────────────────────────────────────╯
```

<img src="assets/aura-glow-divider.svg" width="100%"/>

## 🖥️ Terminal Demo

```text
$ ./aura

╔══════════════════════════════════════╗
║              A U R A                  ║
║       AI PERSONAL ASSISTANT           ║
╚══════════════════════════════════════╝

 1. Add Task            9. View Habits
 2. View Tasks         10. Complete Habit
 3. Complete Task      11. Add Expense
 4. Add Reminder       12. View Expenses
 5. View Reminders     13. Ask AURA AI
 6. Add Note           14. Productivity Analysis
 7. View Notes         15. Save Data
 8. Add Habit           0. Exit

Enter choice: _
```

<sub>🎬 Record a real terminal session and save it as <code>assets/aura-demo.gif</code> to replace this static block — see <a href="#-project-showcase">Project Showcase</a>.</sub>

### Productivity Dashboard *(conceptual mockup — not yet implemented)*

```
╔══════════════════════════════════════════╗
║              AURA DASHBOARD               ║
╠══════════════════════════════════════════╣
║ ✅ Tasks Completed        7                ║
║ ⏳ Tasks Pending          2                ║
║ 📈 Productivity           84%              ║
║ 🔥 Habit Streak           12 days          ║
║ 💰 Monthly Expenses       ₹8,420           ║
╚══════════════════════════════════════════╝
```

<img src="assets/aura-glow-divider.svg" width="100%"/>

## 📁 Project Structure

<table>
<tr>
<th align="left">📌 Current</th>
<th align="left">🚀 Recommended Future</th>
</tr>
<tr valign="top">
<td>

```
AURA/
├── main.cpp
├── data/
│   └── aura_data.txt
└── README.md
```

</td>
<td>

```
AURA/
├── src/
│   ├── main.cpp
│   ├── Task.cpp
│   ├── AIEngine.cpp
│   ├── Reminder.cpp
│   ├── Habit.cpp
│   ├── Note.cpp
│   └── Expense.cpp
├── include/
│   └── *.h
├── data/
│   └── aura_data.txt
├── assets/
│   ├── aura-robot.svg
│   ├── aura-glow-divider.svg
│   ├── aura-skills.svg
│   └── aura-demo.gif
├── README.md
└── LICENSE
```

</td>
</tr>
</table>

## 🛠️ Technology Stack

<div align="center">

**✅ Currently used**

<img src="https://skillicons.dev/icons?i=cpp,git,github"/>
<br/>
<img src="https://img.shields.io/badge/OOP-8A2BE2?style=flat-square"/>
<img src="https://img.shields.io/badge/STL-06B6D4?style=flat-square"/>
<img src="https://img.shields.io/badge/File%20Handling-22C55E?style=flat-square"/>
<img src="https://img.shields.io/badge/Standard%20Library-555555?style=flat-square"/>

**🔮 Planned, not yet implemented**

<img src="https://img.shields.io/badge/SQLite-lightgrey?style=flat-square&logo=sqlite"/>
<img src="https://img.shields.io/badge/REST%20API-grey?style=flat-square"/>
<img src="https://img.shields.io/badge/LLM%20API-grey?style=flat-square"/>
<img src="https://img.shields.io/badge/GUI-grey?style=flat-square"/>
<img src="https://img.shields.io/badge/Voice%20Interface-grey?style=flat-square"/>

</div>

<img src="assets/aura-glow-divider.svg" width="100%"/>

## ⚙️ Installation

**1. Clone the repository**

```bash
git clone <YOUR_REPOSITORY_URL>
cd AURA
```

**2. Compile**

```bash
# Single-file build (current structure)
g++ main.cpp -o aura

# Multi-file build (if using the recommended future structure)
g++ src/*.cpp -Iinclude -o aura
```

**3. Run**

```bash
./aura        # Linux / macOS
aura.exe      # Windows
```

## 📖 Usage Guide

<details>
<summary>📋 <b>Task Management</b></summary>
<br/>
Add academic, work, or personal tasks with an importance score and deadline. Mark tasks complete from the menu — AURA computes each task's priority automatically.
</details>

<details>
<summary>⏰ <b>Reminders</b></summary>
<br/>
Add a reminder with a message, date, and time. View all active reminders from the menu.
</details>

<details>
<summary>📝 <b>Notes</b></summary>
<br/>
Create structured personal notes and view them at any time.
</details>

<details>
<summary>🔥 <b>Habits</b></summary>
<br/>
Add a habit, mark it complete for the day, and watch your streak grow.
</details>

<details>
<summary>💰 <b>Expenses</b></summary>
<br/>
Log an expense with a label and amount. View total spending at any time.
</details>

<details>
<summary>🧠 <b>AI Recommendations</b></summary>
<br/>
Ask AURA which task to work on next — the priority engine ranks pending tasks and returns the top pick.
</details>

<details>
<summary>📊 <b>Productivity Analysis</b></summary>
<br/>
View total tasks, completed tasks, pending tasks, and your overall productivity percentage.
</details>

<details>
<summary>💾 <b>Saving Data</b></summary>
<br/>
Save the current session's data to disk so it's available the next time AURA runs.
</details>

<img src="assets/aura-glow-divider.svg" width="100%"/>

## 🎥 Project Showcase

Assets referenced throughout this README that don't exist yet — capture and add them to `assets/`:

<table>
<tr><th align="left">File</th><th align="left">What to capture</th></tr>
<tr><td><code>assets/aura-robot.svg</code></td><td>✅ Included — animated mascot used at the top of this README</td></tr>
<tr><td><code>assets/aura-glow-divider.svg</code></td><td>✅ Included — animated section-divider used throughout</td></tr>
<tr><td><code>assets/aura-skills.svg</code></td><td>✅ Included — animated OOP concept meter</td></tr>
<tr><td><code>assets/aura-demo.gif</code></td><td>Full session recording (add a task → get a recommendation)</td></tr>
<tr><td><code>assets/aura-dashboard.png</code></td><td>Screenshot of the productivity summary output</td></tr>
<tr><td><code>assets/aura-architecture.svg</code></td><td>Exported architecture diagram, if you build one outside Mermaid</td></tr>
</table>

## 🗺️ Development Roadmap

<table>
<tr><td valign="top">

**✅ Phase 1 — Core OOP**
- [x] Task management
- [x] Task inheritance
- [x] Rule-based AI recommendation engine
- [x] Reminder system
- [x] Notes
- [x] Habit tracking
- [x] Expense tracking
- [x] Productivity analysis
- [x] File persistence

</td><td valign="top">

**🚧 Phase 2 — Intelligence**
- [ ] Natural language command parser
- [ ] Advanced priority algorithm
- [ ] Smart scheduling
- [ ] Deeper personalized recommendations

</td></tr>
<tr><td valign="top">

**🔮 Phase 3 — AI**
- [ ] LLM integration
- [ ] Context-aware assistant
- [ ] Conversational memory
- [ ] AI-generated planning

</td><td valign="top">

**🚀 Phase 4 — Platform**
- [ ] GUI
- [ ] SQLite persistence
- [ ] Voice assistant
- [ ] Mobile / web interface
- [ ] Cloud synchronization

</td></tr>
</table>

<img src="assets/aura-glow-divider.svg" width="100%"/>

## 🚀 Future Vision

<div align="center">

> **A complete intelligent personal operating system.**

<img src="https://img.shields.io/badge/🎙️-Voice%20Interaction-2563eb?style=flat-square"/>
<img src="https://img.shields.io/badge/🗣️-NLU-7c3aed?style=flat-square"/>
<img src="https://img.shields.io/badge/📅-Calendar%20Sync-06b6d4?style=flat-square"/>
<img src="https://img.shields.io/badge/📧-Gmail%20Integration-22c55e?style=flat-square"/>
<img src="https://img.shields.io/badge/💬-Telegram%2FWhatsApp-f97316?style=flat-square"/>
<img src="https://img.shields.io/badge/🌦️-Weather-8b5cf6?style=flat-square"/>
<img src="https://img.shields.io/badge/🧭-Smart%20Scheduling-2563eb?style=flat-square"/>
<img src="https://img.shields.io/badge/📚-AI%20Study%20Planner-7c3aed?style=flat-square"/>
<img src="https://img.shields.io/badge/💸-AI%20Expense%20Advisor-06b6d4?style=flat-square"/>
<img src="https://img.shields.io/badge/🌅-Daily%20Briefing-22c55e?style=flat-square"/>
<img src="https://img.shields.io/badge/☁️-Cloud%20Sync-f97316?style=flat-square"/>

<sub>Everything above is a future idea, not a current feature.</sub>

</div>

## 🛡️ Security & Privacy

- 🔒 Data is stored **locally** via file handling — nothing leaves the machine today.
- 🚫 No external data sharing exists in the current implementation.
- 🔮 **Planned:** encryption at rest, authentication, and secure API-key handling via environment variables once external integrations are added.

## ⚡ Performance

<table>
<tr><th align="left">Operation</th><th align="left">Complexity</th></tr>
<tr><td>Task recommendation (priority sort)</td><td><code>O(n log n)</code></td></tr>
<tr><td>Task traversal / listing</td><td><code>O(n)</code></td></tr>
<tr><td>Habit streak update</td><td><code>O(1)</code> per habit</td></tr>
<tr><td>Expense total calculation</td><td><code>O(n)</code></td></tr>
</table>

<img src="assets/aura-glow-divider.svg" width="100%"/>

## 🎓 Learning Outcomes

This project demonstrates:

<img src="https://img.shields.io/badge/Object--Oriented%20Design-2563eb?style=flat-square"/>
<img src="https://img.shields.io/badge/Software%20Architecture-7c3aed?style=flat-square"/>
<img src="https://img.shields.io/badge/Dynamic%20Memory-06b6d4?style=flat-square"/>
<img src="https://img.shields.io/badge/Polymorphism-22c55e?style=flat-square"/>
<img src="https://img.shields.io/badge/Inheritance-f97316?style=flat-square"/>
<img src="https://img.shields.io/badge/STL-8b5cf6?style=flat-square"/>
<img src="https://img.shields.io/badge/File%20Handling-2563eb?style=flat-square"/>
<img src="https://img.shields.io/badge/Algorithm%20Design-7c3aed?style=flat-square"/>
<img src="https://img.shields.io/badge/System%20Design-06b6d4?style=flat-square"/>

## 🤝 Contributing

1. 🍴 Fork the repository
2. 🌿 Create a feature branch
3. ✏️ Make your changes
4. ✅ Test thoroughly
5. 💾 Commit your changes
6. 📤 Push to your branch
7. 🔁 Open a pull request

## 📄 License

Distributed under the **MIT License**. *(Replace this section if the repository already has a different license.)*

<img src="assets/aura-glow-divider.svg" width="100%"/>

<div align="center">

## 👨‍💻 Author

**Ranjan Kumar Nandi**
🆔 `B125095`
📁 Project: AI Powered Personal Assistant (AURA)

<img src="https://img.shields.io/badge/GitHub-<YOUR_GITHUB>-181717?style=flat-square&logo=github&logoColor=white"/>
<img src="https://img.shields.io/badge/LinkedIn-<YOUR_LINKEDIN>-0A66C2?style=flat-square&logo=linkedin&logoColor=white"/>
<img src="https://img.shields.io/badge/Email-<YOUR_EMAIL>-EA4335?style=flat-square&logo=gmail&logoColor=white"/>

<br/>

⭐ **If this project sparked an idea, consider starring the repository.**

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:06b6d4,50:7c3aed,100:0f172a&height=130&section=footer" width="100%"/>

</div> 
