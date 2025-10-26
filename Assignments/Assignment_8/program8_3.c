#include<stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accept number from user and find factorial 
//                 of that number.
// Input         : Integer
// Output        : Integer (Factorial value)
// Author        : Akshata Dhananjay Deole
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
        
    }

    printf("Factorial of %d is: %d\n", iNo, iFact);
}
    


int main()
{
    int iValue = 0;
    int iRet = 0;


    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;

}
//Time Complexity: O(n)