#include<stdio.h>

int StrRevX(char*str)
{
    char *start = str;
    char *end = str;
    char temp;
    

    while (*end != '\0')
    {
              end++;
    }
    end--; 

        while (start < end)
        {
           temp = *start;
           *start = *end;
           *end = temp;

           start++;
           end--;
        }
        
    }


int main()
{
    char arr[20];
    

    printf("Enter String:");
    scanf("%s",arr);

    StrRevX(arr);


    printf("Modified string is : %s" , arr);

    return 0;

}
