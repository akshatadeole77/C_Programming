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

void DisplayLess(PNODE Head, int no)
{
    printf("Elements less than %d are: \t", no);

    while(Head != NULL)
    {
        if (Head -> data < no)
        {
            printf("%d", Head->data);
        }
        Head = Head -> Next;
    }
    printf("\n");
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,50);
    InsertFirst(&first,30);
    InsertFirst(&first,10);

    DisplayLess(first, 50);


    
    return 0;
}