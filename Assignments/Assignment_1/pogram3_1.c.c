#include<stdio.h>

void Display()
{
    int iNo = 5;

    while (iNo >= 1)
    {
        printf("%d",iNo);
        iNo--;
    }
}

int main()
{
    Display();
    return 0;
}