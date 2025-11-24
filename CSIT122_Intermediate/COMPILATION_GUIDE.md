# CSIT122 Projects - Compilation Guide

## Overview
All CSIT122 projects are multi-file programs designed for Windows using Dev-C++ or similar IDEs. Each project directory contains all necessary files to compile and run the complete program.

## Project Summaries

### PROJECT3_PANCITO_CG5 - Airline Booking System
**Files:** main.c, airline.c, customFunctions.h, Makefile.win  
**Features:** Array-based seat reservation, menu system, custom terminal UI  
**Compile:** `gcc main.c airline.c -o airline`  
**Note:** Requires Windows headers (windows.h, conio.h)

### PROJECT4_PANCITO_CG5 - Array Operations
**Files:** main.c, ARRAYop.c, ARRAYop.h  
**Features:** 
- Initialize array with unique values
- Insert/remove at position or front
- Locate elements
- Bubble sort (ascending/descending)
- Custom terminal UI with colored output

**Compile:** `gcc main.c ARRAYop.c -o arrayops`

### PROJECT5_PANCITO_CG5 - Multi-Dimensional Arrays
**Files:** main.c, mdArray.c, mdArray.h, MYTOOLS.H  
**Features:**
- Matrix transpose
- 4D array manipulation
- Custom terminal UI functions

**Compile:** `gcc main.c mdArray.c -o mdarray`

### PROJECT6_PANCITOCG5 - String Manipulation
**Files:** PROJECT6_PANCITOCG5.c  
**Features:**
- String case conversion
- Reverse string
- Count words, alphabets, digits, vowels, consonants
- Pattern matching with replacement

**Compile:** `gcc PROJECT6_PANCITOCG5.c -o strings`  
**Status:** ✅ Linux-compatible (no Windows headers)

### PROJECT7_PANCITO_CG5 - Student Records with Structures
**Files:** main.c, struct.c, struct.h, MYTOOLS.H  
**Features:**
- Nested structures (name, birth date, subjects)
- GPA calculation
- Multi-subject grade tracking
- Custom terminal UI

**Compile:** `gcc main.c struct.c -o student_records`

### proj5 - Alternative Multi-Dimensional Array Project
**Files:** main.c, mdArray.c, mdArray.h  
**Features:** Similar to PROJECT5 but simplified implementation  
**Compile:** `gcc main.c mdArray.c -o proj5`

---

## Common Issues & Solutions

### Issue: `fatal error: conio.h: No such file or directory`
**Solution:** This is a Windows-only header. Options:
1. Compile on Windows using MinGW or Dev-C++
2. Remove conio.h functions (getch, clrscr) and replace with standard alternatives
3. Use a compatibility library like ncurses

### Issue: `fatal error: windows.h: No such file or directory`
**Solution:** 
- windows.h provides functions like `gotoxy()`, `Sleep()`, terminal colors
- Cross-compile using MinGW: `x86_64-w64-mingw32-gcc main.c struct.c -o program.exe`
- Or rewrite terminal UI functions using ANSI escape codes

### Issue: Multiple definition errors
**Solution:** Make sure you're compiling with all required .c files:
```bash
gcc main.c implementation.c -o output
```

---

## Makefiles
Some projects include `Makefile.win` for Dev-C++ IDE. To use:
1. Open the .dev project file in Dev-C++
2. Click "Execute > Compile" or press F9
3. Run the compiled .exe file

---

## Recommended Compilation Order
1. **Start with PROJECT6** - Only Linux-compatible project
2. **Try PROJECT4** - Good introduction to multi-file projects
3. **Then PROJECT7** - More complex with structures
4. **Finally PROJECT3 & PROJECT5** - Most complex terminal UI

---

## Source Code Integrity
All files preserve original implementations including:
- Author comments (Christian Harry R. Pancito CSIT122-G5)
- Custom gotoxy() and drawing functions
- Color-coded menus (Windows Color command)
- Original logic and algorithms

**No code modifications made** - files copied as-is from submitted projects.
