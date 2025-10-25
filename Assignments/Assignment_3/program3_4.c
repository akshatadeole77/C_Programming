#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//
//Function Name:DisplayConvert
//Description:  It accepts one character from user and converts its case
//Input:Character
//Output:Prints converted character on screen
//Author:Akshata Dhananjay Deole
//Date:25/10/2025
//
//////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
   if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("Converted Character:%c\n",CValue + 32 );
    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
         printf("Converted Character:%c\n",CValue - 32);
    }
}
        

int main()
{
    char cValue = '\0';
   

    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}