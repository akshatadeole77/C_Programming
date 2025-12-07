#include<stdio.h>

int StrCpyCap(char *src, char *dest)
{  

    while(*src != '\0')
    {
       if(*src >= 'a' && *src <= 'z')
       {
            *dest = *src - 32;
       }
       else
        {
            *dest = *src;
        }

        src++;
        dest++;
    }
        
} 

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter String :");
    scanf("%[^\n]s", arr);

    StrCpyCap(arr,brr);

    printf("%s", brr);

    return 0;
    

}
