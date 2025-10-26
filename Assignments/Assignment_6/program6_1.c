#include<stdio.h>
///////////////////////////////////////////////////////////////
//
// Function Name : Name
// Description   : Accept name from user and print that name.
// Input         : Character
// Output        : Character 
// Author        : Akshata Dhananjay Deole
// Date          : 26/10/2025
//
///////////////////////////////////////////////////////////////
int main()
{
    char Name[30];
    printf("Please enter a full name");
    scanf("%s",&Name);

    printf("Your name is %s",Name);
    return 0;
}