# 📘 C Language Learning - Module 1

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
