#include<stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : TableRev
// Description   : Accept number from user and display its table
//                 in reverse order.
// Input         : Integer
// Output        : Displays table in reverse order
// Author        : Akshata Dhananjay Deole
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////
int TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        printf("Enter Number:\n");
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d * %d = %d\n", iNo, iCnt, iNo * iCnt);
    }
}
    


int main()
{
    int iValue = 0;
  
    printf("Enter Number");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;

}
//Time Complexity: O(n)