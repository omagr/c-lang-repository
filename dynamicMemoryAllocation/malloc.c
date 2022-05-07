#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("give the number of integer : ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * (sizeof(int)));
    if (ptr != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            printf("\ntype the no.%d integer :", i);
            scanf("%d", ptr + i);
        }
        for (int i = 0; i < n; i++)
        {
            printf("no.%d integer : %d \n", i, *(ptr+i));
        } 
        printf("size of pointer :d" );
    } else {
        exit(1);
    }
    
    return 0;
}
