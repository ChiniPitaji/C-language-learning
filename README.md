
# 🧠 C Programming Notes  
### A Complete Beginner-to-Advanced Guide  
**By [Kumar Shivam](https://github.com/ChiniPitaji)**  

---

## 📘 Overview  
This repository provides an **extensive guide to mastering C programming** — from setup and syntax to advanced concepts like **pointers, dynamic memory, and file handling**.  
Ideal for **beginners**, **students**, and **interview preparation**.

---

## 🧭 Table of Contents  
1. [Getting Started](#1-getting-started)  
2. [Basics of C Programming](#2-basics-of-c-programming)  
3. [Variables and Data Types](#3-variables-and-data-types)  
4. [Input & Output Functions](#4-input--output-functions)  
5. [Operators and Expressions](#5-operators-and-expressions)  
6. [Control Structures](#6-control-structures)  
7. [Loops and Iterations](#7-loops-and-iterations)  
8. [Functions and Recursion](#8-functions-and-recursion)  
9. [Arrays](#9-arrays)  
10. [Pointers](#10-pointers)  
11. [Strings](#11-strings)  
12. [Structures and Unions](#12-structures-and-unions)  
13. [Dynamic Memory Allocation](#13-dynamic-memory-allocation)  
14. [File Handling](#14-file-handling)  
15. [Coding Challenges](#15-coding-challenges)  
16. [Conclusion](#16-conclusion)  

---

## 1️⃣ Getting Started  

### ⚙️ Setup  
**Recommended Tools**  
- **Editor:** Visual Studio Code (with C/C++ extension)  
- **Compiler:** GCC or Clang  

**Installation Commands**
```bash
# Linux
sudo apt install build-essential

# macOS
xcode-select --install

# Check compiler version
gcc --version
````

### 🖥️ First Program

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

**Compile & Run**

```bash
gcc hello.c -o hello
./hello
```

---

## 2️⃣ Basics of C Programming

Every C program:

* Must have a `main()` function.
* Uses header files like `<stdio.h>`.
* Ends each statement with a semicolon `;`.

💡 **Note:** Execution always starts from `main()`.

**Program Structure**

```c
#include <stdio.h>

int main() {
    printf("Learning C!");
    return 0;
}
```

---

## 3️⃣ Variables and Data Types

### 🧩 Declaration and Initialization

```c
int age = 20;
float pi = 3.14;
char grade = 'A';
```

### 📊 Common Data Types

| Type   | Size    | Range              | Example                 |
| ------ | ------- | ------------------ | ----------------------- |
| char   | 1 byte  | -128 to 127        | `char a = 'X';`         |
| int    | 4 bytes | -2B to 2B          | `int num = 25;`         |
| float  | 4 bytes | 3.4E±38            | `float f = 2.5;`        |
| double | 8 bytes | 1.7E±308           | `double d = 4.566;`     |
| long   | 8 bytes | Platform dependent | `long bigNum = 999999;` |

🧠 **Tip:** Variable names are case-sensitive and must start with a letter or underscore.

---

## 4️⃣ Input & Output Functions

### 🖨️ `printf()` – Output

```c
printf("Your score is %d\n", score);
```

### ⌨️ `scanf()` – Input

```c
int age;
scanf("%d", &age);
```

### 📋 Common Format Specifiers

| Specifier | Meaning   |
| --------- | --------- |
| `%d`      | Integer   |
| `%f`      | Float     |
| `%c`      | Character |
| `%s`      | String    |
| `%lf`     | Double    |

⚠️ **Important:** Always use `&` with `scanf()` except for strings.

---

## 5️⃣ Operators and Expressions

| Type                | Operators         |   |    |
| ------------------- | ----------------- | - | -- |
| Arithmetic          | `+ - * / %`       |   |    |
| Relational          | `== != < > <= >=` |   |    |
| Logical             | `&&               |   | !` |
| Assignment          | `= += -= *=`      |   |    |
| Increment/Decrement | `++ --`           |   |    |

**Example**

```c
int result = (a + b) * c - d / e;
```

---

## 6️⃣ Control Structures

### ✅ If–Else

```c
if (marks >= 50)
    printf("Pass");
else
    printf("Fail");
```

### 🔁 Switch–Case

```c
switch(choice) {
    case 1: printf("Add"); break;
    case 2: printf("Subtract"); break;
    default: printf("Invalid");
}
```

⚠️ **Reminder:** Always use `break;` to prevent fall-through.

---

## 7️⃣ Loops and Iterations

### 🔂 For Loop

```c
for (int i = 1; i <= 5; i++)
    printf("%d ", i);
```

### 🔁 While Loop

```c
int i = 1;
while (i <= 5) {
    printf("%d ", i);
    i++;
}
```

### ♻️ Do–While Loop

```c
int i = 1;
do {
    printf("%d ", i);
    i++;
} while (i <= 5);
```

---

## 8️⃣ Functions and Recursion

### 🧮 Function Example

```c
int add(int a, int b) {
    return a + b;
}

int main() {
    printf("%d", add(5, 3));
}
```

### 🔁 Recursion Example

```c
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

---

## 9️⃣ Arrays

```c
int numbers[5] = {1, 2, 3, 4, 5};
```

### 2D Arrays

```c
int matrix[2][3] = {
    {1,2,3},
    {4,5,6}
};
```

💡 **Tip:** Arrays in C are zero-indexed and decay to pointers when passed to functions.

---

## 🔟 Pointers

```c
int x = 10;
int *ptr = &x;

printf("%d", *ptr);
```

| Operator | Meaning             |
| -------- | ------------------- |
| `&`      | Address of variable |
| `*`      | Value at address    |

---

## 1️⃣1️⃣ Strings

```c
char name[20] = "Alice";
```

### Common String Functions

| Function            | Description         |
| ------------------- | ------------------- |
| `strlen(s)`         | Length of string    |
| `strcpy(dest, src)` | Copy string         |
| `strcat(a, b)`      | Concatenate strings |
| `strcmp(a, b)`      | Compare strings     |

⚠️ **Caution:** Avoid `gets()`. Use `fgets()` instead for safety.

---

## 1️⃣2️⃣ Structures and Unions

### Structure Example

```c
struct Student {
    int id;
    char name[30];
    float marks;
};
```

### Union Example

```c
union Data {
    int i;
    float f;
    char str[20];
};
```

---

## 1️⃣3️⃣ Dynamic Memory Allocation

| Function    | Purpose                 |
| ----------- | ----------------------- |
| `malloc()`  | Allocate memory         |
| `calloc()`  | Allocate and initialize |
| `realloc()` | Resize allocated memory |
| `free()`    | Release memory          |

**Example**

```c
int *ptr = (int*)malloc(5 * sizeof(int));
if (ptr == NULL) {
    printf("Memory not allocated");
}
free(ptr);
```

---

## 1️⃣4️⃣ File Handling

### 📁 Open, Read, and Write Files

```c
FILE *fp = fopen("data.txt", "w");
fprintf(fp, "Hello File!");
fclose(fp);
```

🧠 **File Modes**

* `"r"` → Read
* `"w"` → Write
* `"a"` → Append
* `"r+"` → Read & Write

---

## 1️⃣5️⃣ Coding Challenges 💪

Try these mini-projects to strengthen your understanding:

* ⭐ Print pyramid/star patterns
* 🔁 Swap numbers without a third variable
* 🧮 Factorial & Fibonacci (loop + recursion)
* 🔢 Sort and reverse arrays
* ➕ Calculator using switch-case
* 🎓 Student record system using structures
* 📒 File-based contact book

---

## 1️⃣6️⃣ ✨ Conclusion

This document is a **complete roadmap to mastering C programming**, with code examples, syntax explanations, and practice problems.
Perfect for **students, beginners, and interview preparation**.

---

**Created with ❤️ by [Kumar Shivam](https://github.com/ChiniPitaji)**


