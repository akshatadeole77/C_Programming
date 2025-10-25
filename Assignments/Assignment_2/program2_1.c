#include<stdio.h>
void Display(int iNo)

{
    
    int iCnt = 0;

    while(iCnt < 0)
    {
        printf("*");
        scanf("%d\n",&iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;
}