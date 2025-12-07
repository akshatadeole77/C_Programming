#include <stdio.h>

int Strlen(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
        
    }
    return iCount;
    
}

int main()
{
    int iRet = 0;
    char arr[20];
    

    printf("Enter a String: ");
    scanf(" %s", arr);

    iRet = Strlen(arr);

    printf("%d", iRet);

    return 0;
}