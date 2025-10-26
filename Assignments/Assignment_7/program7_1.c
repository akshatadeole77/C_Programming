#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accept number from user and print that number 
//                 of $ and * on screen.
// Input         : Integer
// Output        : Displays pattern
// Author        : Akshata Dhananjay Deole
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////

void Pattern (int iNo)
{
     int iCnt = 0;

     if(iNo <= 0)   
    {
        printf("Please enter a positive number.\n");
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
      printf("$ *");
    }
    
    
}
int main()
{
    int iValue =0;
   

    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
//Time Complexity: O(n)