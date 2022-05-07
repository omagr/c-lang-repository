#include <stdio.h>

void autoFunction () {
    auto int a = 10;
    printf("\n the value of a: %d", a);
    printf("\n the memory of a: %d", &a);
    ++a;
    printf("\n the value of a: %d", a);
    printf("\n the memory of a: %d\n", &a);
}

void main() {
    int a;
    autoFunction();
    autoFunction();
    autoFunction();
    autoFunction();
    printf("\n the value of a: %d", a);
    printf("\n the memory of a: %d\n", &a);
}
