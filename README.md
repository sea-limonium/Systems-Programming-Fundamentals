## Systems Programming Fundamentals

A collection of 10 small programs and scripts demonstrating foundational programming concepts across C, Windows Batch, and Bash, covering everything from basic I/O and control flow to pointers, file manipulation, and system administration tasks.

### Project Structure

```
Systems_Programming_Fundamentals/
├── CW1SOB1.c       # Simple C program -personal info display + arithmetic
├── CW1SOB2.c       # User input - name + number operations with formatted output
├── CW1SOB3.c       # Control structures - exam score classifier (loop until -1)
├── CW1SOB4.c       # Functions - password entry system with 3-attempt lockout
├── CW1SOB5.c       # Pointers - arithmetic operations with memory addresses
├── CW1SOB6.bat     # Batch - creates files, folders, and organises them into "The_Bag"
├── CW1SOB8.bat     # Batch - creates, writes to, copies, and cleans up a text file
├── CW1SOB9.sh      # Bash - creates directories and files, moves folders with content
└── CW1SOB10.sh     # Bash - parameterised script to generate x folders with y files each
```

## Programs

### C Programs (1–5)


**SOB 1**: Displays student information and performs four arithmetic operations (+, −, ×, ÷) using digits from a student ID.

**SOB 2**: Takes the user's name and two numbers as input, then displays all four arithmetic results in a formatted sentence (e.g. *"Anastasia has entered 10 and 5. 10 + 5 equals 15."*).

**SOB 3**: Prompts for an exam score and classifies it (Fail / Third / Lower Second / Upper Second / First). Loops continuously until the user enters `-1` to exit.

**SOB 4**: A two-part program: a `printName` function that prints the user's name X times, followed by a `passwordEntry` function that gives the user 3 attempts to enter the correct password before locking them out.

**SOB 5**: Reads two numbers, stores them using pointers, performs Sum / Difference / Product / Quotient, and prints the memory addresses before and after the calculations.


### Batch Scripts (6, 8)

**SOB 6**: Creates 3 text files and 3 folders, places one file in each folder, wraps everything inside a `The_Bag` directory, and confirms completion.

**SOB 8**: Creates a `myBatchScript` folder, writes a knock-knock recursion joke to `results.txt`, copies it into the folder, deletes the original, and prints "Task Complete!".


### Bash Scripts (9, 10)

**SOB 9**: Takes an existing directory path as input, creates three subdirectories (`a`, `b`, `c`), stores text files in `a` and `b`, then moves both into `c`.

**SOB 10**: Takes 3 parameters: a path, a number of folders (x), and a number of files per folder (y). Creates the directory if it doesn't exist, generates x numbered folders each containing y numbered `.txt` files.

## Installation & Usage

No external dependencies; C compiler and terminal.

### C Programs

```bash
gcc CW1SOB1.c -o CW1SOB1
./CW1SOB1
```

Repeat for SOB 2-5. On Windows with MinGW, use `gcc` the same way, or compile in any standard C environment.

### Batch Scripts (Windows)

```cmd
CW1SOB6.bat
CW1SOB8.bat
```

### Bash Scripts (Linux/macOS/WSL)

```bash
chmod +x CW1SOB9.sh CW1SOB10.sh

# SOB 9 — pass an existing directory
./CW1SOB9.sh /path/to/directory

# SOB 10 — pass a path, number of folders, number of files
./CW1SOB10.sh /path/to/output 5 3
```

---

Built as individual coursework for CST1500 - Computer Systems Architecture and Operating Systems at Middlesex University (Autumn 2024).
