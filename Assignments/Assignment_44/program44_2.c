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

int CountEven(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        if((Head -> data % 2) == 0)
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
    int iValue = 0;
    int iRet = 0;

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

    iRet = CountEven(first);
    printf("Number of even elements are : %d\n", iRet);
    
    return 0;
}