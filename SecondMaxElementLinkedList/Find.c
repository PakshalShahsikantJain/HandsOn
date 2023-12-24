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

int SecondMax(PNODE Head)
{
    int iSecMax = 0;
    int tempMax = 0;
    PNODE temp = Head;

    tempMax = temp->data;
    while(temp != NULL)
    {
        if(temp->data > tempMax)
        {
            tempMax = temp->data;
        }
        temp = temp->next;
    }

    iSecMax = Head->data;
    while(Head != NULL)
    {
        if((Head->data > iSecMax)&&(Head->data < tempMax))
        {
            iSecMax = Head->data;
        }
        Head = Head->next;
    }

    return iSecMax;
}

int main()
{
    PNODE First = NULL;
    int iret = 0;

    printf("Jay Ganesh...\n");

    InsertFirst(&First,51);
    InsertFirst(&First,11);
    InsertFirst(&First,10);
    InsertLast(&First,160);
    InsertLast(&First,150);
    InsertLast(&First,101);
    InsertLast(&First,120);
    
    printf("Elements From Linked list is : \n");
    Display(First);
    
    iret = Count(First);
    printf("\nCount Of Elements From Linked list is : %d\n",iret);

    iret = SecondMax(First);
    printf("Second Max Element From Linked List is : %d\n",iret);

    return 0;
}