#include <stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : FindMax
// Description   : Accept two numbers from user and return
//                 the maximum of the two.
// Input         : Integer
// Output        : Integer 
// Author        : Akshata Dhananjay Deole
// Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////

int FindMax(int a,int b)
{
    if( a > b)
    {
        return a; 
    }
    else
    {
       return b; 
    }

}
int main()
{
    int num1 = 0; 
    int num2 = 0;
    int result = 0;

    printf("Enter two numbers:\n");
    scanf("%d%d",&num1, &num2);

    result = FindMax(num1,num2);
    printf("Maximum is:%d\n", result);

    return 0;
}