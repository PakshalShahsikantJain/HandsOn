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
    PNODE temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;

    if(temp == NULL)
    {
        temp = newn;
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

int Addition(PNODE Head)
{
    int sum = 0;

    while(Head != NULL)
    {
        sum = sum + Head->data;
        Head = Head->next;
    }

    return sum;
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
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

int main()
{
    PNODE First = NULL;
    int iret = 0;

    printf("Jay Ganesh.....\n");
    InsertFirst(&First,51);
    InsertFirst(&First,11);
    InsertFirst(&First,10);
    InsertFirst(&First,5);
    InsertLast(&First,201);
    InsertLast(&First,301);

    Display(First);

    iret = Count(First);
    printf("\nCount of Elements From Linked List is : %d",iret);

    iret = Addition(First);
    printf("\nAddition of Elements From Linked List is : %d",iret);

    return 0;
}