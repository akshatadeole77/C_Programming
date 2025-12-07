#include <stdio.h>

void Display(int no)
{
    int iCnt = 0;

    for(iCnt = no; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
    }


    
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}