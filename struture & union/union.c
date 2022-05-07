#include <stdio.h>

void main() {
    union abc
    {
        int a;
        char b;
        float c;
        double d;
    };

    union abc number;
    number.a = 69;
    printf("%d",number.a);
    printf("%c",number.b); /* ascii value of E = 69*/
    
    /* size of unio0n */
    printf("%ld", sizeof (union abc)); // 8 because double is here

    /* accessing member with pointers */
    union abc *pointer = &number;
    printf("%d",pointer->a);
    printf("%c",pointer->b);
    printf("%f",pointer->c);
    printf("%d",pointer->d);

}