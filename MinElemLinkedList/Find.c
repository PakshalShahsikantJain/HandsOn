#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
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

int SmallElem(PNODE Head)
{
    int Min = 0;

    Min = Head->data;
    while(Head != NULL)
    {
        if(Head->data < Min)
        {
            Min = Head->data;
        }
        Head = Head->next;
    }

    return Min;
}

int main()
{
    PNODE First = NULL;
    int iret = 0;

    printf("Jay Ganesh....\n");

    InsertFirst(&First,51);
    InsertFirst(&First,11);
    InsertFirst(&First,10);
    InsertLast(&First,2);
    InsertLast(&First,101);
    InsertLast(&First,120);

    printf("Elements Of Linked List are : \n");
    Display(First);

    iret = Count(First);
    printf("\nCount of Linked List is : %d\n",iret);

    iret = SmallElem(First);
    printf("Smallest Element From Linked List is : %d\n",iret);

    return 0;
}