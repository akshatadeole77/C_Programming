#include<stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : Table
// Description   : Accept number from user and display its table.
// Input         : Integer
// Output        : Displays table
// Author        : Akshata Dhananjay Deole
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////
int Table(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        printf("enter number\n");
    }
    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d * %d = %d\n", iNo, iCnt, iNo * iCnt);
    }
    
}
    


int main()
{
    int iValue = 0;
  
    printf("Enter Number");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;

}
//Time Complexity: O(n)