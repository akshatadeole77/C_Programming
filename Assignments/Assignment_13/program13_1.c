#include<stdio.h>
//////////////////////////////////////////////////////////////
// Function Name : print_numbers
// Description   : Accept number from user and print all numbers 
//                 from 1 to that number.
// Input         : Integer
// Output        : Displays numbers from 1 to N
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
///////////////////////////////////////////////////////////////

void print_numbers(int limit)
{
    int iNo = 0;

    if(limit <= 0)
    {
        printf("Enter number:");
    }
    for(iNo = 1; iNo <= limit; iNo++)
    {
        printf("%d", iNo);
    }

}
int main()
{
    int  limit = 0;

    printf("Enter Number:");
    scanf("%d",&limit);

    print_numbers(limit);

    return 0;
}
// Time Complexity : O(N)