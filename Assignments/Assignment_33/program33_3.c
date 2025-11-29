#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigits(char ch)
{
    if((ch >= '0' && ch <= '9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf("%c",&cValue);

    bRet = ChkDigits(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not Digit");
    }


    return 0;
}