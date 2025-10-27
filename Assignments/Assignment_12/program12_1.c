#include<stdio.h>
///////////////////////////////////////////////////////////////
// Function Name : print_factors
// Description   : Accept number from user and print all its factors.
// Input         : Integer
// Output        : Displays factors of the number
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
///////////////////////////////////////////////////////////////

void print_factors(int number)
{
    int iCnt = 0;

    if(number <= 0)
    {
        printf("Enter Number");
    }
    printf("Factors of:%d\n", number);

    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if(number % iCnt == 0)
        {
            printf("%d", iCnt);
        }
    }

}
int main()
{
    int number = 0;

    printf("Enter Number:");
    scanf("%d", &number);

    print_factors(number);

    return 0;
}
//Time Complexity : O(n)