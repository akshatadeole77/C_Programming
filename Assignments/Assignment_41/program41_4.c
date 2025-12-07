#include <stdio.h>

int Fact(int iNo)
{
    int iFact = 1;

    while (iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;
    }
    
    return iFact;

    
}

int main()
{
    int iValue = 0, iRet = 0;
    
    

    printf("Enter a number: ");
    scanf(" %d", &iValue);

    iRet = Fact(iValue);

    printf("%d", iRet);

    return 0;
}