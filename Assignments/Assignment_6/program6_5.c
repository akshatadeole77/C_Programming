#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Description   : Accept total marks and obtained marks from user 
//                 and calculate percentage.
// Input         : Integer
// Output        : Float
// Author        : Akshata Dhananjay Deole
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////

float percentage (int iTotal, int iObtained)
{
    float fResult = 0.0;

    if(iTotal == 0)
    {
        printf("Total marks cannot be zero.\n");
        return 0.0;
    }

    fResult = ((float)iObtained / (float)iTotal) * 100;
    return fResult;
    
    
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    float fRet=0.0;
    

    printf("Please enter total marks");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks");
    scanf("%d",&iValue2);

    fRet = percentage(iValue1, iValue2);

   
    printf("Percentage is: %.2f%%\n", fRet);

    

    
    return 0;
}
