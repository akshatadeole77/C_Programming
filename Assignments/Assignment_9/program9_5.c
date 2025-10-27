#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : FactorialDiff
// Description   : Accept number from user and return difference 
//                 between even factorial and odd factorial of that number.
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;    
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;   // Even factorial 
        }
        else
        {
            iOddFact = iOddFact * iCnt;    // Odd factorial 
        }
    }

    iDiff = iEvenFact - iOddFact; 
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);
    

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return 0;
}
// Time Complexity: O(n)

