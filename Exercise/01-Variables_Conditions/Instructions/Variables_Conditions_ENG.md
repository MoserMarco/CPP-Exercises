# Exercises – Variables and Conditions

## 01 – Sum of Two Numbers
The user enters two numbers. The program must calculate their sum and display the result.

---

## 02 – Even or Odd
The user enters a number, and the program determines whether it is even or odd.

---

## 03 – Average Calculation
The user enters three numbers. The program calculates their average and prints it.

---

## 04 – Age Verification
The user enters a person's age, and the program checks whether it is greater than 18.

---

## 05 – Rectangle Area
The user enters the base and height. The program calculates and displays the area and perimeter of the rectangle.

---

## 06 – Special Numbers 
The user enters a number **X**. The program must check the following:
- If **X is even**, check if it is divisible by **6**:
    - If yes, print "Valid number"
    - Otherwise, print "Even number but not divisible by 6"
- If **X is odd**, check if it is greater than **15**:
    - If yes, print "Odd number greater than 15"
    - Otherwise, check if it is less than **5**:
        - If yes, print "Odd number less than 5"
        - Otherwise, print "Odd number between 5 and 15"

---

## 07 – Number Evaluation 
Ask the user to enter **three integers**: **A, B, C**.
Check the following:
- If **A is greater than B**, check if **C is even**:
    - If yes, print "A > B and C is even"
    - Otherwise, check if **C is a multiple of 5**:
        - If yes, print "A > B and C is a multiple of 5"
        - Otherwise, print "A > B but C is not valid"
- If **A is less than or equal to B**, check if **B is a multiple of 3**:
    - If yes, print "B is a multiple of 3"
    - Otherwise, check if **B is greater than C**:
        - If yes, print "B > C but not a multiple of 3"
        - Otherwise, print "B ≤ C and not a multiple of 3"

---

## 08 – Days of the Week 
The user enters a number from **1 to 7**. The program prints the corresponding day:
- 1 → Monday
- 2 → Tuesday
- ...
- 7 → Sunday
  If the number is outside the valid range, print "Invalid number".

---

## 09 – Simple Calculator 
The user enters two numbers and a character representing a math operation: `+`, `-`, `*`, `/`.
Use a `switch` to execute the operation and display the result.
If the operation is not recognized, print "Invalid operation".

---

## 10 – Complete User Check 

Write a program that asks the user for:

- Age (integer)
- Gender (‘M’ for male, ‘F’ for female, ‘O’ for other)
- Bank account balance (floating point number)

The program must check:

1. If age is less than 18, print "User is a minor".
2. Otherwise, check gender:
    - Case ‘M’: print "Adult male user".
    - Case ‘F’: print "Adult female user".
    - Case ‘O’: print "Adult user with unspecified gender".
    - Default case: print "Invalid gender".
3. If the account balance is negative, print "Warning: account overdrawn".
4. If the balance is between 0 and 1000 (inclusive), print "Low balance".
5. If the balance is greater than 1000, print "High balance".

