#include<stdio.h>
#include<stdlib.h>

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

    newn->data = no;
    newn->Next = *Head;
    *Head = newn;
}

void ReplaceNegative(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->data < 0)
        {
            Head->data = 0;   
        }
        Head = Head->Next;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d ", Head->data);
        Head = Head->Next;
    }
    printf("\n");
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 40);
    InsertFirst(&first, -20);
    InsertFirst(&first, 10);
    InsertFirst(&first, -5);
    InsertFirst(&first, 30);

    ReplaceNegative(first);

    printf("List after replacing negative numbers with zero:\n");
    Display(first);

    return 0;
}
