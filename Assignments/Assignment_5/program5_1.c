#include <stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description   : Accept number from user and check whether
//                 it is even or odd.
// Input         : Integer
// Output        : Displays whether number is even or odd
// Author        : Akshata Dhananjay Deole
// Date          : 25/10/2025
//
////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if( num % 2 == 0)
    {
        printf("%d is Even\n",num);
    }
    else
    {
        printf("%d is Odd\n",num);
    }

}
int main()
{
    int number=0;

    printf("Enter number:\n");
    scanf("%d",&number);

    CheckEvenOdd(number);
}