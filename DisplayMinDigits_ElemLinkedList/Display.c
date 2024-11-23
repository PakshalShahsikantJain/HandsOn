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

void DisplaySmall(PNODE Head)
{
    int Digit = 0;
    int iNo = 0 ;
    int iMin = 0;

    printf("Smallest Digits of All Elements of Linked List are : \n");
    while(Head != NULL)
    {
        iNo = Head->data;

        iMin = iNo % 10;
        while(iNo != 0) 
        {
            Digit = iNo % 10;
            if(Digit < iMin)
            {
                iMin = Digit;
            }
            iNo = iNo / 10;
        }

        printf("%d\t",iMin);
        iMin = 0;
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    int iret = 0;

    printf("Jay Ganesh...\n");

    InsertFirst(&First,51);
    InsertFirst(&First,11);
    InsertFirst(&First,10);
    InsertLast(&First,250);
    InsertLast(&First,532);
    InsertLast(&First,415);

    Display(First);

    iret = Count(First);
    printf("Count of Elements From Linked List is : %d\n",iret);

    DisplaySmall(First);

    return 0;
}