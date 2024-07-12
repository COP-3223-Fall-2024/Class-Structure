# Introduction to Variables and Data Types in C

## What is a Variable?

A variable is a named storage location in memory that holds a value. The value of a variable can be changed during program execution. Variables must be declared before they can be used. In future sections of this doc, I will use the words "type" and "typing" often. Please do not confuse them with actual *typing* on a keyboard.

Type is what you see in the example below which is formally referred to as `data_type`

## Syntax for Declaring a Variable

```c
data_type variable_name;
```

### Basic Data Types in C

C supports several basic data types, each designed to hold different kinds of data. The basic data types are:

- int (Integer)
- float (Floating Point)
- double (Double Floating Point)
- char (Character)
- void (Empty Type)
- there are more but we'll cover those during week 4 (arrays/structs)

### Type Modifiers

C provides type modifiers to alter the size and range of basic data types. The type modifiers are:

- short
- long
- signed
- unsigned

### Typing and Memory Usage

- `int`: 4 bytes
- `float` : 4 bytes
- `double` : 8 bytes
- `char`: 1 bytes
- `short int`: 2 bytes
- `long int`: 4 or 8 (system dependent)
- `unsigned int`: 4 bytes