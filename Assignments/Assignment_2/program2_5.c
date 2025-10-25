#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
////////////////////////////////////////////////
//
//Function Name:ChkEvenOdd
//Description: It is used to perform even or odd
//Input:bool 
//Output:Integer
//Author:Akshata Dhananjay Deole
//Date:25/10/2025
//
////////////////////////////////////////////////
int main()
{
    int iValue=0;
    bool bRet = false;

    printf("Enter number");
    scanf("%d\n",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("%d is an Even number\n",iValue);
    }
    else
    {
        printf("%d is an Odd number\n",iValue);  
    }



    return 0;
}