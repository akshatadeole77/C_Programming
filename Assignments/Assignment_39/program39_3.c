#include <stdio.h>

void Display(int no)
{
    int iCnt = 0;

    for(iCnt = no; iCnt >= 1; iCnt--)
    {
        printf(" %d\t", iCnt);
        
    }


    
}

int main()
{
    int value = 0;

    printf("Enter a number: ");
    scanf("%d", &value);

    Display(value);

    return 0;
}