#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Description   : Accept number from user and display
//                 its multiplication.
// Input         : Integer
// Output        : Multiplication of factors
// Author        : Akshata Dhananjay Deole
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i=1;i<=iNo/2;i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
            return iMult;
        }
    }
    

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    
    return 0;
}
