#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char chDiv)
{
    if( chDiv >= 'a' && chDiv <= 'z')
    {
        chDiv = chDiv - 32;
    }

    switch (chDiv)
    {
        case 'A':
        printf("Your exam time is 7AM\n");
        return TRUE;

        case 'B':
        printf("Your exam time is 8:30AM\n");
        return TRUE;

        case 'C':
        printf("Your exam time is 9AM\n");
        return TRUE;

        case 'D':
        printf("Your exam time is 10:30AM\n");
        return TRUE;
   
    default:
        return FALSE;
    }

}

int main()
{

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your division :");
    scanf("%c", &cValue);

    bRet = DisplaySchedule(cValue);

   

    return 0;
}