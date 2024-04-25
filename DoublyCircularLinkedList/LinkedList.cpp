using namespace std;
#include<iostream>

struct Node 
{
    int data;
    struct Node * next;
    struct Node * prev;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

class DoublyCLL 
{
    private :
        PPNODE Head;
        PPNODE Tail;
    public :
        DoublyCLL();
        inline void InsertFirst(PPNODE,PPNODE,int);
        inline void InsertLast(PPNODE,PPNODE,int);
        inline void InsertAtPos(PPNODE,PPNODE,int,int);
        inline void Display(PNODE,PNODE);
        inline int Count(PNODE,PNODE);
        inline void DeleteFirst(PPNODE,PPNODE);
        inline void DeleteLast(PPNODE,PPNODE);
        inline void DeleteAtPos(PPNODE,PPNODE,int);
};

DoublyCLL::DoublyCLL() 
{
    Head = NULL;
    Tail = NULL;
}

void DoublyCLL::InsertFirst(PPNODE Head,PPNODE Tail,int value) 
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
        (*Head)->prev = newn;
        *Head = newn;
    }
    (*Head)->prev = *Tail;
    (*Tail)->next = *Head;
}

void DoublyCLL::InsertLast(PPNODE Head,PPNODE Tail,int value) 
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
        newn->prev = *Tail;
        *Tail = newn;
    }
    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void DoublyCLL::InsertAtPos(PPNODE Head,PPNODE Tail,int value,int ipos)
{
    int i = 0;
    int isize = 0;
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

void DoublyCLL::DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if((*Head == NULL)&&(*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        delete(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else 
    {
        (*Head) = (*Head)->next;
        delete((*Head)->prev);
        (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
    }
}

void DoublyCLL::DeleteLast(PPNODE Head,PPNODE Tail)
{
    if((*Head == NULL)&&(*Tail == NULL))
    {
       return; 
    }
    else if(*Head == *Tail)
    {
        delete(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else 
    {
        (*Tail) = (*Tail)->prev;
        delete((*Tail)->next);
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }
}

void DoublyCLL::DeleteAtPos(PPNODE Head,PPNODE Tail,int ipos)
{
    int iret = 0;
    int isize = 0;
    int i = 0;
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
        temp2->next->prev = temp;
        
        delete(temp2);
    }
}

void DoublyCLL::Display(PNODE Head,PNODE Tail)
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

int DoublyCLL::Count(PNODE Head,PNODE Tail)
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
    int ino = 0;
    int ielem = 0;
    int ipos = 0;
    PNODE First = NULL;
    PNODE Last = NULL;

    cout<<"Jay Ganesh...\n";

    DoublyCLL *dobj = new DoublyCLL();

    cout<<"-----------------------Doubly Linear Linked List-------------------------\n";

    while(1) 
    {
        cout<<"Select Any One Operation From Below List of Operation : \n";
        cout<<"1. Insert Element At First Position \n";
        cout<<"2. Insert Element At Second Position \n";
        cout<<"3. Insert Element At Entered Position \n";
        cout<<"4. Display Elements of Linked List \n";
        cout<<"5. Count Elements of Linked List \n";
        cout<<"6. Delete Element From First Position \n";
        cout<<"7. Delete Element From Last Position \n";
        cout<<"8. Delete Element From Entered Position..\n";
        cout<<"0. Exit\n";

        cout<<"Enter Option Number : ";
        cin>>ino;

        switch(ino)
        {
            case 1 :
            {
                cout<<"Enter One Value to Insert : ";
                cin>>ielem;

                dobj->InsertFirst(&First,&Last,ielem);

                break;
            }
            case 2 :
            {
                cout<<"Enter One Value to Insert : ";
                cin>>ielem;

                dobj->InsertLast(&First,&Last,ielem);

                break;
            }
            case 3 :
            {
                cout<<"Enter One Value To Insert : ";
                cin>>ielem;

                cout<<"Enter Position To Insert Element At : ";
                cin>>ipos;

                dobj->InsertAtPos(&First,&Last,ielem,ipos);

                break;
            }
            case 4 :
            {
                dobj->Display(First,Last);

                break;
            }
            case 5 :
            {
                int iret = 0;

                iret = dobj->Count(First,Last);

                cout<<"Count of Elements Present in Linked List is : "<<iret<<"\n";

                break;
            }
            case 6 :
            {
                dobj->DeleteFirst(&First,&Last);

                break;
            }
            case 7 :
            {
                dobj->DeleteLast(&First,&Last);

                break;
            } 
            case 8 :
            {
                cout<<"Enter Position To Delete Element From : ";
                cin>>ipos;

                dobj->DeleteAtPos(&First,&Last,ipos);
                break;
            }
            case 0 :
            {
                return 0;
            }
            default :
            {
                cout<<"Invalid Option Number Entered \n";

                return -1;
            }
        }
    }

    return 0;
}