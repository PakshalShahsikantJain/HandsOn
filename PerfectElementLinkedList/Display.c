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

void DisplayPerfect(PNODE Head)
{
    int i = 0;
    int sum = 0;

    printf("\nPerfect Elements Present in Linked List are : ");
    while(Head != NULL)
    {
        for(i = 1;i <= (Head->data / 2);i++)
        {
            if((Head->data % i) == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == Head->data)
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

    printf("Jay Ganesh....\n");

    InsertFirst(&First,51);
    InsertFirst(&First,11);
    InsertFirst(&First,10);
    InsertLast(&First,28);
    InsertLast(&First,17);
    InsertFirst(&First,6);
    InsertLast(&First,33550336);

    printf("Elements of Linked List are : \n");
    Display(First);

    iret = Count(First);
    printf("\nCount of Elements From Linked List is : %d",iret);

    DisplayPerfect(First);

    return 0;
}