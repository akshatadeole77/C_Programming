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
bool search(PNODE Head,int no)
{
    while(Head != NULL)
    {
        if(Head->data == no)
        {
            return true;
        }
        Head = Head -> Next;

    }

    return false;
}

int main()
{
    PNODE first = NULL;
    int iValue = 0;

    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    printf("Enter element to search: ");
    scanf("%d", &iValue);

    if(search(first,iValue))
    {
        printf("Element %d is found in linked list\n",iValue);
    }
    else
    {
        printf("Element %d is not found in linked list\n", iValue);
    }
    return 0;
}