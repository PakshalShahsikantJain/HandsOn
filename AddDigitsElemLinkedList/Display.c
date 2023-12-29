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

void SumDigit(PNODE Head)
{
    int isum = 0;
    int Digit = 0;
    int No = 0;

    printf("Addition of Digits of All Elements are as Follows : \n");
    while(Head != NULL)
    {
        No = Head->data;
        while(No != 0)
        {
            Digit = No % 10;
            isum = isum + Digit;
            No = No / 10;
        }

        printf("%d\t",isum);
        
        isum = 0;
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    int iret = 0;

    printf("Jay ganesh...\n");
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    InsertLast(&First,320);
    InsertLast(&First,999983);

    Display(First);

    iret = Count(First);
    printf("Count of Elements From Linked List is : %d\n",iret);

    SumDigit(First);

    return 0;
}