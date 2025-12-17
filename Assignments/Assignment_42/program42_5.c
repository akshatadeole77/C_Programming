#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;

    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

int Minimum(PNODE Head)
{
    int iMin = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data < iMin)
        {
            iMin = Head->Data;
        }
        Head = Head->Next;
    }
    return iMin;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    iRet = Minimum(First);
    printf("Minimum  elements is: %d\n", iRet);

    return 0;
}
