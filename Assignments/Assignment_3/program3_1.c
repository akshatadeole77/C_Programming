#include<stdio.h>
////////////////////////////////////////////////
//
//Function Name:PrintEven
//Description:  It is used to print first N even numbers
//Input:Integer 
//Output:Prints even numbers on screen
//Author:Akshata Dhananjay Deole
//Date:25/10/2025
//
////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 0;

    if(iNo <= 0)
    {
        printf("Please enter a positive number.\n");
        return;
    }
        printf("First %d even numbers are:\n",iNo);

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            iEven = 2*iCnt;
            printf("%d\n",iEven);
        }
    
    }

int main()
{
    int iValue=0;
   

    printf("Enter number");
    scanf("%d\n",&iValue);

    PrintEven(iValue);

    return 0;
}