#include<stdio.h>
///////////////////////////////////////////////////////////////
// Function Name : CountEven
// Description   : Accept number from user and return the count
//                 of even digits.
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 28/10/2025
///////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("Count of even digits is: %d\n", iRet);

    return 0;
}
//Time complexity : O(n)
