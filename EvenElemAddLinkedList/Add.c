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
    printf("Elements of Linked List are : \n");
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

int AdditionEven(PNODE Head)
{
    int isum = 0;
    
    while(Head != NULL)
    {
        if((Head->data % 2) == 0)
        {
            isum = isum + Head->data;
        }
        Head = Head->next;
    }

    return isum;
}

int main()
{
    PNODE First = NULL;
    int iret = 0;

    printf("Jay ganesh...\n");
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    InsertLast(&First,32);
    InsertLast(&First,41);

    Display(First);

    iret = Count(First);
    printf("Count of Elements From Linked List is : %d\n",iret);

    iret = AdditionEven(First);
    printf("Additon of Even Elements From Linked List is : %d\n",iret);

    return 0;
}