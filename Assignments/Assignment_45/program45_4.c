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

int CountGreater(PNODE Head, int no)
{
    int iCount = 1;

    while(Head != NULL)
    {
        if (Head -> data == no)
        {
            iCount++;
        }
        Head = Head -> Next;
    }
    return iCount;
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

    iRet = CountGreater(first, 30);
    
    printf("Count of numbers greater than 30 is : %d\n", iRet);

    
    return 0;
}