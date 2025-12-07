#include<stdio.h>

int StrCpyRev(char *src, char *dest)
{  
    char *end = src;

    while(*end != '\0')
    {
        end++;
    }
    end--;

        while(end >= src)
        {
            *dest = *end;
            dest++;
            end--;
        }
        
} 

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter String :");
    scanf("%[^\n]s", arr);

    StrCpyRev(arr,brr);

    printf("%s", brr);

    return 0;
    

}
