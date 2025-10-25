#include<stdio.h>
///////////////////////////////////////////////////////////////////
//
//Function Name:DisplayFactor
//Description:  It is used to print even factors of a given number
//Input:Integer 
//Output:Prints even factors on screen
//Author:Akshata Dhananjay Deole
//Date:25/10/2025
//
///////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;
    

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    printf("Even factors of %d are:\n", iNo);

    for(i=1;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            
            printf("%d\n",i);
        }
    }
}
        

int main()
{
    int iValue=0;
   

    printf("Enter number");
    scanf("%d\n",&iValue);

    DisplayFactor(iValue);

    return 0;
}