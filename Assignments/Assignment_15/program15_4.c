#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : MultDigits
// Description   : Accept number from user and return the
//                 multiplication of all digits.
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 28/10/2025
///////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;//1 for multiplication

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return 0;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("Multiplication of all digits is: %d\n", iRet);

    return 0;
}
//Time complexity : O(n)
