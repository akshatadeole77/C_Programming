#include<stdio.h>
#include<stdio.h>

int struprx(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
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

    struprx(arr);

    printf("Modified string is :%s", arr);

    return 0;

}
