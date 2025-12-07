#include<stdio.h>
#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int Cap = 0;
    int Small = 0;

    while(*str != '\0')
    {
        if((*str) >= 'A' && (*str) <= 'Z')
        {
            Cap++;
        }
        else if((*str) >= 'a' && (*str) <= 'z')
        {
            Small++;
        }
        str++;

    }
    return Small - Cap;
}


int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'/n']s",arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;

}
