[Readme.md](https://github.com/user-attachments/files/33811348/Readme.md)
# C Programming Practice

This repository contains five beginner-level C programs created for programming practice. These programs demonstrate functions, loops, arithmetic operations, conditional statements, and Boolean-style return values.

## Programs List  Assignment 1

| No. | Program File | Description |
|---|---|---|
| 1 | `program1_1.c` | Division of two integers |
| 2 | `program1_2.c` | Print Marvellous five times |
| 3 | `program1_3.c` | Display numbers from 5 to 1 |
| 4 | `program1_4.c` | Check whether a number is divisible by 5 |
| 5 | `program1_5.c` | Print five star characters |

---

## 1. program1_1.c  Division of Two Integers

### Description
This program divides two integers using the user-defined `Divide()` function. If the divisor is zero, the function returns `-1`.

### Source Code

```c
#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d", iRet);

    return 0;
}
```

### Output

```text
Division is 3
```

### Compile and Run

```bash
gcc program1_1.c -o program1_1
```

```bat
program1_1.exe
```

---

## 2. program1_2.c  Print Marvellous Five Times

### Description
This program uses the `Display()` function and a `for` loop to print the word `Marvellous` five times.

### Source Code

```c
#include<stdio.h>

void Display()
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();
    return 0;
}
```

### Output

```text
Marvellous
Marvellous
Marvellous
Marvellous
Marvellous
```

### Compile and Run

```bash
gcc program1_2.c -o program1_2
```

```bat
program1_2.exe
```

---

## 3. program1_3.c  Display Numbers from 5 to 1

### Description
This program uses a `while` loop inside the `Display()` function to print numbers in descending order, from 5 to 1.

### Source Code

```c
#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;

    while(i >= 1)
    {
        printf("%d", i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}
```

### Output

```text
54321
```

### Compile and Run

```bash
gcc program1_3.c -o program1_3
```

```bat
program1_3.exe
```

---

## 4. program1_4.c  Check Divisibility by 5

### Description
This program accepts an integer from the user and checks whether it is divisible by 5. The `Check()` function returns `TRUE` if the number is divisible by 5; otherwise, it returns `FALSE`.

### Source Code

```c
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}
```

### Sample Output 1

```text
Enter number
25
Divisible by 5
```

### Sample Output 2

```text
Enter number
12
Not Divisible by 5
```

### Compile and Run

```bash
gcc program1_4.c -o program1_4
```

```bat
program1_4.exe
```

---

## 5. program1_5.c  Print Five Stars

### Description
This program uses the `Accept()` function and a `for` loop to print five star (`*`) characters.

### Source Code

```c
#include<stdio.h>

void Accept(int iNo)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}
```

### Output

```text
*****
```

### Compile and Run

```bash
gcc program1_5.c -o program1_5
```

```bat
program1_5.exe
```

---

## Requirements

- C compiler such as GCC.
- Windows Command Prompt, VS Code terminal, or another terminal.
- Basic knowledge of C programming.

## Concepts Covered

- User-defined functions
- Integer variables and arithmetic operations
- `for` and `while` loops
- `if-else` statements
- `typedef` and macros
- Modulus operator (`%`)
- Return values
- Input and output using `scanf()` and `printf()`

## How to Run the Programs

1. Save all five `.c` files in one folder.
2. Open Command Prompt in that folder.
3. Compile the required program using its GCC command.
4. Run the generated `.exe` file on Windows.
5. Repeat for the remaining programs.

# C Programming  Practice

This repository contains five C programs for practicing functions, loops, conditional statements, and basic number operations.

## Programs List  Assignment 2

| No. | Program | Description |
|---|---|---|
| 1 | `program2_1.c` | Print stars using a `while` loop |
| 2 | `program2_2.c` | Print stars by decrementing a number |
| 3 | `program2_3.c` | Display Hello or Demo |
| 4 | `program2_4.c` | Print a number repeatedly |
| 5 | `program2_5.c` | Check whether a number is even or odd |

---

## 1. program2_1.c  Print Stars Using a While Loop

**Description:** Accepts a number and prints that many star characters using a `while` loop.

**Sample Input:** `5`

**Sample Output:**
```text
Enter number :* * * * *
```

**Compile and Run:**
```bash
gcc program2_1.c -o program2_1
```
```bat
program2_1.exe
```

## 2. program2_2.c  Print Stars Using Decrement

**Description:** Accepts a number and prints stars while decreasing the number after each iteration.

**Sample Input:** `5`

**Sample Output:**
```text
Enter number:* * * * *
```

**Compile and Run:**
```bash
gcc program2_2.c -o program2_2
```
```bat
program2_2.exe
```

## 3. program2_3.c  Display Hello or Demo

**Description:** Accepts an integer. If the number is less than 10, it displays `Hello`; otherwise, it displays `Demo`.

**Sample Input:** `7`

**Sample Output:**
```text
Enter number :Hello
```

**Compile and Run:**
```bash
gcc program2_3.c -o program2_3
```
```bat
program2_3.exe
```

## 4. program2_4.c  Print a Number Repeatedly

**Description:** Accepts a number and a frequency, then prints the number the specified number of times.

**Sample Input:**
```text
Enter number:7
Enter frequency:4
```

**Sample Output:**
```text
7777
```

**Compile and Run:**
```bash
gcc program2_4.c -o program2_4
```
```bat
program2_4.exe
```

## 5. program2_5.c  Check Even or Odd

**Description:** Uses the `ChkEven()` function to check whether a number is even or odd. It returns `TRUE` for even numbers and `FALSE` for odd numbers.

**Sample Input:** `8`

**Sample Output:**
```text
Enter number:Number is Even
```

**Compile and Run:**
```bash
gcc program2_5.c -o program2_5
```
```bat
program2_5.exe
```

## Concepts Covered

- User-defined functions
- `while` and `for` loops
- `if-else` statements
- Function arguments
- Increment and decrement operators
- Comparison and modulus operators
- `typedef` and macros
- Input and output using `scanf()` and `printf()`

## Requirements

- GCC compiler
- Windows Command Prompt or VS Code terminal

## How to Run

1. Keep all five C files in the same folder.
2. Open a terminal in that folder.
3. Compile a program using its GCC command.
4. Run the generated `.exe` file on Windows.

# C Programming Practice 

This repository contains five C programs for practicing loops, functions, number operations, character conversion, and conditional statements.

## Programs List  Assignment 3

| No. | Program File | Description |
|---|---|---|
| 1 | `program3_1.c` | Display the first N even numbers |
| 2 | `program3_2.c` | Display even factors of a number, including the number itself when even |
| 3 | `program3_3.c` | Display even factors excluding the number itself |
| 4 | `program3_4.c` | Convert uppercase to lowercase and lowercase to uppercase |
| 5 | `program3_5.c` | Check whether a character is a vowel |

---

## 1. program3_1.c  Display Even Numbers

**Description:** Accepts an integer and displays the first N even numbers using a `for` loop.

**Sample Input:**
```text
Enter number
5
```

**Sample Output:**
```text
2    4    6    8    10
```

**Concepts Covered:** Functions, `for` loop, arithmetic operations, input/output.

**Compile and Run:**
```bash
gcc program3_1.c -o program3_1
```
```bat
program3_1.exe
```

---

## 2. program3_2.c  Display Even Factors

**Description:** Accepts an integer and displays its even factors. The program converts a non-positive input to its absolute value before checking the factors. If the number is even, it also prints the number itself.

**Sample Input:**
```text
Enter number
12
```

**Sample Output:**
```text
2    4    6    12
```

**Concepts Covered:** Functions, factors, modulus operator (`%`), `for` loop, conditional statements.

**Compile and Run:**
```bash
gcc program3_2.c -o program3_2
```
```bat
program3_2.exe
```

---

## 3. program3_3.c  Display Even Factors Excluding the Number

**Description:** Accepts an integer and displays its even factors, excluding the number itself. The program uses a `for` loop and the modulus operator.

**Sample Input:**
```text
Enter number
12
```

**Sample Output:**
```text
2    4    6
```

**Concepts Covered:** Functions, loops, factors, modulus operator, conditional statements.

**Compile and Run:**
```bash
gcc program3_3.c -o program3_3
```
```bat
program3_3.exe
```

---

## 4. program3_4.c  Convert Character Case

**Description:** Accepts a character. If it is uppercase, the program converts it to lowercase. If it is lowercase, the program converts it to uppercase.

**Sample Input 1:**
```text
Enter character
A
```

**Sample Output 1:**
```text
a
```

**Sample Input 2:**
```text
Enter character
b
```

**Sample Output 2:**
```text
B
```

**Concepts Covered:** Character variables, ASCII values, `if-else`, character conversion.

**Compile and Run:**
```bash
gcc program3_4.c -o program3_4
```
```bat
program3_4.exe
```

---

## 5. program3_5.c  Check Whether a Character Is a Vowel

**Description:** Accepts a character and checks whether it is one of the five vowels (`a`, `e`, `i`, `o`, `u`) in either uppercase or lowercase. The `ChkVowel()` function returns `TRUE` for a vowel and `FALSE` otherwise.

**Sample Input 1:**
```text
Enter character
A
```

**Sample Output 1:**
```text
It is Vowel
```

**Sample Input 2:**
```text
Enter character
b
```

**Sample Output 2:**
```text
It is not Vowel
```

**Concepts Covered:** User-defined functions, `typedef`, macros, Boolean-style return values, logical OR (`||`), conditional statements.

**Compile and Run:**
```bash
gcc program3_5.c -o program3_5
```
```bat
program3_5.exe
```

---

## Requirements

- GCC compiler
- Windows Command Prompt or VS Code terminal
- Basic knowledge of C programming

## How to Run

1. Keep all five `.c` files in the same folder.
2. Open Command Prompt or the VS Code terminal in that folder.
3. Compile the program using its GCC command.
4. Run the generated `.exe` file.
5. Repeat for the other programs.

## Concepts Covered

- User-defined functions
- `for` loops
- Conditional statements
- Modulus operator
- Factors of a number
- Character handling and ASCII values
- `typedef` and macros
- Input and output using `scanf()` and `printf()`


## Purpose

This repository is created for C programming practice and learning.

## Author

Saloni Laxman More.

## License

This project is intended for educational and practice purposes.
