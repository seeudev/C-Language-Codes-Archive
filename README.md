# C Programming Course Archive

Organized repository of C programming coursework from CSIT121 (Fundamentals) and CSIT122 (Intermediate Programming).

---

## Repository Structure

### CSIT121_Fundamentals/ (119 files)

| Category | Files | Description | Runnable |
|----------|-------|-------------|----------|
| `Standalone_Examples/` | 82 | Single-file programs covering basics, loops, conditionals, functions, arrays | ✅ Yes |
| `Practice_Exercises/` | 34 | CodeChum problems, lair exercises, practice challenges | ✅ Yes |
| `Projects/` | 3 | PANCITO_SOCCER game project files | ⚠️ Needs Windows (conio.h) |

**Key Topics:** Input/output, conditionals, loops, switch-case, functions, arrays, strings

### CSIT122_Intermediate/ (19 files across 6 projects)

| Project | Files | Description | Runnable |
|---------|-------|-------------|----------|
| `PROJECT3_PANCITO_CG5/` | 6 | Airline booking system with arrays and functions | ⚠️ Windows-only |
| `PROJECT4_PANCITO_CG5/` | 3 | Array operations (insert, remove, sort, search) | ⚠️ Windows-only |
| `PROJECT5_PANCITO_CG5/` | 3 | Multi-dimensional arrays and matrix transpose | ⚠️ Windows-only |
| `PROJECT6_PANCITOCG5/` | 1 | String manipulation with character analysis | ✅ Yes |
| `PROJECT7_PANCITO_CG5/` | 3 | Student record system using structures | ⚠️ Windows-only |
| `proj5/` | 3 | Alternate multi-dimensional array implementation | ⚠️ Windows-only |

**Key Topics:** Structures, multi-file projects, modular programming, advanced arrays

---

## Compilation Notes

### ✅ Linux-Compatible Files
All files in `CSIT121_Fundamentals/Standalone_Examples/` and `Practice_Exercises/` compile and run on Linux:
```bash
gcc filename.c -o output
./output
```

### ⚠️ Windows-Specific Projects
Most CSIT122 projects use Windows-specific headers:
- `<conio.h>` - Console I/O functions (getch, clrscr, etc.)
- `<windows.h>` - Terminal UI functions (gotoxy, drawBox, etc.)

**To run on Linux:** Remove Windows-specific code or use compatibility libraries

### Multi-File Projects
Projects with multiple `.c` files require linking:
```bash
cd CSIT122_Intermediate/PROJECT7_PANCITO_CG5
gcc main.c struct.c -o program
```

---

## File Organization

- **CSIT121:** Organized by usability (standalone vs. projects)
- **CSIT122:** Organized by project structure (all project files kept together)
- **Binary files:** All .exe, .o, .out files removed (159 files deleted)
- **Original directories:** Preserved in `CSIT121/outputs/` and `G5 CSIT 122 Intermediate Programming/`

---

**Last Updated:** November 24, 2025  
**Total Source Files:** 138 C/H files organized  
**Verified Executable:** CSIT121 standalone files tested and confirmed working
