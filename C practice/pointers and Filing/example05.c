#include <stdio.h>

int main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("NewFile.txt", "a");

    printf("Write text: ");
    while ((ch = getchar()) != '\n')
    {
        putc(ch, fptr);
    }
    fclose(fptr);
    return 0;
}