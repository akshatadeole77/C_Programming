#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Description   : Accept number from user and return summation
//                 of all its non factor.
// Input         : Integer
// Output        : Integer
// Author        : Akshata Dhananjay Deole
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i=1;i<iNo;i++)
    {
        if (iNo % i != 0)
        {
            iSum = iSum + i;
            
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of non factors of %d is : %d\n",iValue,iRet);

    return 0;
}
