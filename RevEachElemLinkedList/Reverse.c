#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head,int value)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else 
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head,int value)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else 
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of Linked List are : ");
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("\n");
}

int Count(PNODE Head)
{
    int icnt = 0;

    while(Head != NULL)
    {
        icnt++;
        Head = Head->next;
    }
    return icnt;
}

void Reverse(PNODE Head)
{
    int Digit = 0;
    int irev = 0;
    int iNo = 0;

    printf("Output After Reversing Each Elements of linked List is : ");
    while(Head != NULL)
    {
        iNo = Head->data;

        while(iNo != 0)
        {
            Digit = iNo % 10;
            irev = (irev * 10) + Digit;
            iNo = iNo / 10;
        }

        printf("|%d|->",irev);
        irev = 0;
        Head = Head->next;
    }
}

int main() 
{
    PNODE First = NULL;
    int iret = 0;

    printf("Jay Ganesh...\n");

    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);
    InsertLast(&First,41);
    InsertLast(&First,6);
    InsertLast(&First,89);

    Display(First);

    iret = Count(First);
    printf("Count of Elements From Linked List is : %d\n",iret);

    Reverse(First);
    return 0;
}