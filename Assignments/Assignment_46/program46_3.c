#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
 
bool IsEmpty(PNODE Head)
{
    if(Head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    PNODE first = NULL;

    if(IsEmpty(first))
    {
        printf("Linked List is empty");
    }
    else
    {
        printf("Linked list is not empty\n");
    }

 


    
    return 0;
}