#include <stdio.h>

int main()
{
    FILE *filePointer;

    filePointer = fopen("read.txt", "r");
    // character === fgetc
    char firstChar = fgetc(filePointer);
    printf("%c", firstChar);
    char secoundChar = fgetc(filePointer);
    printf("%c", secoundChar);
    secoundChar = fgetc(filePointer);
    printf("%c", secoundChar);
    // string === fgets
    char string[100];
    fgets(string, 5, filePointer); // will take 4 character the last one is null charcter
    printf("\n%s", string);
    fclose(filePointer);

    filePointer = fopen("write.txt", "w");
    // character === fputc
    fputc('o', filePointer);
    // string === fputs
    fputs("m agarwal", filePointer);
    fclose(filePointer);

    filePointer = fopen("append.txt", "a");
    // character === fgetc
    char characterA = fgetc(filePointer);
    printf("%c", characterA);
    // string === fgets
    char stringA[100];
    fgets(stringA, 4, filePointer); // will take 4 character the last one is null charcter
    printf("\n%s", stringA);
    // character === fputc
    fputc('o', filePointer);
    // string === fputs
    fputs("m agarwal", filePointer);
    fclose(filePointer);
    return 0;
}
