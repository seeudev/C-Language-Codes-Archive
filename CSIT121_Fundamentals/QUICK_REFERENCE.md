# CSIT121 - Quick Reference

## Standalone Examples (82 files)
All files compile and run independently on Linux/Unix systems.

### Compilation
```bash
gcc filename.c -o program
./program
```

### File Categories

#### Basic I/O (Input/Output)
- `printinghello121.c` - Hello World variations
- `addten.c` - Simple arithmetic
- `typecast.c` - Type conversion examples
- `floor.c` - Math library functions

#### Conditionals
- `ifelsegreater.c` - Basic if-else
- `doubleif.c` - Multiple conditions
- `comparison ifelse.c` - Comparison operators
- `seniorifelse.c` - Nested conditionals
- `decimalif.c` - Decimal comparisons

#### Loops
- `for1.c` to `for6.c` - For loop examples
- `codec while.c` - While loop basics
- `dowhile.c` - Do-while patterns
- `nestedloop.c` - Nested iterations
- `hundo.c`, `i100.c` - Count to 100

#### Functions
- `functions.c` - Basic function calls
- `hellofunc.c` - Function with no parameters
- `funcreturn.c` - Return values
- `functionvoid.c` - Void functions
- `intfunc.c` - Integer functions
- `expfunc.c` - Exponent calculations
- `prodfunc.c` - Product functions

#### Arrays
- `sizearr.c` - Array size and average
- `teststring.c` - String arrays
- `truncate.c` - Array truncation

#### Switch-Case
- `switchcase.c` - Basic switch
- `switchweek.c` - Days of week
- `switchcaseadu.c` - Advanced switch patterns

#### String Operations
- `strlength.c` - String length
- `stringtypes.c` - String types
- `str lib.c` - String library functions
- `charararar.c` - Character arrays

#### Mathematical Operations
- `divby.c` - Division operations
- `min.c`, `maxval.c` - Min/max values
- `reverseint.c` - Reverse integers
- `count.c`, `countinnggg.c` - Counting algorithms

---

## Practice Exercises (34 files)
CodeChum and course exercises.

### CodeChum Challenges
- `codechum.c`, `codechumconditional.c`, `codechumconditional2.c`
- `codechumexe1r.c`, `codechum continue.c`
- `coodechumtimeconvers.c` - Time conversion

### Lair Exercises
- `lairq21.c`, `lairq22.c`, `lairq23.c` - Question sets
- `lairqex3.c`, `lairqexer3.2.c` - Exercise sets
- `lairtest.c` - Test programs

### Test Programs
- `test2.c`, `testcase.c`, `testproj5.c`
- `onlinetest.c`, `quizlairprefi.c`
- `pattern.c` - Pattern printing

### Function Exercises
- `func1.c`, `func2.c`, `func3.c` - Basic functions
- `funcexer3.c` - Function exercises
- `recursive.c` - Recursion examples
- `testfunc213123.c` - Function testing

### Loop Practice
- `dowhile.c`, `dowhile2.c` - Do-while loops
- `multi2.c` - Multiplication tables
- `summat.c`, `summat2.c` - Summation

---

## Projects (3 files)
Multi-file programs requiring dependencies.

### PANCITO_SOCCER Game
- `PANCITO_SOCCER.c` - Final version
- `PANCITO_SOCCER - Copy.c` - Backup version
- `forPANCITO_SOCCER.c` - Development version

**Note:** These require Windows headers (windows.h, conio.h) for terminal graphics.

---

## Tips for Learning

### Beginners Start Here:
1. `printinghello121.c` - Hello World
2. `addten.c` - Basic arithmetic
3. `for1.c` - First loop
4. `ifelsegreater.c` - First conditional
5. `functions.c` - First function

### Intermediate Practice:
1. `nestedloop.c` - Nested loops
2. `switchweek.c` - Switch statements
3. `sizearr.c` - Arrays
4. `recursive.c` - Recursion
5. `strlength.c` - Strings

### Challenge Problems:
1. CodeChum exercises (conditional logic)
2. Lair questions (comprehensive problems)
3. Pattern printing programs
4. Multi-dimensional array problems

---

## Common Patterns

### Input/Process/Output
```c
#include <stdio.h>
int main() {
    int input;
    scanf("%d", &input);
    // process
    printf("%d", result);
    return 0;
}
```

### Loop Pattern
```c
for(int i = 0; i < n; i++) {
    // loop body
}
```

### Function Pattern
```c
int functionName(int param) {
    // function body
    return value;
}
```

---

**All files tested and verified to compile on Linux systems.**
