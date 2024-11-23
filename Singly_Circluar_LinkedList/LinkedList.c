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

void InsertFirst(PPNODE Head,PPNODE Tail,int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else 
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = *Head;
}

void InsertLast(PPNODE Head,PPNODE Tail,int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else 
    {
        (*Tail)->next = newn;
        *Tail = newn;
    }
    (*Tail)->next = *Head;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int value,int ipos) 
{
    int isize = 0;
    int i = 0;
    PNODE temp = *Head;
    PNODE newn = NULL;

    isize = Count(*Head,*Tail);

    if((ipos < 1)||(ipos > (isize + 1)))
    {
        return;
    }
    else if(ipos == 1)
    {
        InsertFirst(Head,Tail,value);
    }
    else if(ipos == (isize + 1))
    {
        InsertLast(Head,Tail,value);
    }
    else 
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = value;
        newn->next = NULL;

        for(i = 1;i < (ipos - 1);i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if((*Head == NULL)&&(*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
        return;
    }
    else 
    {
        (*Head) = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
    }
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
    PNODE temp = *Head;
    if((*Head == NULL)&&(*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
        return;
    }
    else 
    {
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }

        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;
    }
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int ipos)
{
    int isize = 0;
    int i = 0;
    PNODE temp = *Head;
    PNODE temp2 = NULL;

    isize = Count(*Head,*Tail);
    
    if((ipos < 1)&&(ipos > isize))
    {
        return;
    }
    else if(ipos == 1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(ipos == isize)
    {
        DeleteLast(Head,Tail);
    }
    else 
    {
        for(i = 1;i < (ipos - 1);i++)
        {
            temp = temp->next;
        }

        temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);

        temp2 = NULL;
    }
}

void Display(PNODE Head,PNODE Tail)
{
    if((Head == NULL)&&(Tail == NULL))
    {
        return;
    }
    else 
    {
        printf("Elements of Linked List are : \n");
        do
        {
            printf("|%d|<->",Head->data);
            Head = Head->next;
        }while(Head != Tail->next);
        printf("\n");
    }
}

int Count(PNODE Head,PNODE Tail)
{
    int icnt = 0;

    if((Head == NULL)&&(Tail == NULL))
    {
        return 0;
    }
    else 
    {
        do
        {
            icnt++;
            Head = Head->next;
        }while(Head != Tail->next);
        
        return icnt;
    }
}

int main()
{
    int ino = 0;
    int iret = 0;
    int ipos = 0;
    int ielem = 0;

    PNODE First = NULL;
    PNODE Last = NULL;

    printf("Jay Ganesh....\n");
    
    printf("------------Singly Circular Linear Linked List Demonstration----------------\n");

    while(1)
    {
        printf("Select Any Operation From Below List of Operations To Perform on Linked List : \n");
        printf("1. Insert Element At First Position.\n");
        printf("2. Insert Element At Last Position.\n");
        printf("3. Insert Element At Given Position.\n");
        printf("4. Display Elements of Linked List.\n");
        printf("5. Count No of Elements Present in Linked List.\n");
        printf("6. Delete Element From First Position.\n");
        printf("7. Delete Element From Last Position.\n");
        printf("8. Delete Element From Given Position.\n");
        printf("0. Exit.\n"); 

        printf("Enter Desired Option Number : \n");
        scanf("%d",&ino);

        switch(ino)
        {
            case 1 :
            {
                printf("Enter One Number To Insert : \n");
                scanf("%d",&ielem);

                InsertFirst(&First,&Last,ielem);

                break;
            }
            case 2 :
            {
                printf("Enter One Number To Insert : \n");
                scanf("%d",&ielem);

                InsertLast(&First,&Last,ielem);

                break;
            }
            case 3 :
            {
                printf("Enter One Number To Insert : \n");
                scanf("%d",&ielem);

                printf("Enter Position Number To Insert Element At : \n");
                scanf("%d",&ipos);

                InsertAtPos(&First,&Last,ielem,ipos);

                break;
            }
            case 4 :
            {
                Display(First,Last);
                break;
            }
            case 5 :
            {
                iret = Count(First,Last);

                printf("Count of Elements Present in Linked List is : %d\n",iret);
                break;
            }
            case 6 :
            {
                DeleteFirst(&First,&Last);

                break;
            }
            case 7 :
            {
                DeleteLast(&First,&Last);

                break;
            }
            case 8 :
            {
                printf("Enter Position Number To Delete Element From : \n");
                scanf("%d",&ipos);

                DeleteAtPos(&First,&Last,ipos);

                break;
            }
            case 0 :
            {
                return 0;
            }
            default :
            {
                printf("Invalid Option Number Entered, Please Enter Valid Option Number\n");
                return -1;
            }
        }       
    }

    return 0;
}

