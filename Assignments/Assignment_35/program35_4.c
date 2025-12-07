#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowels(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
    if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
        *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
    {
        return TRUE;
    }
    str++;
    }
    return FALSE;
   
}


int main()
{
    char arr[20];
    BOOL bRet = 0;

    printf("Enter String:");
    scanf("%[^'/n']s",arr);

    bRet = ChkVowels(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no voewl");
    }

    

    return 0;

}
