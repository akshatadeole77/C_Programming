#include <stdio.h>
void pattern(int iNo)
{
    char ch = 'A';

    for(int i = 1; i <= iNo; i++)
    {
        printf("%c\t",ch);
        ch++;
    }

}
int main()
{
    int iValue = 0;

    printf("Enter numbers of elements");
    
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}