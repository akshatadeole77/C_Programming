#include <stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    for(iCnt = ch; iCnt >= 'a'; iCnt++)
    {
        printf(" %c\t", iCnt);
        
    }


    
}

int main()
{
    
    char ich = ' ';

    printf("Enter a character:");
    scanf(" %c", &ich);

    Display(ich);



    
    return 0;
}