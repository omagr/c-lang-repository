#include <stdio.h>

void pointers();
void pointerToPointer();
void pointersCallFunction(int *n);
void addressWillSame(int n);

void main()
{
    /*
    * ==> value at
    & ==> address of
    */
    int a = 99;
    int *ptr;
    ptr = &a;
    printf("%d\n", a);     // value of a
    printf("%u\n", ptr);   // add of a
    printf("%u\n", *ptr);  // value of ptr ----> value at the address of
    printf("%u\n", *(&a)); // value of add of a

    printf("\n---------------------------------------------");
    pointers();

    printf("\n---------------------------------------------");
    pointerToPointer();

    printf("\n---------------------------------------------");
    /* function call by refrence */
    int q = 2;
    printf("\n%d", q); // 2
    pointersCallFunction(&q);
    printf("\n%d", q); // 4 ===> thiss function will change the value of Q necause we have give the address f it

    printf("\n---------------------------------------------");
    int n = 99;
    printf("\n%p\n", &n); // address of this is
    addressWillSame(n);   // not same qas tha addres of this , why?  because we give the copy of that variable as a argument to function
}

void pointers()
{
    int a = 99;
    int *p = &a;
    *p = 0;
    printf("\n%d", a); // a =================> 0

    *p += 9;
    printf("\n%d", a); // a =================> 9

    (*p)++;
    printf("\n%d", a); // a =================> 10
}

void pointerToPointer()
{
    int a = 69;
    int *p = &a;
    int **pp = &p;

    printf("\n%d", a);    // value of a
    printf("\n%u", p);    // add of a
    printf("\n%u", **pp); // value of pp of p ====> value of a
    printf("\n%u", *pp);  // value of p ====> add of a
    printf("\n%u", pp);   // add of p
}

void pointersCallFunction(int *n)
{
    *n = (*n) * (*n);
    printf("\n%d", *n);
}

void addressWillSame(int n)
{
    printf("%p\n", &n);
}