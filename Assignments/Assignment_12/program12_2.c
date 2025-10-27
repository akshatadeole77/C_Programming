#include<stdio.h>
///////////////////////////////////////////////////////////////
// Function Name : count_factors
// Description   : Accept number from user and count total factors.
// Input         : Integer
// Output        : Integer
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
///////////////////////////////////////////////////////////////

int count_factors(int number)
{
    int iCnt = 0;
    int iCount = 0;

    if(number <= 0)
    {
        printf("Enter Number");
    }
    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if(number % iCnt == 0)
        {
            iCount++;
        }
    }
    return iCount;

}
int main()
{
    int number = 0;

    printf("Enter Number:");
    scanf("%d", &number);

    printf("%d\n",count_factors(number));

    return 0;
}
//Time Complexity : O(n)