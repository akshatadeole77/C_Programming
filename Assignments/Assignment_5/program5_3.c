#include <stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Description   : Accept year from user and check whether
//                 it is a leap year or not.
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
       printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }

}
int main()
{
    int yr = 0;

    printf("Enter year:\n");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    
    
    return 0;
}