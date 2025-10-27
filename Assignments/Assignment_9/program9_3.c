#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : EvenFactorial
// Description   : Accept number from user and return Even factorial 
//                 of that number.
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;   
    }

    for(iCnt = 2; iCnt <= iNo; iCnt += 2)   
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}

// Time Complexity: O(n/2) 
