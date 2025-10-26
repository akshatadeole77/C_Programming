#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : Multiply
// Description   : Accept three numbers from user and return 
//                 their multiplication.
// Input         : Integer
// Output        : Integer
// Author        : Akshata Dhananjay Deole
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 0;
    iResult = iNo1 * iNo2 * iNo3;
    return iResult;
    
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;
    

    printf("Please enter three numbers");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of three numbers is: %d\n", iRet);

    

    
    return 0;
}