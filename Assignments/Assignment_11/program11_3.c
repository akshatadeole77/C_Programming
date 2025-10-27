#include<stdio.h>

/////////////////////////////////////////////////////////////////////
// Function Name : RangeSum
// Description   : Accept start and end from user and return addition
//                 of all even numbers between that range.
// Input         : Integers 
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
/////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart <= 0 || iEnd <=0)
    {
        printf("Range should contain positive numbers only\n");
    }
    if(iStart > iEnd)
    {
        int temp = iStart;
        iStart = iEnd;
        iEnd = temp;
    }
    for(iCnt = iStart;iCnt <= iEnd; iCnt++)
    {
        iSum += iCnt;
    }
    return iSum;
    
    

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    

    printf("Enter Starting Point:");
    scanf("%d",&iValue1);

    printf("Enter Ending Point:");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1, iValue2);

    if(iRet != 0)
    {
        printf("Addition of  is:%d\n",iRet);
    }
    
  
    return 0;
   

}
//Time Complexity: O(n)


