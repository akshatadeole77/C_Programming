#include<stdio.h>
//////////////////////////////////////////////////////////////
// Function Name : print_even_numbers
// Description   : Accept number from user and print all even numbers 
//                 from 1 to N
// Input         : Integer
// Output        : Displays even number
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
///////////////////////////////////////////////////////////////

void print_even_numbers(int limit)
{
    int iNo = 0;

    if(limit <= 0)
    {
        printf("Enter number:\n");
    }
    for(iNo = 1; iNo <= limit; iNo++)
    {
        if(iNo % 2 == 0)
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

    print_even_numbers(limit);

    return 0;
}
// Time Complexity : O(N)