// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[10] = {34,1,2,3,4,5,6,7,8,9};
    int *c = arr;
    int *d = &arr[1];
    int *e = arr+1;
    
    printf("%d\n%d\n%d", c,d,e);
    
    printf("\n%d", c); 
    // arr only give the first address
    printf("\n%d", arr);
    
    
    return 0;
}