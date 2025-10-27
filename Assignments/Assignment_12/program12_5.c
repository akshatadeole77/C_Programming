#include<stdio.h>
#include<stdbool.h>
///////////////////////////////////////////////////////////////
// Function Name : sum_of_even_factor
// Description   : Accept number from user and return the sum
//                 of all even factors of that number.
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//////////////////////////////////////////////////////////////

bool is_divisible_by_5(int number)
{
   if( number % 5 == 0)
   {
    return true;
   }
   else
   {
    return false;
   }

}
int main()
{
    int number = 0;

    printf("Enter Number:");
    scanf("%d", &number);

    printf("%s\n",is_divisible_by_5(number) ? "Yes" : "No");

    return 0;
}
//Time Complexity : O(1)