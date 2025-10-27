#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function Name : KMtoMeter
// Description   : Accept distance in kilometers from user and 
//                 convert it into meters.
// Input         : Integer
// Output        : Integer
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//
/////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMeter = iNo * 1000;
    return iMeter;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance In KM:");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance In Meter %d\n",iRet);

    return 0;
   

}
//Time Complexity: O(1)


