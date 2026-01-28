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

int LastOccur(PNODE Head, int no)
{
    int iPos = 1;
    int iLast = -1;

    while(Head != NULL)
    {
        if (Head -> data == no)
        {
            iLast = iPos;
        }
        Head = Head -> Next;
        iPos++;
    }
    return iLast;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,50);
    InsertFirst(&first,30);
    InsertFirst(&first,10);

    iRet = LastOccur(first, 30);
    
    if(iRet == -1)
    {
        printf("Elements not found\n");
    }
    else
    {
        printf("Last occurrence position is: %d\n", iRet);
    }
    
    return 0;
}