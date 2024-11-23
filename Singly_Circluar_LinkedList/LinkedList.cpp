using namespace std;
#include<iostream>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

class SinglyCL
{
    private :
        PPNODE Head;
        PPNODE Tail;
    public :
        SinglyCL();
        inline void InsertFirst(PPNODE,PPNODE,int);
        inline void InsertLast(PPNODE,PPNODE,int);
        inline void InsertAtPos(PPNODE,PPNODE,int,int);
        inline void Display(PNODE,PNODE);
        inline int Count(PNODE,PNODE);
        inline void DeleteFirst(PPNODE,PPNODE);
        inline void DeleteLast(PPNODE,PPNODE);
        inline void DeleteAtPos(PPNODE,PPNODE,int);
};

SinglyCL::SinglyCL()
{
    Head = NULL;
    Tail = NULL;
}

void SinglyCL::InsertFirst(PPNODE Head,PPNODE Tail,int value)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
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

void SinglyCL::InsertLast(PPNODE Head,PPNODE Tail,int value)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
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

void SinglyCL::InsertAtPos(PPNODE Head,PPNODE Tail,int value,int ipos)
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

void SinglyCL::DeleteFirst(PPNODE Head,PPNODE Tail)
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

void SinglyCL::DeleteLast(PPNODE Head,PPNODE Tail)
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

        free(temp->next);
        *Tail = temp;
        temp->next = *Head;
    }
}

void SinglyCL::DeleteAtPos(PPNODE Head,PPNODE Tail,int ipos)
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

void SinglyCL::Display(PNODE Head,PNODE Tail)
{
    if((Head == NULL)&&(Tail == NULL))
    {
        return;
    }
    else 
    {
        cout<<"Elements of linked List are : \n";
        do 
        {
            cout<<"|"<<Head->data<<"|<->";
            Head = Head->next;
        }while(Head != Tail->next);
        cout<<"\n";
    }
}

int SinglyCL::Count(PNODE Head,PNODE Tail)
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
    int iret = 0;
    int ino = 0;
    int ielem = 0;
    int ipos = 0;
    PNODE First = NULL;
    PNODE Last = NULL;

    cout<<"Jay Ganesh.....\n";

    SinglyCL *sobj = new SinglyCL();

    cout<<"-----SinglyCL Circular Linked List Demonstration------\n";
    while(1)
    {
        cout<<"Select any Operation From Below List of Operations To Perform on Linked List : \n";
        cout<<"1. Insert Element at First Position.\n";
        cout<<"2. Insert Element at Last Position.\n";
        cout<<"3. Insert Element at Given Position.\n";
        cout<<"4. Display Elements of Linked List.\n";
        cout<<"5. Count Elements Present in Linked List.\n";
        cout<<"6. Delete Element From First Position.\n";
        cout<<"7. Delete Element From Last Position.\n";
        cout<<"8. Delete Element From Entered Position.\n";
        cout<<"0. Exit.\n";

        cout<<"Enter Option Number : \n";
        cin>>ino;

        switch(ino) 
        {
            case 1 :
            {
                cout<<"Enter Number to Insert : \n";
                cin>>ielem;

                sobj->InsertFirst(&First,&Last,ielem);

                break;             
            }
            case 2 :
            {
                cout<<"Enter Number to Insert : \n";
                cin>>ielem;

                sobj->InsertLast(&First,&Last,ielem);

                break;             
            }
            case 3 :
            {
                cout<<"Enter Number to Insert : \n";
                cin>>ielem;

                cout<<"Enter Position You Want To Insert Element At : \n";
                cin>>ipos;

                sobj->InsertAtPos(&First,&Last,ielem,ipos);

                break;             
            }
            case 4 :
            {
                sobj->Display(First,Last);
        
                break;             
            }
            case 5 :
            {
                iret = sobj->Count(First,Last);
                cout<<"Count of Number of Elements Present in Linked List is : "<<iret<<"\n";

                break;             
            }
            case 6 :
            {
                sobj->DeleteFirst(&First,&Last);

                break;             
            }
            case 7 :
            {
                sobj->DeleteLast(&First,&Last);

                break;             
            }
            case 8 :
            {
                cout<<"Enter Position Number To Delete Element From : \n";
                cin>>ipos;

                sobj->DeleteAtPos(&First,&Last,ipos);

                break;             
            }
            case 0 :
            {
                return 0;          
            }
            default : 
            {
                cout<<"Invalid Option Number Entered, Please Enter Valid Option Number \n";

                return -1;
            }
        }
    }

    return 0;
}

