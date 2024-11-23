#include<iostream>
using namespace std;

struct Node 
{
    int data;

    struct Node * next;
    struct Node * prev;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

class DoublyLL
{
    private :
        PPNODE Head;

    public :
        DoublyLL();
        inline void InsertFirst(PPNODE,int);
        inline void InsertLast(PPNODE,int);
        inline void InsertAtPos(PPNODE,int,int);
        inline void DeleteFirst(PPNODE);
        inline void DeleteLast(PPNODE);
        inline void DeleteAtPos(PPNODE,int);
        inline void Display(PNODE);
        inline int Count(PNODE);
};

DoublyLL::DoublyLL()
{
    Head = NULL;
}

void DoublyLL::InsertFirst(PPNODE Head,int value)
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

void DoublyLL::InsertLast(PPNODE Head,int value)
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

void DoublyLL::InsertAtPos(PPNODE Head,int value,int ipos)
{
    int i = 0;
    int isize = 0;
    PNODE temp = *Head;
    isize = Count(*Head);
    PNODE newn = NULL;

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
        temp->next = newn;
    }
}

void DoublyLL::DeleteFirst(PPNODE Head)
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

void DoublyLL::DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head == NULL;
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

void DoublyLL::DeleteAtPos(PPNODE Head,int ipos)
{
    int isize = 0;
    int i = 0;
    PNODE temp = *Head;
    PNODE temp2 = NULL;

    isize = Count(*Head);

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
        temp2 = NULL;
    }
}

void DoublyLL::Display(PNODE Head)
{
    cout<<"Elements of Linked List are : \n";
    while(Head != NULL)
    {
        cout<<"|"<<Head->data<<"|<=>";
        Head = Head->next;
    }
    cout<<"\n";
}

int DoublyLL::Count(PNODE Head)
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
    int ino = 0;
    int ipos = 0;
    int iret = 0;
    int ielem = 0;
    PNODE First = NULL;

    cout<<"Jay Ganesh....\n";

    DoublyLL *dobj = new DoublyLL();

    cout<<"-----------------------Doubly Linear Linked List Demonstration----------------\n";
    
    while(1)
    {
        cout<<"--------Select Any option From Below List of Operations--------\n";
        cout<<"1. Insert Element At First Position.\n";
        cout<<"2. Insert Element At Last Position.\n";
        cout<<"3. Insert Element At Entered Position.\n";        
        cout<<"4. Display Element of Linked List.\n";        
        cout<<"5. Count Number of Elements Present in Linked List.\n";        
        cout<<"6. Delete Element From First Position.\n";        
        cout<<"7. Delete Element From Last Position.\n";        
        cout<<"8. Delete Element From Entered Position.\n";
        cout<<"0. Exit.\n";

        cout<<"Enter Operation Option Number You Want To Perform on Linked List.\n";
        cin>>ino;

        switch(ino)
        {
            case 1 :
            {
                cout<<"Enter Element Value You Want To Insert : \n";
                cin>>ielem;

                dobj->InsertFirst(&First,ielem);        

                break;
            }
            case 2 :
            {
                cout<<"Enter Element Value You Want To Insert : \n";
                cin>>ielem;

                dobj->InsertLast(&First,ielem);
                break;
            }
            case 3 :
            {
                cout<<"Enter Position At Which You Want To Insert Element At : \n";
                cin>>ipos;

                cout<<"Enter Element Value To Be Inserted : \n";
                cin>>ielem;

                dobj->InsertAtPos(&First,ielem,ipos);
                break;
            }
            case 4 :
            {
                dobj->Display(First);
                break;
            }
            case 5 :
            {
                iret = dobj->Count(First);
                cout<<"Count of Elements Present in Linked List is : "<<iret<<"\n";

                break;
            }
            case 6 :
            {
                dobj->DeleteFirst(&First);
                break;
            }
            case 7 :
            {
                dobj->DeleteLast(&First);
                break;
            }
            case 8 :
            {
                cout<<"Enter Position You Want To Delete Element From : \n";
                cin>>ipos;

                dobj->DeleteAtPos(&First,ipos);
                break;
            }
            case 0 :
            {
                return 0;
            }
            default :
            {
                cout<<"Invalid Option Number Entered\n";
                return -1;
            }
        }
    }

    return 0;
}