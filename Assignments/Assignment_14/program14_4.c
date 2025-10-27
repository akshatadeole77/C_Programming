#include<stdio.h>
///////////////////////////////////////////////////////////////
// Function Name : CountFour
// Description   : Accept number from user and count frequency 
//                 of digit 4 in it.
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
///////////////////////////////////////////////////////////////

int CountFour(int iNo)
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
        if(iDigit == 4)
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

    bRet = CountFour(iValue);
    printf("Frequency of 4 is:%d",bRet);


    return 0;
}
// Time Complexity: O(n)