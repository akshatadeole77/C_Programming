#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accept number from user and print numbers 
//                 till that number.
// Input         : Integer
// Output        : Displays numbers
// Author        : Akshata Dhananjay Deole
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////

void Display (int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)   
    {
        printf("Please enter a positive number.\n");
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
     
    
}
int main()
{
    int iValue =0;
   

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}
//Time Complexity: O(n)