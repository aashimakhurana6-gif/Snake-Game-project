# Snake Game in C

A simple terminal-based Snake Game implemented in **C**, following structured programming principles.
This project is created as part of the academic submission and follows the mandatory GitHub repository structure.

---

## 📌 Project Overview

This project implements the classic **Snake Game**, where the player controls a snake to eat food and grow in size without colliding with walls or itself. The game runs in the terminal using basic C functions such as loops, arrays, and `conio.h` for keyboard input.

---

## 🎯 Features

* Playable snake movement (UP/DOWN/LEFT/RIGHT)
* Dynamic food generation
* Collision detection
* Score tracking
* Simple ASCII-based game board
* Lightweight, dependency-free C code

---

## 📁 Folder Structure (Mandatory for Evaluation)

```
/
|-- src/               # All .c source files
|     |-- main.c
|     |-- game.c
|     |-- board.c
|
|-- include/           # All .h header files
|     |-- game.h
|     |-- board.h
|
|-- docs/              # Project documentation
|     |-- ProjectReport.pdf
|     |-- flowchart.png
|
|-- assets/            # (optional) Images, screenshots, diagrams
|     |-- screenshot.png
|
|-- sample_input.txt   # (optional)
|
|-- README.md          # Project description and instructions
```

> ⚠️ **Folder names are case-sensitive**:
> Must be exactly: `src`, `include`, `docs`, `assets`

---

## 🛠️ How to Compile and Run

### **Using GCC**

```bash
gcc src/main.c src/game.c src/board.c -I include -o snake
./snake
```

### **Requirements**

* GCC compiler
* Windows/Linux terminal
* `<conio.h>` supported (use windows)
* On Linux, replace `conio.h` features with alternatives if needed

---

## 🎮 Controls

| Key | Action     |
| --- | ---------- |
| W   | Move Up    |
| S   | Move Down  |
| A   | Move Left  |
| D   | Move Right |
| X   | Exit Game  |



## 📄 Documentation

Full project documentation is included at:

```
/docs/ProjectReport.pdf
```

It contains:

* Abstract
* Problem Definition
* Algorithms & Flowcharts
* Implementation
* Testing & Results
* Conclusion & Future 

## 📜 License

This project is for academic purposes only.
