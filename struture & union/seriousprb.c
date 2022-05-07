// Online C compiler to run C program online
#include <stdio.h>

int main() {
    typedef struct abc
    {
        char x,y,z;
    } abc ;
    abc a = {"1","0","a"+2};
    abc *a = &a;
    printf("%c,%c,", *((char*)a+1),*((char*)a+2));
    return 0;
}

// cse gate2018