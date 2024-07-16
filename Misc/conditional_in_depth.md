### 1. Conditional Statements

#### 1.1. If Statement

The `if` statement is used to execute a block of code if a specified condition is true.

##### Syntax

```c
if (condition) {
    // Code to be executed if condition is true
}
```

#### 1.2. If-Else Statement

The `if-else` statement is used to execute one block of code if the condition is true and another block of code if the condition is false.

##### Syntax

```c
if (condition) {
    // Code to be executed if condition is true
} else {
    // Code to be executed if condition is false
}
```

#### 1.3. Else-If Statement

The `else-if` statement is used to specify a new condition to test if the first condition is false.

##### Syntax

```c
if (condition1) {
    // Code to be executed if condition1 is true
} else if (condition2) {
    // Code to be executed if condition2 is true
} else {
    // Code to be executed if both conditions are false
}
```

#### 1.4. Switch Statement

The `switch` statement is used to execute one block of code from multiple options based on the value of a variable.

##### Syntax

```c
switch (variable) {
    case value1:
        // Code to be executed if variable equals value1
        break;
    case value2:
        // Code to be executed if variable equals value2
        break;
    // More cases...
    default:
        // Code to be executed if variable doesn't match any case
}
```