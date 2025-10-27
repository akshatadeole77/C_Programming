#include<stdio.h>
///////////////////////////////////////////////////////////////
// Function Name : DisplayDigit
// Description   : Accept number from user and display its digits
//                 in reverse order.
// Input         : Integer
// Output        : Digits in reverse order
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
///////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while( iNo != 0)
    {
        iDigit= iNo % 10; // extract last digit
        printf("%d\n",iDigit);
        iNo = iNo/10; //remove last digit

    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}
// Time Complexity: O(n)