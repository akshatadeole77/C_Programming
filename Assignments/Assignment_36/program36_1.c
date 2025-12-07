#include<stdio.h>
#include<stdio.h>

int strlwrx(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;

    }
    return iCnt;
}


int main()
{
    char arr[20];
    

    printf("Enter String:");
    scanf("%[^'/n']s",arr);

    strlwrx(arr);

    printf("Modified string is :%s", arr);

    return 0;

}
