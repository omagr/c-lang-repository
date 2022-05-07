#include <stdio.h>

void main()
{
    signed short int a;
    unsigned short int b;
    unsigned int c;
    signed int d;
    signed long int e;
    unsigned long int f;
    long long int g;
    unsigned long long int h;

    signed char i;
    unsigned char j;

    float k;
    double l;
    long double m;

    printf("\n%d", sizeof a);
    printf("\n%d", sizeof b);
    printf("\n%d", sizeof c);
    printf("\n%d", sizeof d);
    printf("\n%d", sizeof e);
    printf("\n%d", sizeof f);
    printf("\n%d", sizeof g);
    printf("\n%d", sizeof h);
    printf("\n%d", sizeof i);
    printf("\n%d", sizeof j);
    printf("\n%d", sizeof k);
    printf("\n%d", sizeof l);
    printf("\n%d", sizeof m);
}
