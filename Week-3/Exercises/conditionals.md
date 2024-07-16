# Exercise: Understanding Conditionals in C

## Objectives

- Understand and implement various conditional statements in C (`if`, `if-else`, `else-if`, `else`).
- Write programs that utilize these conditionals effectively to solve problems.
- Practice logical thinking and flow control in programming.

## Instructions

Complete the following tasks and submit your solutions in a single `.c` file called `conditionals_exercise.c`. Ensure your code is well-commented and follows best practices.

### Task 1: Basic `if` Statement

1. Ask the user for a numerical input
2. Create a function named `is_it_even`
   1. Have it contain an argument of type `int`
3. Have the function return an `int`
4. Use an `if` statement to check if a number is even
   1. If even, return `1`
   2. If odd, return `0`
   
### Task 2: `if-else` Statement

1. Ask the user for a numerical input
2. Create a function named `report_if_its_even`
   1. Have it contain an argument of type `int`
3. Have the function return `void`
4. Use an `if-else` statement to check if a number is positive
   1. If even, print `The number is even`
   2. If odd, print `The number is odd`

### Task 3: `else-if` Statement

1. Ask the user for a numerical input
2. Create a function named `will_i_pass`
   1. Have it contain an argument of type `int`
3. Have the function return `char`
4. Use an `if-else` statement to check if a number is positive
   1. 90-100: return `A`
   2. 80-89: return `B`
   3. 70-79: return `C`
   4. 60-69: return `D`
   5. Below 60: return `F`

#### Example Output

```sh
Enter a number: 5
The number is positive.
```

```sh
Enter a number: 4
The number is even.
```

```sh
Enter current grade: 71
Grade C
```