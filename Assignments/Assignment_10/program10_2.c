#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Description   : Accept width and height of rectangle from user 
//                 and calculate its area.
// Input         : Float
// Output        : Double 
// Author        : Akshata Dhananjay Deole
// Date          : 27/10/2025
//
/////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if(fWidth < 0)
    {
        fWidth = -fWidth;
    }

    dArea = fWidth * fHeight;
    return dArea;

}
int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width:");
    scanf("%f",&fValue1);

    printf("Enter height:");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is:%f", dRet);
    

    return 0;
   

}
//Time Complexity: O(1)


