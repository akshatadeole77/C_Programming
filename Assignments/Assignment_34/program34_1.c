#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("------------------------------------------------------------\n");
    printf("  Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("------------------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        // For non-printable characters, print a placeholder
        if(i < 32 || i == 127)
        {
            printf("  NP\t\t%d\t%X\t\t%o\n", i, i, i);
        }
        else
        {
            printf("   %c\t\t%d\t%X\t\t%o\n", i, i, i, i);
        }
    }

    printf("------------------------------------------------------------\n");
}

int main()
{
    DisplayASCII();
    return 0;
}
