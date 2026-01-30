//Accpet number form user and sumnation of all digits

#include<stdio.h>

int SumDigit(int iNo)
{
    int iSum = 0, iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        iSum = iSum + iDigit;
    
    }

    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;
    

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = SumDigit(iValue);

    printf("sum of digits: %d\n", iRet);
    


    return 0;
}