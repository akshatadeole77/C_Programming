#include<stdio.h>
#include<stdbool.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;   

BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
            str++;
        }
        else
        {
            return FALSE;
        }
    }

}


int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;
    

    printf("Enter String:");
    scanf("%[^'/n']s",arr);

    printf("Enter character:");
    scanf("%[^'/n']s",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not found");
    }


   
    return 0;

}
