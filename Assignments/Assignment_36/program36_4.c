#include<stdio.h>
#include<stdio.h>

void Displaydigits(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= '1' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
    
}


int main()
{
    char arr[20];
    

    printf("Enter String:");
    scanf("%[^'/n']s",arr);

    Displaydigits(arr);

    

    return 0;

}
