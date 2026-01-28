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


int CountFrequency(PNODE Head, int no)
{
    int iCount = 0;

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
    int iValue = 0;
    int iRet = 0;

    InsertFirst(&first,50);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    printf("Enter element to count frquency: ");
    scanf("%d", &iValue);

    iRet = CountFrequency(first, iValue);
    printf("Frequency of %d is : %d\n",iValue, iRet);
    
    return 0;
}