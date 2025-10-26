#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////
//
// Function Name : ChkGreater
// Description   : Accept number from user and check whether
//                 that number is greater than 100 or not.
// Input         : Integer
// Output        : Boolean 
// Author        : Akshata Dhananjay Deole
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////
bool ChkGreater(int iNo)
{
    if (iNo > 100)
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
    int iValue=0;
    bool bRet = false;

    printf("Please enter number");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("greater");
    }
    else
    {
       printf("smaller"); 
    }

    
    return 0;
}