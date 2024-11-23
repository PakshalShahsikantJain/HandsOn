#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
    struct Node * prev; 
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head,int value)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else 
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head,int value)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;
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
        newn->prev = temp;
    }
}

void InsertAtPos(PPNODE Head,int value,int ipos)
{
    int i = 0;
    int isize = 0;
    PNODE temp = *Head;
    PNODE newn = NULL;

    isize = Count(*Head);

    if((ipos < 1)||(ipos > (isize + 1)))
    {
        return;
    }
    else if(ipos == 1)
    {
        InsertFirst(Head,value);
    }
    else if(ipos == (isize + 1))
    {
        InsertLast(Head,value);
    }
    else 
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = value;
        newn->next = NULL;
        newn->prev = NULL;
        
        for(i = 1;i < (ipos - 1);i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;
        temp->next->prev = newn;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{   
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else 
    {
        (*Head) = (*Head)->next;
        free((*Head)->prev);
        (*Head)->prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
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

void DeleteAtPos(PPNODE Head,int ipos)
{
    int i = 0;
    int isize = 0;
    isize = Count(*Head);
    PNODE temp = *Head;
    PNODE temp2 = NULL;

    if((ipos < 1)||(ipos > isize))
    {
        return;
    }
    else if(ipos == 1)
    {
        DeleteFirst(Head);
    }
    else if(ipos == isize)
    {
        DeleteLast(Head);
    }
    else 
    {
        for(i = 1;i < (ipos - 1);i++)
        {
            temp = temp->next;
        }

        temp2 = temp->next;
        temp->next = temp2->next;
        temp2->next->prev = temp;

        free(temp2);
        temp2->prev = NULL;
        temp2->next = NULL;
    }
}

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");
    while(Head != NULL)
    {
        printf("|%d|<=>",Head->data);
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

int main()
{
    PNODE First = NULL;
    int iNo = 0;
    int ielem = 0;
    int ipos = 0;
    int iret = 0;

    printf("Jay Ganesh......\n");

    printf("-----------------Doubly Linear Linked List Demonstration-----------------\n");
    while(1)
    {
        printf("---Select any Operations Options Number To Perform on Linked List.---\n");
        printf("1. Insert Element At First Position.\n");
        printf("2. Insert Element At Last Position.\n");
        printf("3. Insert Element At Given Position.\n");
        printf("4. Display Element of Linked List.\n");
        printf("5. Count No Elements Present in Linkes List.\n");
        printf("6. Delete Element First Element of Linked List.\n");
        printf("7. Delete Element Last Element of Linked List.\n");
        printf("8. Delete Element At Entered Position.\n");
        printf("0. Exit\n");

        printf("Enter Option Number : \n");
        scanf("%d",&iNo);

        switch(iNo)
        {
            case 1 : 
            {
                printf("Enter Value of Element You Want to Insert \n");
                scanf("%d",&ielem);

                InsertFirst(&First,ielem);
                break;
            }
            case 2 : 
            {
                printf("Enter Value of Element You Want to Insert \n");
                scanf("%d",&ielem);

                InsertLast(&First,ielem);
                break;
            }
            case 3 : 
            {
                printf("Enter Value of Element You Want To Insert \n");
                scanf("%d",&ielem);

                printf("Enter Position Number You Want To Insert Element At \n");
                scanf("%d",&ipos);

                InsertAtPos(&First,ielem,ipos);

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
                printf("Count of Elements Present in Linked List is : %d\n",iret);
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
                printf("Enter Position Number You Want To Delete Element From. \n");
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
                printf("Invalid Option Number Entered \n");
                return -1;
            }
        }
    }

    return 0;
}