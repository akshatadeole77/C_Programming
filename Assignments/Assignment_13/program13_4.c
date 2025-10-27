#include<stdio.h>
///////////////////////////////////////////////////////////////
// Function Name : sum_natural_numbers
// Description   : Accept number from user and return the sum 
//                 of first N natural numbers.
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
///////////////////////////////////////////////////////////////

int sum_natural_numbers(int iCnt)
{
    int iNo = 0;
    int iSum = 0;

    if(iCnt <= 0)
    {
        printf("Enter number:\n");
    }
    for(iNo = 1; iNo <= iCnt; iNo++)
    {
        iSum = iSum + iNo;
        
    }
    return iSum;

        
    }

int main()
{
    int  limit = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d",&limit);

   iRet = sum_natural_numbers(limit);
   printf("Sum of natural %d number:%d\n", limit, iRet);

    return 0;
}
// Time Complexity : O(N)