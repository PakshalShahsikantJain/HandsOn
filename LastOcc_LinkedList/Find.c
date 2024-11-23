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
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
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
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;

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

int LastOcc(PNODE Head,int no)
{
    int icnt = 0;
    int index = 0;
    int i = 1;

    while(Head != NULL)
    {
        if(Head->data == no)
        {
            index = i; 
        }
        i++;
        Head = Head->next;
    }

    return index;
}
int main()
{
    PNODE First = NULL;
    int iret = 0;
    int pos = 0;

    printf("Jay Ganesh...\n");

    InsertFirst(&First,51);
    InsertFirst(&First,11);
    InsertFirst(&First,10);

    InsertLast(&First,101);
    InsertLast(&First,11);
    InsertLast(&First,201);

    printf("Elements of Linked List are As Follows\n");
    Display(First);
    iret = Count(First);
    printf("\nNumber of Elements of Linked List are : %d\n",iret);

    pos = LastOcc(First,11);
    printf("LastOcc Of Enetered Element is At Index Number %d",pos);

    return 0;
}