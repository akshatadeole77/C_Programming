#include<stdio.h>

///////////////////////////////////////////////////////////////
// Function Name : CountRange
// Description   : Accept number from user and return the count
//                 of digits that are between 3 and 7.
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 28/10/2025
////////////////////////////////////////////////////////////

int CountRange(int iNo)
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
        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountRange(iValue);
    printf("Count of digits between 3 and 7 is: %d\n", iRet);

    return 0;
}
//Time complexity : O(n)
