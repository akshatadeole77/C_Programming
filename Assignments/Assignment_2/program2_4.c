#include<stdio.h>
void Display(int iNo, int iFrequency)

{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number:");
    scanf("%d\n",&iValue);

    printf("Enter frequency:");
    scanf("%d\n",&iCount);

    Display(iValue,iCount);

    return 0;
}