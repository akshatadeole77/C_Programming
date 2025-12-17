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

int SumDigits(int no)
{
    int sum = 0;
    while (no != 0)
    {
        sum = sum + (no % 10);
        no = no / 10;
    }
    return sum;
}

void SumDigit(PNODE Head)
{
    printf("Addition of digits of each element:\n");

    while (Head != NULL)
    {
        printf("%d ", SumDigits(Head->Data));
        Head = Head->Next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    SumDigit(First);

    return 0;
}
