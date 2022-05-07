#include <stdio.h>

int odd(int arr[], int n);
int reverse(int arr[], int n);
int fibonacci(int n);
int _2stable(int x, int y);

int main()
{
    int arr[23] = {1, 2, 69, 4, 5, 6, 7, 8, 9, 7, 6, 5, 4, 3, 3, 5, 66, 7, 54, 3456, 7890, 765, 44};
    int n = 23,a;
    odd(arr, n);
    reverse(arr, n);
    printf("\nprinting the final array by the main function :))))");
    for (int i = 0; i < n; i++)
    {
        printf("\n\t%d", arr[i]);
    }
    /*
    see whenever you give the array as parameter it consider to a be a call by refrence because array itself is a pointer so remember array will change globallly
    */
   printf("\n give the length of fibonacci number");
   scanf("%d",&a);
   fibonacci(a);
    return 0;
}
int odd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("\nthe number %d: is od", arr[i]);
        }
    }
}

int reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstValue = arr[n - i - 1];
        int lastValue = arr[i];
        arr[i] = firstValue;
        arr[n - i - 1] = lastValue;
    }

    printf("\nprinting the final array by the function:))))");

    for (int i = 0; i < n; i++)
    {
        printf("\n\t%d", arr[i]);
    }
}

int fibonacci(int n)
{
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("printing tha array");

    for (int i = 0; i < n; i++)
    {
        printf("\n\t%d", arr[i]);
    }
}


int _2stable(int x, int y){
    int tableArray[x][y];
    for (int i = 0; i < x; i++)
}