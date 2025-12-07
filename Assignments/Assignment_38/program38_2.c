#include<stdio.h>

int StrCpyRev(char *src, char *dest)
{  
    char temp[100];
    int i = 0, j = 0;

    
    while(src[i] != '\0')
    {
        if(src[i] != ' ')
        {
            temp[j] = src[i];
            j++;
        }
        i++;
    }
    temp[j] = '\0'; 

    char *end = temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

        while(end >= temp)
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
