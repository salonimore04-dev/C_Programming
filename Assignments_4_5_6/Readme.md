# C Programming Practice

This repository contains five beginner-level C programs created for programming practice. These programs demonstrate functions, loops, arithmetic operations, conditional statements, and Boolean-style return values.

##  Assignment 1

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

## Assignment 2

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

##  Assignment 3

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


## Assignment 4
## 1. program4_1 Checks whether a number is positive, negative, or zero.

**Description:**
Positive, Negative, or Zero
Function: CheckNumber(int iValue)
Accepts an integer and prints whether it is positive, negative, or zero.
Example:
Enter a number :5
Positive Number

## 2. program4_2 Checks whether a number is even or odd.

**Description:**
Even or Odd
Function: CheckEvenOdd(int iValue)
Uses the remainder operator (%) to determine whether the input integer is even or odd.
Example:
Enter a Number :7
Odd Number

## 3. program4_3 Compares two numbers and prints the greater number, or reports that they are equal.

**Description:**
Find the Greater of Two Numbers
Function: FindGreater(int iFirst, int iSecond)
Compares two integers. It prints the greater value or reports that both numbers are equal.
Example:
Enter First Number: 12
Enter Second Number: 8
12 is Greater

## 4. program4_4 Checks voting eligibility

**Description:**
Checks voting eligibility based on age. Negative ages are reported as invalid; ages 18 and above are eligible.
Voting Eligibility
Function: CheckVotingEligiblity(int iAge)
Reports an invalid age if the input is negative, eligibility if the age is 18 or older, and ineligibility otherwise.
Example:
Enter your Age: 18
Eligible for Voting

## 5. program4_5 Checks whether a number is divisible by 5

**Description:**
Function: CheckDivisibility(int iValue)
Uses the remainder operator (%) to check whether the integer is divisible by 5.
Example:
Enter a number: 25
It is Divisible
Concepts Practiced
Standard input and output using scanf() and printf()
Integer variables and function arguments
User-defined functions
Conditional statements
Comparison operators (>, <, >=)
Modulo operator (%)
Program exit status using EXIT_SUCCESS

## Requirements

A C compiler, such as GCC or Clang
A terminal or command prompt

## Compile and Run

1. Keep all five `.c` files in the same folder.
2. Open Command Prompt or the VS Code terminal in that folder.
3. Compile the program using its GCC command.
4. Run the generated `.exe` file.
5. Repeat for the other programs.


## Assignment 5
### 1. Find the Greatest of Three Numbers
**File:** `program5_1`

- Reads three integers from the user.
- Uses the `FindGreatest()` function to compare them.
- Prints the greatest number.
- If two or more numbers are equal to the maximum, it prints one of the greatest values.

**Example**
```text
Enter three Number: 10 25 15
25 is Greatest
```

## Compile and Run
Save  program with a `.c` extension if it does not already have one. For example, using GCC:
```bash
gcc program5_1.c -o program5_1
./program5_1

## 2. Check Whether a Year Is a Leap Year
**File:** `program5_2`

- Reads a year from the user.
- Uses the `CheckLeapYear()` function.
- Prints `Invalid Year` if the year is zero or negative.
- Prints `Leap Year` if the year is divisible by 400, or divisible by 4 but not by 100.
- Otherwise, prints `Not a Leap Year`.

**Example**
```text
Enter year: 2024
Leap Year
```

## Compile and Run
Save  program with a `.c` extension if it does not already have one. For example, using GCC:
```bash
gcc program5_2.c -o program5_1
./program5_2

### 3. Display a Grade from Marks
**File:** `program5_3`

- Reads marks as a floating-point number.
- Uses the `DisplayGrade()` function to determine the result.
- Accepts marks from 0 to 100; values outside this range print `Invalid Marks`.

| Marks | Result |
|---|---|
| 90–100 | Grade A |
| 75–less than 90 | Grade B |
| 60–less than 75 | Grade C |
| 40–less than 60 | Grade D |
| Less than 40 | Fail |

**Example**
```text
Enter marks : 82
Grade B
```

## Compile and Run
Save  program with a `.c` extension if it does not already have one. For example, using GCC:
```bash
gcc program5_3.c -o program5_1
./program5_3

## Requirements

- A C compiler, such as GCC.
- A terminal or command prompt.

## Concepts Demonstrated

- Standard input and output with `scanf()` and `printf()`
- User-defined functions
- `if`, `else if`, and `else` conditional statements
- Integer and floating-point input
- Basic input validation

### 4. `program5_4.c`  Check Divisibility by 3 and 5

**Description:**  
Accepts an integer and checks whether it is divisible by both 3 and 5, only 3, only 5, or neither.

**Logic:**
- If the number is divisible by both 3 and 5, prints `Divisible by Both`.
- If divisible only by 3, prints `Divisible by 3`.
- If divisible only by 5, prints `Divisible by 5`.
- Otherwise, prints `Not Divisible by Either`.

**Example:**
```text
Enter number: 15
Divisible by Both
```

## How to Compile and Run

Use GCC in Command Prompt or a terminal.

### Compile and run `program5_4.c`

```bash
gcc program5_4.c -o program5_4
program5_4.exe
```

### 2. `program5_5.c`  Check Character Type

**Description:**  
Accepts one character and identifies whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

**Logic:**
- `A` to `Z` → `Uppercase Alphabet`
- `a` to `z` → `Lowercase Alphabet`
- `0` to `9` → `Digit`
- Any other character → `Special Character`

**Example:**
```text
Enter a character: G
Uppercase Alphabet
Enter a character: f
Lowercase Alphabet
Enter a digit: 3
digit
Enter a Special Character: @
Special Character

### Compile and run `program5_5.c`

```bash
gcc program5_5.c -o program5_5
program5_5.exe
```

## Concepts Practised

- C functions
- `if`, `else if`, and `else`
- Modulus operator (`%`)
- Character comparisons
- Standard input and output (`scanf` and `printf`)

## Assignment 6
### 1. `program6_1.c`  Electricity Bill Calculator

**Description:**  
Accepts the number of electricity units consumed and calculates the bill according to the rates used in the program.

**Billing rules:**
- Negative units: displays `Invalid Input`.
- Up to 100 units: ₹5 per unit.
- 101–200 units: ₹5 per unit for the first 100 units and ₹7 per additional unit.
- More than 200 units: ₹5 per unit for the first 100 units, ₹7 per unit for the next 100 units, and ₹10 per additional unit.

**Example:**
```text
Enter consumed units: 150
Bill = 850.00
```

### 2. `program6_2.c`  Admission Eligibility Checker

**Description:**  
Accepts marks and age, then checks whether the applicant meets the program's admission conditions.

**Rules:**
- Marks below 0 or above 100, or negative age: displays `Invalid input`.
- Marks of at least 60 and age of at least 17: displays `Eligible for Admission`.
- Otherwise: displays `Not Eligiblie` (as written in the source program).

**Example:**
```text
Enter Marks and Age: 75 18
Eligible for Admission
```

### 3. `program6_3.c`  Discount Calculator

**Description:**  
Accepts a purchase amount and calculates the payable amount after applying a discount.

**Discount rules:**
- Negative purchase amount: displays `Invalid Purchase Amount`.
- Amount below ₹1,000: no discount.
- Amount from ₹1,000 to below ₹5,000: 10% discount.
- Amount of ₹5,000 or more: 20% discount.

**Example:**
```text
Enter Purchase Amount: 2000
Payable Amount = 1800.00
```

## How to Compile and Run

Run these commands in Command Prompt or a terminal from the folder containing the files.

### Compile and run `program6_1.c`

```bash
gcc program6_1.c -o program6_1
program6_1.exe
```

### Compile and run `program6_2.c`

```bash
gcc program6_2.c -o program6_2
program6_2.exe
```

### Compile and run `program6_3.c`

```bash
gcc program6_3.c -o program6_3
program6_3.exe
```

## Concepts Practised

- C functions
- `if`, `else if`, and `else`
- Input validation
- Arithmetic calculations
- Percentage-based discounts
- `scanf()` and `printf()`


### 4. `program6_4.c` Triangle Validity Checker

**Description:**  
Accepts three side lengths and checks whether they can form a valid triangle.

**Logic:**
- If any side is zero or negative, displays `Invalid Triangle`.
- If the sum of every pair of sides is greater than the remaining side, displays `Valid Triangle`.
- Otherwise, displays `Invalid Triangle`.

**Example:**
```text
Enter three sides: 3 4 5
Valid Triangle
```

### 5. `program6_5.c`  Employee Bonus Calculator

**Description:**  
Accepts an employee's salary and years of service, then calculates the bonus according to the conditions implemented in the program.

**Logic:**
- If salary is zero or negative, or years of service is negative, displays `Invalid Input`.
- More than 10 years of service: bonus is 15% of salary.
- 5 to 10 years of service: bonus is 10% of salary.
- For fewer than 5 years of service, the current program does not display a bonus message.

**Example:**
```text
Enter salary and years of service: 30000 12
Bonus = 4500.00
```

## How to Compile and Run

Open Command Prompt or a terminal in the folder containing the files.

### Compile and run `program6_4.c`

```bash
gcc program6_4.c -o program6_4
program6_4.exe
```

### Compile and run `program6_5.c`

```bash
gcc program6_5.c -o program6_5
program6_5.exe
```

## Concepts Practised

- C functions
- `if`, `else if`, and `else`
- Conditional validation
- Triangle inequality
- Percentage calculations
- Standard input and output using `scanf()` and `printf()`

## Note

The programs do not check whether `scanf()` successfully read the supplied input. Enter values in the expected format.

## Purpose

This repository is created for C programming practice and learning.

## Author

Saloni Laxman More.

## License

This project is intended for educational and practice purposes.
