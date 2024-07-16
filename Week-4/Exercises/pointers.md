# Understanding and Using Pointers in C

## Key Notes

- Understand the basics of pointers.
- Use pointers to manipulate data.
- Demonstrate pointer arithmetic.
- Use pointers with arrays and functions.

## Instructions

Complete the following tasks and submit your solutions in a single `.c` file. Ensure your code is well-commented and follows best practices.

### Task 1: Pointer Basics

1. Declare an integer variable and initialize it with a value.
2. Pass in the integer variable to `int* task1(int argument)`
3. Save the integer variable to a pointer and return from the function.

### Task 2: Overwritting a pointer

1. Declare an integer variable and initialize it with a value.
2. Declare a pointer and initialize it with a different value. 
3. Pass in the integer variable and pointer to `void task2(int* pointer, int value)`
4. Update the point to contain the new value.

### Task 3: Pointers and Functions

1. Declare a pointer and initialize it with a value.
2. Declare a pointer and initialize it with a different value. 
3. Use the function `void task3(int* arg1, int* arg2)` that attempts to swaps the values they point to.

### Expected Output

Please avoid printing any value from within the functions or changing the function's signatures. The user aisre at risk of losing points if they change the function's signature. 

The printing can take place within the user's `int main()`

- Task 1
```sh
Passed in value: 5
Pointer's Value: 5
```

- Task 2
```sh
Pre Update: a = 5, b = 10
Post Update: a = 10, b = 10
```

- Task 3
```sh
Before swapping: a = 5, b = 10
After swapping: a = 10, b = 5
```