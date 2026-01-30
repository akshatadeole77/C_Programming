// I want counts digit 

#include<stdio.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        
        iDigit = iNo % 10;
        iNo = iNo/10;
        iCount++;
    
    }

    return iCount;
}

int main()
{
    int iValue = 0,iRet = 0;
    

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = CountDigit(iValue);

    printf("Numbers of digits are: %d\n", iRet);
    


    return 0;
}