#include<stdio.h>

int FirstChar(char*str, char ch)
{
    int ipos = 0;

    while (*str != '\0')
    {
        if(*str == ch)
        {
           return ipos;
        }
        str++;
        ipos++;
    }
    return -1;      //If not found

 

}


int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;
    

    printf("Enter String:");
    scanf("%s",arr);

    printf("Enter character:");
    scanf(" %c", &cValue);

    iRet= FirstChar(arr,cValue);

    printf("Character location is : %d" ,iRet);

    


   
    return 0;

}
