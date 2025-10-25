#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Description   : Accept character from user and check whether 
//                 it is vowel or not.
// Input         : Character
// Output        : TRUE / FALSE
// Author        : Akshata Dhananjay Deole
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////

bool ChkVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U' ||
       cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character: ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}
