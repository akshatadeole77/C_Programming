#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Description   : Accept radius of circle from user and calculate its area.
//                 Formula: Area = PI * Radius * Radius
// Input         : Float
// Output        : Double 
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//
/////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float PI = 3.14;
    double dArea = 0.0;

    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    dArea = PI * fRadius * fRadius;
    return dArea;

}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is:%f", dRet);

    return 0;
   

}
//Time Complexity: O(1)


