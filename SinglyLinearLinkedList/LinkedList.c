#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head, int value)
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

void InsertAtPos(PPNODE Head,int value,int pos)
{
    int size = 0;
    int i = 0;
    PNODE temp = *Head;
    PNODE newn = NULL;

    size = Count(*Head);

    if((pos < 1)||(pos > (size + 1)))
    {
        return;
    }
    else if(pos == 1)
    {
        InsertFirst(Head,value);
    }
    else if(pos == size + 1)
    {
        InsertLast(Head,value);
    }
    else 
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = value;

        for(i = 1;i < pos - 1;i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}
void Display(PNODE Head)
{
    printf("Elements Present in Linked List are : ");
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("\n");
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head != NULL)
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)   //If Linked List is Empty
    {
        return;
    }
    else if((*Head)->next == NULL) //If Linked List Contains At Least One Node
    {
        free(*Head);
        *Head = NULL;
    }
    else 
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void DeleteAtPos(PPNODE Head,int pos)
{
    int size = 0;
    int i = 0;
    PNODE temp,temp2;

    size = Count(*Head);

    if((pos < 1)||(pos > size))
    {
        return;
    }
    else if(pos == 1)
    {
        DeleteFirst(Head);
    }
    else if(pos == size)
    {
        DeleteLast(Head);
    }
    else 
    {
        temp = *Head;

        for(i = 1;i < pos - 1;i++)
        {
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
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

int main()
{
    PNODE First = NULL;
    int no = 0;
    int iret  = 0;
    int elem = 0;

    printf("Jay Ganesh...\n");
    

    while(1)
    {
        printf("------------------------------------------Singly Linear Linked List Implementation-----------------------------------------\n");
        printf("Please Select Any Option Number To Perform Desired Operation of Sinlgy Liear Linked List : \n");
        printf("1. Insert Element At First Position\n");
        printf("2. Insert Element At Last Position\n");
        printf("3. Insert Element At Desired Positions\n");
        printf("4. Display Elements of Linked List\n");
        printf("5. Get Count of Elements Present in Linked List\n");
        printf("6. Delete Element At First Position\n");
        printf("7. Delete Element At Last Position\n");
        printf("8. Delete Elemenet At Given Position\n");
        printf("0. Exit\n");

        printf("Enter Option Number : \n");
        scanf("%d",&no);

        switch(no)
        {
            case 1 :
            {
                printf("Enter Element value To Insert At First Position\n");
                scanf("%d",&elem);

                InsertFirst(&First,elem);
                break;
            }
            case 2 : 
            {
                printf("Enter Element Value To Insert At Last Position\n");
                scanf("%d",&elem);

                InsertLast(&First,elem);
                break;
            }
            case 3 : 
            {
                int ipos = 0;

                printf("Enter Element Value To Insert : \n");
                scanf("%d",&elem);
                
                printf("Enter Desired Position Number You Want to Insert Element At : \n");
                scanf("%d",&ipos);

                InsertAtPos(&First,elem,ipos);
                break;
            }
            case 4 :
            {
                Display(First);
                break;
            }
            case 5 :
            {
                iret = Count(First);
                printf("Count of Elements Present in Linked List is : %d",iret);
                printf("\n");
                break;
            }
            case 6 :
            {
                DeleteFirst(&First);
                break;
            }
            case 7 :
            {
                DeleteLast(&First);
                break;
            }
            
            case 8 : 
            {
                int ipos = 0;

                printf("Enter Desired Position Number You Want to Delete Element At : \n");
                scanf("%d",&ipos);

                DeleteAtPos(&First,ipos);
                
                break;
            }
            case 0 :
            {
                return 0;
                break;
            }
            default :
            {
                printf("Invalid Option Selectd Please Select Valid Option\n");
                return -1;
            }
        }
    }

    return 0;
}