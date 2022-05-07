#include <stdio.h>

void project1();
void pointerAirtmatic();
int main()
{
    printf("arrays is the collection of similar datatype stored in contigous memory location");

    int integerArray[5] = {1, 2, 3, 4, 5};                // 20bytes
    char characterArray[5] = {"abcde"};                   // 20bytes
    float floatArray[5] = {1.8, 2.7, 3.77, 4.45, 5.9009}; // 20bytes

    printf("\n%d", integerArray[0]);
    printf("\n%c", characterArray[4]);
    printf("\n%f", floatArray[3]);

    project1();
    pointerAirtmatic();
    return 0;
}

void project1()
{
    int size = 3;
    int price[size];
    for (int i = 0; i < size; i++)
    {
        printf("\nprint the price mdfk\n");
        scanf("%d", &price[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("\n%f", price[i] + (price[i] * 0.18));
    }
}

void pointerAirtmatic()
{
    int a = 99;
    int *ptr = &a;

    printf("\n%u", *ptr);
    printf("\n%u", ptr);

    ptr++; // increase the pointer by 4 bytes
    /*  int --> 4 bytes
        char --> 1 bytes
        float --> 4 bytes
    */
    printf("\n%u", *ptr);
    printf("\n%u", ptr);
}



