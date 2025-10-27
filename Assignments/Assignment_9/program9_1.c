#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accept number from user and display pattern 
//                 of * and # alternately.
// Input         : Integer
// Output        : Displays pattern 
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//
///////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo; 
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("*");
        }
        else
        {
            printf("#");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}


// Time Complexity: O(n)
