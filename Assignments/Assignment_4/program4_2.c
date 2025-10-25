#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description   : Accept number from user and display
//                 its factor in decreasing order.
// Input         : Integer
// Output        : factors in decreasing order
// Author        : Akshata Dhananjay Deole
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    printf("Factors of %d in decreasing order are:\n", iNo);

    for(i = iNo/2; i>=1 ; i--)
    {
        if(iNo % i == 0)
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

    FactRev(iValue);

    return 0;
}
