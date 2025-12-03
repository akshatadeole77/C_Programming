#include<stdio.h>
#include<stdio.h>

void Display(char ch)
{
    
  
  
        if(ch >= 'a' && ch <= 'z')
        {
           printf("Capital letter is : %c\n", ch - 32);
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            printf("Small letter is : %c\n",ch+ 32);
        }
        else
        {
            printf("\n");
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
