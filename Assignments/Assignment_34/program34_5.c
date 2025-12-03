#include <stdio.h>

void Display (char ch)
{
   int ascii = (int)ch;

    printf("-----------------------------------------\n");
    printf(" Character : %c\n", ch);
    printf(" Decimal   : %d\n", ascii);
    printf(" Hex       : %X\n", ascii);
    printf(" Octal     : %o\n", ascii);
    printf("-----------------------------------------\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :");
    scanf("%c\n", &cValue);

    Display (cValue);
    return 0;
}
