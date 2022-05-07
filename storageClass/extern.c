#include <stdio.h>

void autoFunction () {
    extern int a;
    a = 10;
}

void main() {
    printf("\n the value of a: %d", a);
    printf("\n the memory of a: %d\n", &a);
}