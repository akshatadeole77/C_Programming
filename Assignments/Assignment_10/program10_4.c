#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function Name : FhtoCs
// Description   : Accept temperature in Fahrenheit from user and 
//                 convert it into Celsius.
// Input         : Float
// Output        : Double
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//
/////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0/9.0);

    return dCelsius;

}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius %f\n",dRet);

    return 0;
   

}
//Time Complexity: O(1)


