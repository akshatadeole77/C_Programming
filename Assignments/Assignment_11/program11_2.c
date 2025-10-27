#include<stdio.h>

/////////////////////////////////////////////////////////////////////
// Function Name : RangeDisplay
// Description   : Accept start and end from user and display all
//                 even numbers between that range
// Input         : Integers 
// Output        : Integers (even numbers)
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
/////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        int temp = iStart; 
        iStart = iEnd;
        iEnd = temp;
    }
    printf("Even numbers between %d and %d are:\n", iStart, iEnd);

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
           printf("%d",iCnt);
        }
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


