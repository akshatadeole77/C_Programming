#include <stdio.h>
void pattern(int iRow, int iCol)
{
   int i = 0, j = 0;
   int iCnt = 1;

   for(i=0;i<iRow;i++)
   {
    for(j=0;j<iCol;j++)
    {
        printf("%d\t",iCnt);
        iCnt++;
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