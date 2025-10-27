#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Description   : Accept area in square feet from user and 
//                 convert it into square meters.
// Input         : Integer
// Output        : Double
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//
/////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double sMeter = 0.0f;

    if(iValue< 0)
    {
        iValue = -iValue;
    }

    sMeter = iValue * 0.0929;
    return sMeter;

}
int main()
{
    int iValue = 0;
    double dRet = 0.0f;

    printf("Enter area in square feet:");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area In SquareMeter %lf\n",dRet);

    return 0;
   

}
//Time Complexity: O(1)


