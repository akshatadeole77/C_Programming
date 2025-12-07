#include <stdio.h>

void Display(int no)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= no; iCnt++)
    {
        printf("%c\t", ch);
        ch++;
    }


    
}

int main()
{
    int iValue = 0;

    printf("Enter a character: ");
    scanf(" %d", &iValue);

    Display(iValue);

    return 0;
}