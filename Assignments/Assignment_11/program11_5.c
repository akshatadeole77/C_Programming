#include<stdio.h>
///////////////////////////////////////////////////////////////
// Function Name : RangeDisplayRev
// Description   : Accept range from user and display all numbers 
//                 in between that range in reverse order.
// Input         : Integer
// Output        : Displays numbers in reverse order
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
///////////////////////////////////////////////////////////////
int RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        int temp = iStart;
        iStart = iEnd;
        iEnd = temp;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d ", iCnt);
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

    RangeDisplayRev(iValue1, iValue2);
  
    return 0;

}
//Time Complexity: O(n)