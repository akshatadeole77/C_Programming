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

void Increment(PNODE Head)
{
    while(Head != NULL)
    {
        Head->data = Head->data + 1;   // increment
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
    InsertFirst(&first, 20);
    InsertFirst(&first, 10);

    Increment(first);

    printf("Linked list after incrementing each node by 1:\n");
    Display(first);

    return 0;
}
