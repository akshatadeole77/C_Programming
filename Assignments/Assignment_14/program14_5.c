#include<stdio.h>
///////////////////////////////////////////////////////////////
// Function Name : Count
// Description   : Accept number from user and count frequency 
//                 of digits which are less than 6.
// Input         : Integer
// Output        : Integer
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
///////////////////////////////////////////////////////////////
int Count(int iNo)
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
        if(iDigit < 6)
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
    int bRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = Count(iValue);
    printf("Frequency of digits less than 6 is:%d",bRet);


    return 0;
}
// Time Complexity: O(n)