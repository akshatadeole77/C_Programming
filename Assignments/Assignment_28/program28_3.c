#include <stdio.h>
void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';
    

    for(i = 1; i <= iRow; i++)
    {
        char ch = 'A';
        for(j = 1;j <= iCol; j++)
        {
            printf("%c\t",ch);
            ch++;
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