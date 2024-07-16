#include <stdio.h>

void basic_types();
void long_and_short_diffs();

int main() {
    basic_types();
    long_and_short_diffs();
}

void basic_types() {
    int age = 25;
    printf("Age: %d\n", age);

    float salary = 50000.50;
    printf("Salary: %.2f\n", salary);
    
    double price = 99.99;
    printf("Price: %.2lf\n", price);

    char initial = 'A';
    printf("Initial: %c\n", initial);
}

void long_and_short_diffs() {
    short int shortNum = 32000;
    long int longNum = 2000000000;
    unsigned int unsignedNum = 4000000000U;
    signed int signedNum = -2000000000;

    printf("Short Number: %d\n", shortNum);
    printf("Long Number: %ld\n", longNum);
    printf("Unsigned Number: %u\n", unsignedNum);
    printf("Signed Number: %d\n", signedNum);
}