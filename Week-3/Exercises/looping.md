# Exercise: Understanding Looping and iterations in C


## Introduction

Loops are fundamental in programming, allowing you to execute a block of code multiple times. In C, you have several looping constructs: `for`, `while`, and `do-while` loops. This guide will introduce these loops and provide exercises to help you practice using them.

## Program Setup

For the file containing your solution, you will name it as `looping_exercises.c`.

### Sum of First N Natural Numbers

- Write a C program that prompts the user to enter a positive integer N.
- Use a `for` loop to calculate the sum of the first N natural numbers and print the result.

**Conditions**
- must use a function called `calculate_sum(int n)` where n is upper limit the user entered
- Include N within the calculations 

**Example**
- User input is `5`
- `calculate_sum(5)` must return `15`
  
**Output Format**
```txt
Sum of all natural numbers between [1, 5] is 15.
```

### Factorial of a Number

Write a C program that prompts the user to enter a positive integer.
Use a `while` loop to calculate the factorial of the number and print the result.

**Conditions**
- must use a function called `calculate_factorial(int n)` 

**Example**
- User input is `4`
- `calculate_factorial(4)` must return `24`
  
**Output Format**
```txt
4! is 24.
```

### Print Multiplication Table

Write a C program that prompts the user to enter an integer.
Use a `do-while` loop to print the multiplication table for the entered number up to 10.

**Conditions**
- must use a function called `print_out_mult_table(int n)` 

**Example**
- User input is `3`
- `print_out_mult_table(3)` must return the first **10 multiples** of 3 
  
**Output Format**
```txt
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
3 x 6 = 18
3 x 7 = 21
3 x 8 = 24
3 x 9 = 27
3 x 10 = 30
```

### Expectation

Steps:

1. Write a function prototype for each task.
2. Define and implement each task.
3. Call each task in the main function and print the result.

## Conclusion

Looping and iterations are essential concepts in C programming that allow you to perform repetitive tasks efficiently. By completing these exercises, you should gain a better understanding of how to use for, while, and do-while loops. Continue practicing with different loop scenarios to enhance your skills.