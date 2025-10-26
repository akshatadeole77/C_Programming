#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : MultipleDisplay
// Description   : Accept number from user and print first 
//                 5 multiples of that number.
// Input         : Integer
// Output        : Displays multiples
// Author        : Akshata Dhananjay Deole
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////

void  MultipleDisplay (int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        printf("enter a number.\n");
        return;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
      printf("%d ",iNo*iCnt);
    }
   
     
    
}
int main()
{
    int iValue =0;
   

    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    
    return 0;
}
//Time Complexity: O(1)