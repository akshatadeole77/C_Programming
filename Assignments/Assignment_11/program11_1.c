#include<stdio.h>

/////////////////////////////////////////////////////////////////////
// Function Name : RangeDisplay
// Description   : Accept start and end from user and display all
//                 numbers between that range 
// Input         : Integers 
// Output        : Integers
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        int temp = iStart; //If start is greater than end swap still display increasing
        iStart = iEnd;
        iEnd = temp;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d",iCnt);
    }
    

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    

    printf("Enter Starting Point:");
    scanf("%d",&iValue1);

    printf("Enter Ending Point:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);
  
    return 0;
   

}
//Time Complexity: O(n)


