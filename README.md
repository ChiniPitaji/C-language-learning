# 📘 C Language Learning 

Welcome to **Module 1** of your C language learning journey! 🚀
This module covers the fundamentals — from understanding IDEs to writing and running your first C program.

---

## 🧠 Topics Covered

### 1. What is a Programming Language?

A **programming language** is a formal way to communicate instructions to a computer. It allows us to write programs that perform specific tasks.

---

### 2. What is an IDE?

An **IDE (Integrated Development Environment)** is software that provides tools to write, compile, and debug code easily.
Examples: **Code::Blocks**, **Dev C++**, **VS Code**.

#### 🧩 Need of an IDE

* Combines editor, compiler, and debugger in one place.
* Increases productivity and reduces setup complexity.
* Provides syntax highlighting and error detection.

---

### 3. Installing IDEs

* **Windows:** Install Code::Blocks or VS Code with the C/C++ extension.
* **Mac:** Use Xcode or VS Code with GCC compiler via Homebrew.
* **Linux:** Install GCC using `sudo apt install build-essential` and use VS Code or terminal.

---

### 4. Basic Program Structure

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

#### Explanation:

* `#include <stdio.h>` → Includes the standard input-output library.
* `int main()` → Entry point of every C program.
* `printf()` → Displays output on the screen.
* `return 0;` → Indicates successful program execution.

---

### 5. Showing Output using `printf()`

The `printf()` function is used to display output.

```c
printf("My name is %s and I am %d years old.", "Alex", 20);
```

#### Common Format Specifiers

| Specifier | Meaning                                |
| --------- | -------------------------------------- |
| `%d`      | Integer                                |
| `%f`      | Floating-point number                  |
| `%c`      | Character                              |
| `%s`      | String                                 |
| `%.2f`    | Floating number up to 2 decimal places |

---

### 6. Importance of the `main()` Method

* Every C program must have a `main()` function.
* Execution starts from `main()`.
* It defines the program’s control flow.

---

### 7. File Extensions

| Extension | Description                                  |
| --------- | -------------------------------------------- |
| `.c`      | Source code file                             |
| `.h`      | Header file containing function declarations |

---

### 8. Comments in C

Used to explain code and ignored by the compiler.

```c
// This is a single-line comment
/* This is a
   multi-line comment */
```

---

### 9. Writing and Running Code using Command Line

#### Steps:

1. Open terminal or command prompt.
2. Write your program in a `.c` file (e.g., `hello.c`).
3. Compile the program:

   ```bash
   gcc hello.c -o hello
   ```
4. Run the program:

   ```bash
   ./hello   # Linux/Mac
   hello.exe # Windows
   ```

---

### 10. What is a Compiler?

A **compiler** translates C source code into machine code that can be executed by a computer.
Example: **GCC (GNU Compiler Collection)**.

---

### 11. What is an Algorithm?

An **algorithm** is a step-by-step set of instructions to solve a particular problem logically and efficiently.

Example:

```text
Algorithm to find the sum of two numbers:
1. Start
2. Input two numbers (a, b)
3. Calculate sum = a + b
4. Display sum
5. Stop
```

---

### 12. What is Syntax?

**Syntax** defines the rules of writing valid code. If syntax rules are broken, the compiler shows errors.

Example of correct syntax:

```c
int a = 5;
```

Incorrect syntax:

```c
int a = 5   // Missing semicolon
```

---

### ✅ Summary

In this module, you learned about:

* The purpose and setup of an IDE
* Writing and compiling your first C program
* The structure, syntax, and components of C
* Output functions, comments, and file types
* The basics of algorithms and compilers

---

Welcome to **Module 2** of your C language journey! 💡
In this module, you’ll learn how to store, name, and manipulate data in C through variables, data types, constants, and input/output operations.

---

## 🧠 Topics Covered

### 1. Variables

A **variable** is a named memory location that stores data. Its value can change during program execution.

Example:

```c
int age = 20;
float price = 99.99;
char grade = 'A';
```

---

### 2. Memory Allocation

When you declare a variable, the compiler reserves a specific amount of memory for it based on its **data type**.

| Data Type   | Size (32-bit) | Size (64-bit) | Example      |
| ----------- | ------------- | ------------- | ------------ |
| `char`      | 1 byte        | 1 byte        | 'A'          |
| `int`       | 4 bytes       | 4 bytes       | 10           |
| `float`     | 4 bytes       | 4 bytes       | 3.14         |
| `double`    | 8 bytes       | 8 bytes       | 3.14159      |
| `long`      | 4 bytes       | 8 bytes       | 123456789L   |
| `short`     | 2 bytes       | 2 bytes       | 32767        |
| `long long` | 8 bytes       | 8 bytes       | 9876543210LL |

---

### 3. Variable Declaration

Declaration tells the compiler the **type** and **name** of a variable.

```c
int a;        // Declaration
float b = 5.5; // Declaration + Initialization
```

Rules:

* Must start with a letter or underscore.
* Cannot start with a digit.
* No spaces or special symbols.
* C is case-sensitive (`Age` ≠ `age`).

---

### 4. Naming Conventions

Naming variables properly makes code readable and maintainable.

| Convention     | Example       | Description                            |
| -------------- | ------------- | -------------------------------------- |
| **camelCase**  | `studentAge`  | Common in C variable names             |
| **snake_case** | `student_age` | Often used in functions or variables   |
| **kebab-case** | `student-age` | ❌ Not allowed in C (hyphen is invalid) |

💡 **Tip:** Keep variable names short, meaningful, and self-explanatory.

---

### 5. C Identifier Rules

* Must begin with a letter or underscore.
* Cannot contain spaces.
* Cannot use C keywords.
* Only letters, digits, and underscores are allowed.

Valid: `count`, `_total`, `sum1`
Invalid: `1sum`, `total value`, `int`

---

### 6. Literals

**Literals** are fixed values directly written in code.

| Type              | Example                              |
| ----------------- | ------------------------------------ |
| Integer Literal   | `10`, `-50`                          |
| Floating Literal  | `3.14`, `-0.25`                      |
| Character Literal | `'A'`, `'@'`                         |
| String Literal    | `"Hello"`                            |
| Boolean Literal   | `true`, `false` (from `<stdbool.h>`) |

---

### 7. Constants

Constants are variables whose values **cannot change** during execution.

```c
#define PI 3.1416          // Using preprocessor directive
const int MAX_LIMIT = 100; // Using const keyword
```

---

### 8. Keywords in C

**Keywords** are reserved words that have predefined meanings in C. You cannot use them as identifiers.

#### 🔑 List of 32 C Keywords

```
auto       break      case       char       const
continue   default    do         double     else
enum       extern     float      for        goto
if         int        long       register   return
short      signed     sizeof     static     struct
switch     typedef    union      unsigned   void
volatile   while
```

---

### 9. Escape Sequences

Escape sequences are special characters used to format output.

| Sequence | Meaning         |
| -------- | --------------- |
| `\n`     | New line        |
| `\t`     | Horizontal tab  |
| `\\`     | Backslash       |
| `\"`     | Double quote    |
| `\'`     | Single quote    |
| `\r`     | Carriage return |
| `\b`     | Backspace       |

Example:

```c
printf("Hello\nWorld\t2025");
```

Output:

```
Hello
World    2025
```

---

### 10. User Input using `scanf()`

The `scanf()` function is used to take input from the user.

Example:

```c
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("You entered: %d", a);
    return 0;
}
```

> Note: Always use `&` before variable names in `scanf()` to store input at their memory address.

---

### 11. Program: Sum of Two Numbers

```c
#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d", sum);

    return 0;
}
```

**Output Example:**

```
Enter first number: 5
Enter second number: 7
Sum = 12
```

---

### ✅ Summary

In this module, you learned:

* How to declare, name, and use variables
* Data types and their memory allocation
* Constants, literals, and keywords
* Escape sequences for formatting output
* Taking user input with `scanf()`
* Writing a simple program to add two numbers

---

Welcome to **Module 3** of your C language learning journey! ⚙️
This module focuses on **C instructions**, **operators**, **type conversions**, and **control instructions** — the core building blocks of C programming logic.

---

## 🧠 Topics Covered

### 1. C Instructions

In C, **instructions** are statements that tell the computer what to do. Each C program is made up of a sequence of instructions.

#### Types of C Instructions

| Type                              | Description                                                            | Example                              |
| --------------------------------- | ---------------------------------------------------------------------- | ------------------------------------ |
| **Type Declaration Instructions** | Used to declare the type of variables before using them.               | `int a, b; float avg;`               |
| **Arithmetic Instructions**       | Used to perform arithmetic operations like addition, subtraction, etc. | `sum = a + b;`                       |
| **Control Instructions**          | Used to control the flow of program execution.                         | `if`, `for`, `while`, `switch`, etc. |

---

### 2. Assignment Operator

The **assignment operator** (`=`) is used to assign a value to a variable.

```c
int a = 10;   // assigns 10 to a
a = a + 5;    // adds 5 to the value of a
```

Other assignment variants include shorthand operators (discussed later).

---

### 3. Type Declaration Instruction

This instruction tells the compiler what type of data a variable will store.

Examples:

```c
int age;        // integer variable
float price;    // floating-point variable
char grade;     // character variable
```

💡 Always declare variables before using them in C, as it is a **statically typed** language.

---

### 4. Arithmetic Operators

Arithmetic operators are used to perform basic mathematical operations.

| Operator | Meaning        | Example | Result                      |
| -------- | -------------- | ------- | --------------------------- |
| `+`      | Addition       | `a + b` | Sum of a and b              |
| `-`      | Subtraction    | `a - b` | Difference of a and b       |
| `*`      | Multiplication | `a * b` | Product of a and b          |
| `/`      | Division       | `a / b` | Quotient of a and b         |
| `%`      | Modulus        | `a % b` | Remainder of a divided by b |

Example:

```c
int a = 10, b = 3;
printf("Sum = %d\n", a + b);
printf("Remainder = %d\n", a % b);
```

---

### 5. Arithmetic Instructions

Arithmetic instructions tell the compiler to perform operations on variables and store the result.

```c
sum = a + b;         // valid
avg = (a + b) / 2;   // valid
```

✅ You can perform operations directly on constants too:

```c
x = 3 * 5 + 10;  // valid
```

❌ But you cannot assign to constants:

```c
10 = x + y; // invalid
```

---

### 6. Integer and Float Conversion

When performing arithmetic operations between integers and floats, **C automatically promotes** integers to floats.

Example:

```c
int a = 5;
float b = 2.0;
float result = a / b;  // result = 2.5
```

Here, `a` (integer) is automatically converted to `float` before division.

---

### 7. Type Conversions

There are two kinds of type conversions in C:

| Type                                     | Description                         | Example                           |
| ---------------------------------------- | ----------------------------------- | --------------------------------- |
| **Implicit Conversion (Type Promotion)** | Done automatically by the compiler. | `int a = 5; float b = a + 2.5;`   |
| **Explicit Conversion (Type Casting)**   | Done manually by the programmer.    | `float avg = (float)sum / count;` |

#### Type Conversion Hierarchy (Automatic Promotion)

`char → int → float → double`

Example:

```c
int x = 10;
char y = 'A'; // ASCII value of A = 65
float z = x + y; // y is promoted to int, then float
printf("%f", z); // 75.000000
```

---

### 8. Hierarchy of Operations (Operator Precedence)

When multiple operators are used, C follows a specific **precedence order** to decide which operation to perform first.

| Precedence Level | Operators     | Description                       |
| ---------------- | ------------- | --------------------------------- |
| 1                | `()`          | Parentheses                       |
| 2                | `++`, `--`    | Unary increment and decrement     |
| 3                | `*`, `/`, `%` | Multiplication, Division, Modulus |
| 4                | `+`, `-`      | Addition, Subtraction             |
| 5                | `=`           | Assignment                        |

Example:

```c
int x = 10 + 5 * 2;  // Multiplication happens first
printf("%d", x);     // Output: 20
```

---

### 9. Associativity of Operators

If two operators have the same precedence, **associativity** decides which one executes first.

| Operator Type                   | Associativity |
| ------------------------------- | ------------- |
| Arithmetic (`+`, `-`, `*`, `/`) | Left to Right |
| Assignment (`=`)                | Right to Left |
| Relational (`<`, `>`, `==`)     | Left to Right |

Example:

```c
int x = 10, y = 20, z;
z = x = y;   // assignment happens from right to left
```

---

### 10. Shorthand Operators

These are **compound assignment operators** that make arithmetic and assignment shorter.

| Operator | Meaning             | Example   | Equivalent To |
| -------- | ------------------- | --------- | ------------- |
| `+=`     | Add and assign      | `a += 5;` | `a = a + 5;`  |
| `-=`     | Subtract and assign | `a -= 2;` | `a = a - 2;`  |
| `*=`     | Multiply and assign | `a *= 3;` | `a = a * 3;`  |
| `/=`     | Divide and assign   | `a /= 2;` | `a = a / 2;`  |
| `%=`     | Modulus and assign  | `a %= 3;` | `a = a % 3;`  |

---

### 11. Unary Operators

Unary operators act on a **single operand**.

| Operator | Description | Example        |
| -------- | ----------- | -------------- |
| `++`     | Increment   | `a++` or `++a` |
| `--`     | Decrement   | `a--` or `--a` |
| `-`      | Unary minus | `a = -b;`      |
| `!`      | Logical NOT | `!a`           |

#### Example:

```c
int x = 5;
printf("%d", ++x); // Pre-increment: first increments then prints (6)
printf("%d", x++); // Post-increment: prints then increments (6)
```

| Type                     | Description                      |
| ------------------------ | -------------------------------- |
| **Pre-increment (++x)**  | Increases value before use       |
| **Post-increment (x++)** | Uses value first, then increases |

---

### 12. Control Instructions

Control instructions decide **which part of the program executes** and **how many times**.

#### Types of Control Instructions

| Type                  | Description                                        | Example                                |
| --------------------- | -------------------------------------------------- | -------------------------------------- |
| **Sequence Control**  | Instructions execute in the order they appear.     | `a = 10; b = 20; sum = a + b;`         |
| **Selection Control** | Executes a set of statements based on a condition. | `if`, `if-else`, `nested if`, `switch` |
| **Loop Control**      | Repeats a set of instructions.                     | `for`, `while`, `do-while`             |
| **Case Control**      | Used for multiple conditions.                      | `switch`                               |

#### Example: Selection Control

```c
if (a > b)
    printf("A is greater");
else
    printf("B is greater");
```

#### Example: Loop Control

```c
for(int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}
```

#### Example: Case Control

```c
switch(choice) {
    case 1: printf("Start"); break;
    case 2: printf("Stop"); break;
    default: printf("Invalid choice");
}
```

---

### ✅ Summary

In this module, you learned:

* Types of C instructions and their purposes
* Assignment and arithmetic operations
* Operator precedence and associativity
* Type conversions and promotions
* Shorthand and unary operators
* Control instructions (sequence, selection, looping, case)



