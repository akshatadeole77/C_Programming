#include<stdio.h>
///////////////////////////////////////////////////////////////
// Function Name : sum_of_even_factor
// Description   : Accept number from user and return the sum
//                 of all even factors of that number.
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//////////////////////////////////////////////////////////////

int sum_of_even_factors(int number)
{
    int iCnt = 0;
    int iSum = 0;

    if(number <= 0)
    {
        printf("Enter Number");
        return 0;
    }
    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if((number % iCnt == 0) && (iCnt % 2 == 0)) //check even factor
        {
            iSum += iCnt;
        }
    }
    return iSum;

}
int main()
{
    int number = 0;

    printf("Enter Number:");
    scanf("%d", &number);

    printf("%d\n",sum_of_even_factors(number));

    return 0;
}
//Time Complexity : O(n)