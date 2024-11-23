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

int MaxElement(PNODE Head)
{
    int Max = 0;

    Max = Head->data;
    while(Head != NULL)
    {
        if(Head->data > Max)
        {
            Max = Head->data;
        }

        Head = Head->next;
    }

    return Max;
}
int main()
{
    int iret = 0;
    PNODE First = NULL;

    printf("Jay Ganesh...\n");

    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
    InsertLast(&First,5000);
    Display(First);

    iret = Count(First);
    printf("\nCount of Elements From linked list is : %d",iret);

    iret = MaxElement(First);
    printf("\nMax Element From linked list is : %d",iret);

    return 0;
}