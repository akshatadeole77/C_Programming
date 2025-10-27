#include<stdio.h>
//////////////////////////////////////////////////////////////
// Function Name : print_odd_numbers
// Description   : Accept number from user and print all odd numbers 
//                 from 1 to N
// Input         : Integer
// Output        : Displays odd number
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
///////////////////////////////////////////////////////////////

void print_odd_numbers(int limit)
{
    int iNo = 0;

    if(limit <= 0)
    {
        printf("Enter number:\n");
    }
    for(iNo = 1; iNo <= limit; iNo++)
    {
        if(iNo % 2 != 0)
        {
          printf("%d\t", iNo);
        }

        
    }

}
int main()
{
    int  limit = 0;

    printf("Enter Number:");
    scanf("%d",&limit);

   print_odd_numbers(limit);

    return 0;
}
// Time Complexity : O(N)