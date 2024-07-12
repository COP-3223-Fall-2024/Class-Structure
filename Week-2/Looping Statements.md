# Introduction to Loops in C

## What is a Loop?

A loop is a control structure that allows you to repeat a block of code multiple times. Loops are essential for tasks that require repetitive actions, such as iterating over a collection of items or performing a set of operations until a condition is met.

## Types of Loops in C

In C, there are three primary types of loops:
1. `for` loop
2. `while` loop
3. `do-while` loop

Each type of loop serves different purposes and is used in different scenarios.

## 1. For Loop

The `for` loop is used when the number of iterations is known beforehand. It consists of three parts: initialization, condition, and increment/decrement.

### Syntax

```c
for (initialization; condition; increment) {
    // Code to be executed
}
```

## 2. While Loop
The while loop is used when the number of iterations is not known beforehand. It continues to execute as long as the condition is true.

### Syntax
```c
while (condition) {
    // Code to be executed
}
```

## 2. Do-While Loop
The do-while loop is similar to the while loop, but it guarantees that the loop body is executed at least once.

### Syntax
```c
do {
    // Code to be executed
} while (condition);
```