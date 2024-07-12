#include <stdio.h>

void for_example();
void while_example();
void do_while_example();

int main() {
    for_example();
    while_example();
    do_while_example();
}

void for_example() {
    for (int i = 0; i < 5; i++) {
        printf("Iteration %d\n", i);
    }
}

void while_example() {
    int i = 0;
    while (i < 5) {
        printf("Iteration %d\n", i);
        i++;
    }
}

void do_while_example() {
    int i = 0;
    do {
        printf("Iteration %d\n", i);
        i++;
    } while (i < 5);
}