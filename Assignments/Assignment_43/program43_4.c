#include <stdio.h>
#include <stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

int SecMaximum(PNODE Head)
{
    int Max = Head->Data;
    int SecMax = -1;

    while (Head != NULL)
    {
        if (Head->Data > Max)
        {
            SecMax = Max;
            Max = Head->Data;
        }
        else if ((Head->Data > SecMax) && (Head->Data != Max))
        {
            SecMax = Head->Data;
        }
        Head = Head->Next;
    }
    return SecMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = SecMaximum(First);
    printf("Second maximum element is: %d\n", iRet);

    return 0;
}
