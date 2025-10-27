#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : Accept amount in US dollars and convert it 
//                 into Indian rupees (1$ = 70 INR).
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iINR = 0;

    if(iNo < 0)
    {
        iNo = -iNo;  
    }

    iINR = iNo * 70;  // Conversion logic
    return iINR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}

// Time Complexity: O(1)

