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
 
void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data= no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }

}

void DisplayEven(PNODE Head)
{
    printf("Even elements in the linked list are: ");

    while(Head != NULL)
    {
        if ((Head -> data % 2) == 0)
        {
            printf("%d ", Head -> data);
        }
        Head = Head -> Next;
    }
    printf("\n");
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,50);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    DisplayEven(first);
    printf("Even numbers is: %d\n");
    
    return 0;
}