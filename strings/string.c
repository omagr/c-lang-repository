#include <stdio.h>

void main()
{
    char string[] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g', ' ', 'i', 's', ' ', 'f', 'u', 'n', '\0'}; // \0 ===> null character to tell compiler that it is string termination

    char stringTwo[] = {"programming is fun xd"}; // " " ===> it only work with double quotes

    for (int i = 0; stringTwo[i] != '\0'; i++) {
        printf("%c", stringTwo[i]);
    }

    for (int i = 0; stringTwo[i] != '\0'; i++) {
        printf("%c", stringTwo[i]);
    }

    /* stringFormatSpecifier */

    char name[40];

    scanf("%s", name); // scanf can only take first word, it can not recoginzed the space and after words. it cannot input multi-word strings
    printf("%s", name);

    fgets(name, 100, stdin); // stringName , stringSize , stdin ===> 'standard input'
    puts(name); // name 
}
