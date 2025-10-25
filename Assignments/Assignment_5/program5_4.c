#include <stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : CheckNumberType
// Description   : Accept number from user and check whether
//                 it is positive, negative or zero.
// Input         : Integer
// Output        : Displays number type
// Author        : Akshata Dhananjay Deole
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////

void CheckNumberType(int number)
{
    if(number > 0)
    {
        printf("%d is Positive.\n",number);
    }
    else if(number < 0)
    {
        printf("%d is negative.\n",number);
    }
    else
    {
        printf("Number is zero");
    }
   }


int main()
{
    int number = 0;

    printf("Enter number:\n");
    scanf("%d",&number);

    CheckNumberType(number);

    
    
    return 0;
}