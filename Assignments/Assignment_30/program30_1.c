#include <stdio.h>
void pattern(int iRow, int iCol)
{
   int i = 0, j = 0;

   for(i=1;i<=iRow;i++)
   {
    for(j=1;j<=iCol;j++)
    {
        if(i == j | i >= j)
        {
            printf("*\t");
        }
        else
        {
             printf("#\t");
        }
       
    }
     printf("\n");
   }
}
int main()
{
    int iValue1 = 0, iValue2;

    printf("Enter numbers of rows :");
    scanf("%d",&iValue1);

    printf("Enter numbers of columns :");
    scanf("%d",&iValue2);

    pattern(iValue1, iValue2);

    return 0;
}