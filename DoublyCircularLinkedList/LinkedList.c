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

void InsertFirst(PPNODE Head,PPNODE Tail,int value)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;    //new
        *Head = newn;            //new 
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;      //new
}

void InsertLast(PPNODE Head,PPNODE Tail,int value)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL)&&(*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else 
    {
        (*Tail)->next = newn;
        newn->prev = *Tail;    //new
        *Tail = newn;
    }
    (*Head)->prev = *Tail;    //new
    (*Tail)->next = *Head;
}

void InsertAtPos(PPNODE Head,PPNODE Tail,int value,int ipos)
{
    int i = 0;
    PNODE temp = *Head;
    int isize = 0;
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
        PNODE newn = (PNODE)malloc(sizeof(NODE));
        newn->data = value;
        newn->next = NULL;
        newn->prev = NULL;

        for(i = 1;i < (ipos - 1);i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
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
    }
    else 
    {
        (*Head) = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }
}

void DeleteLast(PPNODE Head,PPNODE Tail)
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
    }
    else 
    {
        *Tail = (*Tail)->prev;
        free((*Head)->prev);
        (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
    }
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int ipos)
{
    int i = 0;
    int isize = 0;
    PNODE temp = *Head;
    PNODE temp2 = NULL;

    isize = Count(*Head,*Tail);
    
    if((ipos < 1)||(ipos > isize))
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
        for(i = 1;i < (ipos) - 1;i++)
        {
            temp = temp->next;
        }

        temp2 = temp->next;
        temp->next = temp2->next;
        temp2->next->prev = temp;

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
            printf("|%d|<=>",Head->data);
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
    }

    return icnt;
}

int main()
{
    int iret = 0;
    int ielem = 0;
    int ino = 0;
    int ipos = 0;

    PNODE First = NULL; 
    PNODE Last = NULL;

    printf("Jay Ganesh....\n");

    printf("-------------------------Doubly Circular Linked List Demonstration---------------------------------\n");
    
    while(1)
    {
        printf("------Select Any Operation From Below List of Operation to Perform on Linked List--------\n");
        printf("1. Insert Element At First Position.\n");
        printf("2. Insert Element At Last Position.\n");        
        printf("3. Insert Element At Entered Position.\n");
        printf("4. Display Elements of Linked List.\n");
        printf("5. Count No Elements Present in Linked List.\n");
        printf("6. Delete Element From First Position.\n");
        printf("7. Delete Element From Last Position.\n");
        printf("8. Delete Element From Entered Position.\n");
        printf("0. Exit\n");

        printf("Enter Your Choice : \n");
        scanf("%d",&ino);

        switch(ino)
        {
            case 1 :
            {
                printf("Enter Element Value : ");
                scanf("%d",&ielem);

                InsertFirst(&First,&Last,ielem);
                break;
            }
            case 2 : 
            {
                printf("Enter Element Value : ");
                scanf("%d",&ielem);

                InsertLast(&First,&Last,ielem);
                break;
            }
            case 3 :
            {
                printf("Enter Element Value : ");
                scanf("%d",&ielem);

                printf("Enter Position You Want To Insert Element At : ");
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

                printf("Count of Elements Present in Linked List is : %d \n",iret);

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
                printf("Enter Position You Want To Insert Element At : ");
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
                printf("Invalid Option Number Entered \n");

                return -1;
            }
        }
    }

    return 0;
}