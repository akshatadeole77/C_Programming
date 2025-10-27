#include<stdio.h>
#include<stdbool.h>
///////////////////////////////////////////////////////////////
// Function Name : ChkZero
// Description   : Accept number from user and check whether it
//                 contains 0 in it or not.
// Input         : Integer
// Output        : Boolean
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
///////////////////////////////////////////////////////////////
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit ==0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
    
    
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}
// Time Complexity: O(n)