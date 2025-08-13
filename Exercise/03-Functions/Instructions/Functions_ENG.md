# Exercises - Functions

## 01 - Asterisk Rectangle

### Description

Write a function that, given a base and height, prints a rectangle with asterisks.

### Function Prototype

```cpp
void asteriskRectangle(int base, int height);
```

### Parameters

- **base**: base of the rectangle
- **height**: height of the rectangle

### Return Value

None

### Example

```cpp
asteriskRectangle(3, 4);
```

### Output:

```
***
* *
* *
***
```

-----

## 02 - Exponentiation

### Description

Write a function that calculates the power of an integer raised to a positive exponent. Don't use Pow.
Both the base and the exponent must be positive; otherwise, the function should return ```-1```
### Function Prototype

```cpp
int exponentiation(int base, int exponent);
```

### Parameters

- **base**: number to be raised
- **exponent**: exponent (positive)

### Return Value

- Result of the calculation `base ^ exponent`

### Example

```cpp
exponentiation(2, 4);  // returns 16
```

-----

## 03 - Even or Odd Number

### Description:
Write a function `isEven(int n)` that returns `true` if `n` is even, otherwise it returns `false`.

### Function Prototype:

```cpp
bool isEven(int n);
```

### Parameters:

* `n`: integer number to be checked

### Return Value:

* `true` if the number is even
* `false` if the number is odd

### Example:

```cpp
isEven(7);  // returns 0 (False)
isEven(4);  // returns 1 (True)
```

-----

## 04 - Difference between maximum and minimum

### Description

Write a function that receives three integers and returns the difference between the largest and the smallest.

### Function Prototype

```cpp
int difference(int n1, int n2, int n3);
```

### Parameters

- **n1**: first number
- **n2**: second number
- **n3**: third number

### Return Value

- Difference between the maximum and the minimum of the three numbers

### Example

```cpp
difference(6, 12, 2);  // returns 10

```




-----

## 05 - Print numbers with newlines

### Description:

The function checks if `n` is less than or equal to or greater than 10. If `n <= 10`, it prints all numbers from `1` to `n-1`, with a newline every two numbers. If `n > 10`, it prints all numbers from `1` to `n-1`, with a newline every ten numbers.
`n` must be greater than 1.
### Function Prototype:

```cpp
void numbersWithNewlines(int n);
```

### Parameters:

* `n`: reference integer number

### Return Value:

* None (prints directly to the terminal)

### Example:

```cpp
numbersWithNewlines(10)
numbersWithNewlines(15)
numbersWithNewlines(1)
```
### Output:
```
1 2
3 4
5 6
7 8
9
1 2 3 4 5 6 7 8 9 10
11 12 13 14 
n must be greater than 1.

```

-----

## 06 - Triangle perimeter

### Description:

Write a function that calculates the perimeter of a triangle given its vertices in the Cartesian plane.
Use an auxiliary function to calculate the distance between two points.

### Function Prototypes:

```cpp
double distance(double x1, double y1, double x2, double y2);
double perimeter(double x1, double y1, double x2, double y2, double x3, double y3);
```

### Parameters:

- `x1`, `y1`: coordinates of the first point
- `x2`, `y2`: coordinates of the second point
- `x3`, `y3`: coordinates of the third point

### Return Value:
Returns the perimeter of the triangle.

### Example:

```cpp
perimeter(0, 0, 3, 0, 0, 4) // returns 12
```

-----

## 07 - Prime number with a function

### Description:

Write a function `bool isPrime(int n)` that returns `true` if the number is prime, otherwise `false`.

### Function Prototype:

```cpp
bool isPrime(int n);
```

### Parameters:

* `n`: number to be checked

### Return Value:

* `true` if the number is prime
* `false` if the number is not prime

### Example:

```cpp
isPrime(28); // returns 0 (False)
isPrime(73); // returns 1 (True)
```

-----

## 08 - Print uppercase Sigma

### Description:
Write a function that prints an uppercase Sigma (Σ) with height and width `n`.
`n` must be odd and greater than or equal to 5.

### Function Prototype:

```cpp
void printSigma(int n);
```

### Parameters:

- `n`: dimension (height and width) of the Sigma

### Return Value:
None

### Example:

```cpp
printSigma(5);
printSigma(6);
```

### Output:

```
*****
 *
  *
 *
*****
n must be odd and greater than 5.
```

-----

## 09 - Calculation of the greatest common divisor (GCD) 

### Description:
Write a function `int GCD(int a, int b)` that calculates the greatest common divisor using the Euclidean algorithm.

### Function Prototype:

```cpp
int GCD(int a, int b);
```

### Parameters:

* `a`: first number (passed by value)
* `b`: second number (passed by value)


### Return Value:

* the GCD calculated

### Example:

```cpp
GCD(48, 18); // returns 6
```

-----

## 10 - Calculation of the least common multiple (LCM)

### Description:
Calculate the LCM of two integers using the formula:

```text
LCM(a, b) = a * b / GCD(a, b)
```

Use two functions:

* `int GCD(int a, int b);`
* `int LCM(int a, int b);`

### Function Prototypes:

```cpp
int GCD(int a, int b);
int LCM(int a, int b);
```

### Parameters:

* `a`: first number
* `b`: second number

### Return Value:

* `GCD()`: returns the greatest common divisor between `a` and `b`
* `LCM()`: returns the least common multiple between `a` and `b`

### Example:

```cpp
LCM(4, 6) // returns 12
```

-----

## 11 - Print an uppercase M

### Description

Write a function that prints an **uppercase M** given a height. `height` must be odd and greater than or equal to 5.

### Function Prototype

```cpp
void printM(int height);
```

### Parameters

- **height**: height of the M to be printed

### Return Value

None

### Example

```cpp
printM(5);
printM(8);
```

### Output:

```
*   *
** **
* * *
*   *
*   *
height must be odd and greater than 5.
```

-----

## 12 - Multiplication table

### Description:
Write a function that prints the multiplication table up to `n × n` and returns the sum of the products.

### Function Prototype:

```cpp
int multiplicatioTable(int n);
```

### Parameters:

- `n`: dimension of the multiplication table

### Return Value:

Sum of all products calculated in the table

### Example:

```cpp
multiplicatioTable(3);
```

### Output:

```
1 2 3
2 4 6
3 6 9
```

**Returned value:** `36`

-----

## 13 - Number transformation

### Description:
Write a function that receives two real numbers:

- the smaller of the two is transformed into `0` if it is negative or `1` if it is positive
- the larger is transformed into its reciprocal

### Function Prototype:

```cpp
void transformation(float &n1, float &n2);
```

### Parameters:

- `n1`: first number
- `n2`: second number

### Return Value:
None (pass by reference)

### Example:

```cpp
float a = 0.7, b = 1.5;
transformation(a, b);
cout << a << " " << b;
// Output: 1 0.666...
```

-----

## 14 - Isosceles trapezoid

### Description:
Write a function that prints an isosceles trapezoid with `b` as the minor base and `l` as the length of the oblique sides.
`b` and `l` must be greater than 0.
### Function Prototype:

```cpp
void trapezoid(int b, int l);
```

### Parameters:

- `b`: minor base
- `l`: length of the oblique side

### Return Value:
None

### Example:

```cpp
trapezoid(4, 3);
trapezoid(-1, 3);
```

### Output:

```
   ____
  /    \
 /      \
/________\
b and l must be greater than 0.
```

-----

## 15 - Count digits

### Description:
Write a function that receives a positive integer and returns the number of its digits.
If `n` is negative the function must return -1.
### Function Prototype:

```cpp
int countDigits(int n);
```

### Parameters:

- `n`: number to be analyzed

### Return Value:
Number of digits of the number

### Example:

```cpp
countDigits(12345); // returns 6
countDigits(9);  // returns 1
countDigits(-2);  // returns -1

```

-----

## 16 - Swap two numbers

### Description

Write a function that swaps the values of two integers passed by reference.

### Function Prototype

```cpp
void swap(int &a, int &b);
```

### Parameters

- **a**: first integer
- **b**: second integer

### Return Value

None

### Example

```cpp
int a = 5, b = 10;
swap(a, b);
cout << a << " " << b;
// Output: 10 5
```

-----

## 17 - Sum of digits

### Description

Write a function that receives a positive integer as a parameter and returns the sum of its digits.
If `n` is negative the function must return `-1`.
### Function Prototype

```cpp
int sumDigits(int n);
```

### Parameters

- **n**: positive integer

### Return Value

The sum of the digits of the number

### Example

```cpp
sumDigits(123); // returns 6

```

-----

## 18 - Divisible by 3

### Description

Write a function that prints all numbers less than `n` whose digits sum up to a number divisible by 3.
`n`  must be greater than or equal to 0.
### Function Prototype

```cpp
void divisible3(int n);
```

### Parameters

- **n**: upper limit (maximum 1000)

### Return Value

None

### Example

```cpp
divisible3(16);
// Output: 3 6 9 12 15
divisible3(-2);
// Output: n  must be greater than or equal to 0.
```

-----

## 19 - Octagonal capsule

### Description

Write a function that draws an octagonal capsule on the screen, given the size `n`.
`n`  must be greater than 0.
### Function Prototype

```cpp
void capsule(int n);
```

### Parameters

- **n**: side of the capsule

### Return Value

None

### Example

```cpp
capsule(3);
capsule(0);
```

### Output:

```
   ___
  /   \
 /     \
/       \
|       |
|       |
|       |
\       /
 \     /
  \   /
   ---
n must be greater than 0.
```

-----

## 20 - Prime factorization

### Description

Write a function that receives an integer and prints its prime factors.
`n`  must be greater than 1.
### Function Prototype

```cpp
void primeFactorization(int n);
```

### Parameters

- **n**: number to be factored

### Return Value

None

### Example

```cpp
primeFactorization(28);
// Output: 2 2 7
primeFactorization(1);
// Output: n  must be greater than 1.


```

-----

## 21 - Sum of fractions

### Description

Write a function that sums two fractions and returns the result in parameters passed by reference.

### Function Prototype

```cpp
void sumFractions(int numerator1, int denominator1, int numerator2, int denominator2, int &numeratorR, int &denominatorR);
```

### Parameters

- **numerator1**: numerator of the first fraction
- **denominator1**: denominator of the first fraction
- **numerator2**: numerator of the second fraction
- **denominator2**: denominator of the second fraction
- **numeratorR**: numerator of the result
- **denominatorR**: denominator of the result

### Return Value

None

### Example

```cpp
int nr, dr;
sumFractions(1, 2, 1, 3, nr, dr);
cout<< nr << dr;
// Output: 5 6
```

-----

## 22 - Largest prime factor

### Description

Write a function that returns the largest prime factor of `n` and its multiplicity.

### Function Prototype

```cpp
void primeFactor(int n, int &factor, int &occurency);
```

### Parameters

- **n**: number to be analyzed
- **factor**: largest prime factor
- **occurency**: how many times the factor divides `n`

### Return Value

None

### Example

```cpp
int f, o;
primeFactor(48, f, o);
cout<< f << o;
// Output: 3 1
```

-----

## 23 - Invert number

### Description

Write a function that receives a positive integer and returns the number with its digits inverted.

### Function Prototype

```cpp
int invert(int n);
```

### Parameters

- **n**: number to be inverted

### Return Value

The inverted number

### Example

```cpp
int inv = inverti(123);
cout<< inv;
// Output: 321
```

-----

## 24 - Palindrome check

### Description

Write a function that checks if a number is a palindrome (reads the same from left to right and vice versa).

### Function Prototype

```cpp
bool isPalindrome(int n);
```

### Parameters

- **n**: number to be checked

### Return Value

`true` if the number is a palindrome, `false` otherwise

### Example

```cpp
bool p = isPalindrome(12321);
cout<< p;
// Output: 1 (true)
```

-----

## 25 - Random number

### Description

Write a function that returns a random integer between `min` and `max`.

### Function Prototype

```cpp
int random(int min, int max);
```

### Parameters

- **min**: minimum value
- **max**: maximum value

### Return Value

A random integer in the given range

### Example

```cpp
int n = random(1, 10);
cout<< n;
// Output: a value between 1 and 10
```

-----

## 26 - Multiplication tables

### Description:

Write a function that asks the user to solve 10 random multiplication tables. Each wrong answer counts as an attempt. If the user completes the exercise with:

* less than 3 errors: print `Very good`
* from 4 to 10 errors: print `good`
* more than 10 errors: print `Train more!`

### Function Prototype:

```cpp
int tables(int n1, int n2);
```

### Parameters:

* `n1`: first maximum number for generating the multiplication tables
* `n2`: second maximum number for generating the multiplication tables

### Return Value:
None

### Example:

```cpp
tables(10, 10);
```

### Output:

```
Write the product between 2 and 8: 16
Write the product between 6 and 1: 5
Retry: 4
Retry: 4
Retry: 4
Retry: 6
...
Train more!
```

---



## 27 - Probability

### Probability basics

To calculate the probability of an event, you need to count the number of times the event occurs and divide it by the total number of experiments.

**Practical example:**
Let's say we want to calculate the probability of scoring a basket with a three-point shot. If we take 100 shots and make 45 baskets, the probability will be:
45/100 = 0.45

### Description:

Write a program that estimates the probability of getting a number divisible by 3 when rolling a die.
Create a function that simulates rolling a die by generating a random number between 1 and n.
Write a second function that calculates the estimated probability by rolling the die 100,000 times.

### Function Prototypes:

```cpp
int rollDice(int n);
double Probability(int n);
```

### Parameters:

* `n`: number of faces on the die (e.g., 6)

### Return Value:

* `rollDice()`: returns a random number between 1 and `n`
* `Probability()`: returns the estimated probability

### Example:

```cpp
cout << Probability(6);
// Output: 0.333...
cout << Probability(8);
// Output: 0.25
```

---

## 28 - Conditional joint probability

### Conditional probability

To calculate the probability that two events A and B occur simultaneously, you multiply the probability of A given that B has occurred by the probability of B.
```
P(A∩B)=P(A∣B)⋅P(B)
```
**Practical example:**
In a class of 20 students, there are 12 males and 8 females. We want to calculate the probability of randomly selecting a male student with black hair. Let's assume half of the males have black hair.

- Probability of having black hair given that the selected student is male:
  half =\> ½ = 0.5
- Probability of choosing a male:
  12/20 = 3/5
- Probability of selecting a male with black hair:
  0.5 \* 3/5 = 3/10

### Description:
Calculate the probability of getting an odd number greater than 3 when rolling a 6-sided die. **Hint:** Calculate the probability of getting a number greater than 3 and getting an odd number by generating a random number between 4-5-6. Then use the definition of conditional probability to calculate the required probability.

### Function Prototype:

```cpp
double jointProbability();
```

### Parameters:
None

### Return Value:
Return the estimated probability.

### Example:

```cpp
cout<< jointProbability();
// Output: Probability: 0.166...
```

-----

## 29 - Risk: comparing dice

### Description:
Simulate a round of Risk between an attacker and a defender, comparing up to 3 dice per side.

### Function Prototype:

```cpp
void riskRound(int d11, int d12, int d13, int d21, int d22, int d23, int &p1lost, int &p2lost);
```

### Parameters:

* `d11, d12, d13`: dice of player 1 (attacker, the dice are not in order)
* `d21, d22, d23`: dice of player 2 (defender, the dice are not in order)
* `p1lost`: tanks lost by player 1 (output)
* `p2lost`: tanks lost by player 2 (output)

### Return Value:
None

### Example:

```cpp
int p1 = 0, p2 = 0;
riskRound(1, 5, 5, 4, 3, 1, p1, p2);
cout<< p1 << p2
// output: 1 2
```

-----

## 30 - Risk: complete battle simulation

### Description:
Simulate an entire battle in Risk until one of the two players no longer has any tanks. The value of the dice must be generated randomly (6-sided dice).

### Function Prototype:

```cpp
int risk(int p1, int p2);
```

### Parameters:

* `p1`: tanks of player 1
* `p2`: tanks of player 2

### Return Value:

* `1` if player 1 wins
* `2` if player 2 wins

### Example:

```cpp
int vincitore = risiko(10, 5);
```

-----

## 31 - Tokyo: calculate the winner

### Description:
Simulate a round of the game Tokyo and return the winner based on the scores.

### Function Prototype:

```cpp
int Tokyo(int p1d1, int p1d2, int p2d1, int p2d2);
```

### Parameters:

* `p1d1`, `p1d2`: player 1's dice
* `p2d1`, `p2d2`: player 2's dice

### Return Value:

* `1` if player 1 wins
* `2` if player 2 wins

### Example:

```cpp
int winner = Tokyo(6, 3, 4, 2);
cout<< winner 
//output: 1
```

-----

## 32 - Tokyo: single round

### Description:
Simulate a random round of the game Tokyo with dice values generated randomly up to `valoreMassimo`.

### Function Prototype:

```cpp
int roundTokyo(int max);
```

### Parameters:

* `max`: maximum value on the faces of the dice

### Return Value:

* `1` or `2` depending on the winner

### Example:

```cpp
int winner = roundTokyo(6);
cout<< winner;
//output: 1 or 2 depending which player won
```

-----

## 33 - Tokyo: complete multiplayer round

### Description:
Simulate a realistic round of Tokyo with bluffing between two players. Player 1 always starts. **Hint:** modify the function from the previous exercise to allow the player to bluff about the value of the dice after they have been generated and the opponent to accept or reject the dice.

### Function Prototype:

```cpp
int completeTokyoRound(int max);
```

### Parameters:

* `max`: maximum value of the dice

### Return Value:

* `1` or `2` depending on the winner

### Example:

```cpp
int winner = completeTokyoRound(6);
cout<< winner
//output: 1 or 2 depending on which player won
```