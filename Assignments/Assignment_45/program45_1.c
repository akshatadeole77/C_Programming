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

void DisplayOdd(PNODE Head)
{
    printf("Odd elements in the linked list are: ");

    while(Head != NULL)
    {
        if ((Head -> data % 2) != 0)
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
    InsertFirst(&first,15);

    DisplayOdd(first);
    printf("Odd numbers is: %d\n");
    
    return 0;
}