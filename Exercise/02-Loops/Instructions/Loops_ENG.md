# 📘 Exercises – Loops

## 01 – Count up to N
The user enters a number **N**, and the program prints all integers from **0** to **N**.

---

## 02 – Sum from 1 to N
The user enters a number **N**, and the program calculates and prints the sum of all integers from **1** to **N**.

---

## 03 – Multiplication Table of a Number
The user enters a number, and the program prints its multiplication table (from 1 to 10).

---

## 04 – Factorial Calculation
The user enters a number, and the program calculates its factorial.

---

## 05 – Even Numbers up to N
The user enters a number **N**, and the program prints all even numbers from **1** to **N**.

---

## 06 – Prime Number
The user enters a number, and the program checks if it is a prime number.

---

## 07 – Prime Numbers up to N
The user enters a number **N**, and the program prints all prime numbers from **1** to **N**.

---

## 08 – Multiplication with Sum
The user enters two positive integers **N** and **M**.  
The program calculates the product `N × M` using only repeated additions.

---

## 09 – Divisible Numbers
The user enters two positive integers:
- **n**: the divisor
- **m**: the upper limit

If **n** or **m** are less than or equal to 0, the program asks again for the data.  
Then, it prints all numbers from **1** to **m** that are divisible by **n**.

**Example:**  
If `n = 3` and `m = 10`, the output will be:
```
3 6 9
```

---

## 10 – Conditional Sum
The user enters two integers **N** and **M**.  
If **N ≥ M**, the program exits.  
Otherwise, it sums all numbers between **N** and **M**, following these rules:
- If the number is even, it is added directly.
- If the number is odd, all numbers from **1** up to that number are summed, and the result is added.

**Example:**  
If `N = 3` and `M = 6`, the result will be:
```
(1 + 2 + 3) + 4 + (1 + 2 + 3 + 4 + 5) + 6
```

---

## 11 – Number Triangle
The user enters a number **K**. The program prints a number triangle with **K rows**, where each row contains the numbers from **1** up to the row number.

**Example for K = 5:**
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

---

## 12 – Countdown from N to 0
The user enters a number **N**.  
The program prints all numbers from **N** down to **0** in descending order.

---

## 13 – Sum of Even and Odd Numbers
The user enters a number **N**. The program calculates and prints separately:
- The sum of even numbers from **1** to **N**
- The sum of odd numbers from **1** to **N**

---

## 14 – Guess the Number
Write a program that generates a random number between **1 and 100** and asks the user to guess it.

- After each guess, the program tells whether the number is **too high**, **too low**, or **correct**.
- The program continues until the user guesses the number.
- At the end, it prints the **number of attempts** made.

**Hint:** use `rand()` and `srand(time(0))` to generate random numbers.

---

## 15 – Statistics on Entered Numbers
Ask the user **how many numbers** they want to enter, then perform the following operations:

- Find and print the **maximum number**
- Find and print the **minimum number**
- Calculate and print the **average**
- Count and print how many numbers are **even** and how many are **odd**

**Example:**  
The user chooses to enter **5 numbers**:
```
Num1: 7
Num2: 8
Num3: 5
Num4: 4
Num5: 9
```

**Expected output:**
```
Maximum number: 9
Minimum number: 4
Average: 6.6
Even numbers: 2
Odd numbers: 3
```

---

## 16 – Perfect Number
Write a program that asks the user to enter a positive integer and checks if it is a **perfect number**.  
A perfect number is equal to the **sum of its proper divisors** (excluding itself).

**Examples:**
- `6` is perfect because `1 + 2 + 3 = 6`
- `28` is perfect because `1 + 2 + 4 + 7 + 14 = 28`

**Output:**  
"Perfect number" or "Not a perfect number"

---

## 17 – Collatz Sequence
Given a positive integer **n**, the Collatz sequence is defined as follows:
- If **n** is even, the next number is `n / 2`
- If **n** is odd, the next number is `3 * n + 1`
- The sequence continues until **n** becomes **1**

**Example for n = 6:**
```
6 → 3 → 10 → 5 → 16 → 8 → 4 → 2 → 1
```

**Fun fact:**  
No number has ever been found that produces an infinite Collatz sequence.  
Try modifying the program to print the Collatz sequence for the **first 100 natural numbers**: all will end.

---
## 18 – Fibonacci Series
Write a program that asks the user for a positive integer n and prints the Fibonacci series up to the n-th term.

**Explanation of the Fibonacci Series**
It is a sequence of numbers where each number is the sum of the two preceding ones, with the first two terms being 0 and 1.
Formula:
```
F(0) = 0  
F(1) = 1  
F(n) = F(n-1) + F(n-2)
```

**Example for n = 8**
```
Fibonacci Series: 0 1 1 2 3 5 8 13
```
---
