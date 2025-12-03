#include<stdio.h>
#include<stdio.h>

void Display(char ch)
{
    char i = '\0';
    
    if(ch >= 'A' && ch <= 'Z')
    {
        for (i = ch; i <= 'Z'; i++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
    else if (ch >= 'a' && ch <='z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c", i);
        }
        printf("\n");
    }
    else
    {
        return;
    }
   
}
    



int main()
{
    char cValue = '\0';
    
    printf("Enter Character : \n");
    scanf("%c", &cValue);

    Display(cValue);
   
    return 0;
}
