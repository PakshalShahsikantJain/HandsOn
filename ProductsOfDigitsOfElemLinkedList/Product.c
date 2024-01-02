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
    PNODE newn  = (PNODE)malloc(sizeof(NODE));
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

void DisplayProduct(PNODE Head)
{
    int imult = 1;
    int Digit = 0;
    int No = 0;

    printf("Products of All Digits of All Elements Are :\t");
    while(Head != NULL)
    {
        No = Head->data;
        while(No != 0)
        {
            Digit = No % 10;
            
            if(Digit == 0)
            {
                Digit = 1;
            }
            imult = imult * Digit;
            
            No = No / 10;
        }

        printf("%d\t",imult);
        imult = 1;

        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    int iret = 0;

    printf("Jay Ganesh....\n");

    InsertFirst(&First,51);
    InsertFirst(&First,11);
    InsertFirst(&First,231);
    InsertLast(&First,101);
    InsertLast(&First,1212);
    InsertLast(&First,112);

    Display(First);

    iret = Count(First);
    printf("Count of Elements From Linked List is : %d \n",iret);

    DisplayProduct(First);

    free(First);
    
    return 0;
}