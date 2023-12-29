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

void DisplayPrime(PNODE Head)
{
    int i = 0;
    int sum = 0;

    printf("Prime Numbers Present in linked List are : ");
    while(Head != NULL)
    {
        for(i = 1;i <= (Head->data / 2);i++)
        {
            if((Head->data % i) == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == 1)
        {
            printf("%d\t",Head->data);
        }
        sum = 0;
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    int iret = 0;

    printf("Jay Ganesh...\n");

    InsertFirst(&First,11);
    InsertFirst(&First,2);
    InsertFirst(&First,22);
    InsertLast(&First,41);
    InsertLast(&First,17);
    InsertLast(&First,89);
    InsertLast(&First,999983);

    Display(First);
    
    iret = Count(First);
    printf("Count of Elements From Linked List is : %d\n",iret);

    DisplayPrime(First);

    return 0;
}