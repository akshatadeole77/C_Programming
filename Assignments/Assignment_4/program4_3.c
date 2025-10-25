#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Description   : Accept number from user and display
//                 all its non-factors.
// Input         : Integer
// Output        : Prints non-factors on screen
// Author        : Akshata Dhananjay Deole
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    printf("Non Factors of %d are:\n", iNo);

    for(i = 1; i < iNo ; i++)
    {
        if(iNo % i != 0)
        {
            printf("%d\n",i);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}
