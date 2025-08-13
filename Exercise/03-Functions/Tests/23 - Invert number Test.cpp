#include "../../../Automatic_Script_Test/UnifiedFunctionTester.h"
#include "../Code/23 - Invert number.cpp"
#include "../Solutions/23 - Invert number.cpp"

struct parameters { int n; };

std::unique_ptr<UnifiedFunctionTester> createInvertNumberTest(parameters params) {
    int* n_dynamic = new int(params.n);
    std::vector<void*> input_data = { n_dynamic };

    std::vector<std::unique_ptr<AssignmentStrategy>> assignment_strategies;
    assignment_strategies.push_back(std::make_unique<IntValueAssignment>());

    std::vector<std::unique_ptr<ComparisonStrategy>> comparison_strategies;
    comparison_strategies.push_back(std::make_unique<IntValueComparison>());

    std::unique_ptr<ComparisonStrategy> return_strategy = std::make_unique<IntReturnComparison>();

    return std::make_unique<UnifiedFunctionTester>(
        input_data,
        std::move(assignment_strategies),
        std::move(comparison_strategies),
        [](std::vector<void*>& args) -> void* {
            int result = invert(*(int*)args[0]);
            return new int(result);
        },
        [](std::vector<void*>& args) -> void* {
            int result = invertSol(*(int*)args[0]);
            return new int(result);
        },
        std::move(return_strategy),
        true, false, true
    );
}## 23 - Invert number

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
invert(123); // returns 321
invert(-6798); // returns -8976
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
isPalindrome(-12321); //returns 1 (true)
isPalindrome(34534); //returns 0 (false)
```

-----## 23 - Invert number

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
invert(123); // returns 321
invert(-6798); // returns -8976
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
isPalindrome(-12321); //returns 1 (true)
isPalindrome(34534); //returns 0 (false)
```

-----

void testInvertNumberDigits() {
    std::vector<std::unique_ptr<UnifiedFunctionTester>> tests;
    tests.push_back(createInvertNumberTest({8}));
    tests.push_back(createInvertNumberTest({12345}));
    tests.push_back(createInvertNumberTest({-478}));
    tests.push_back(createInvertNumberTest({0}));
    tests.push_back(createInvertNumberTest({-56}));
    runTests(tests);
}

int main() {
    testInvertNumberDigits();
    return 0;
}