#include <stdio.h>

// Function prototype (always before its usage)
// two arguments: a and b
//      a is of type int
//      b is of type int
int add(int a, int b);
void say_hi();

int main() {
    int result = add(5, 3);

    printf("The sum is: %d\n", result);
    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

void say_hi() {
    printf("Hi\n");
}