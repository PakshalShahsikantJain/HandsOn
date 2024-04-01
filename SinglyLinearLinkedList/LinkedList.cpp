#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

class SinglyLL
{   
    private : 
        PPNODE Head;
    public :
        SinglyLL();
        void InsertFirst(PPNODE,int);
        void InsertLast(PPNODE,int);
        void InsertAtPos(PPNODE,int,int);
        void Display(PNODE);
        int Count(PNODE);
        void DeleteFirst(PPNODE);
        void DeleteLast(PPNODE);
        void DeleteAtPos(PPNODE,int);
};

SinglyLL :: SinglyLL()
{
    Head = NULL;
}

inline void SinglyLL :: InsertFirst(PPNODE Head,int value)
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

inline void SinglyLL :: InsertLast(PPNODE Head,int value)
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

void SinglyLL::Display(PNODE Head)
{
    cout<<"Elements Present In Linked List are : \n";
    while(Head != NULL)
    {
        cout<<"|"<<Head->data<<"|->";
        Head = Head->next;
    }

    cout<<"\n";
}

int SinglyLL::Count(PNODE Head)
{
    int icnt = 0;

    while(Head != NULL)
    {
        icnt++;
        Head = Head->next;
    }

    return icnt;
}

void SinglyLL::InsertAtPos(PPNODE Head,int value,int ipos)
{
    int isize = 0;
    int i = 0;
    PNODE temp = *Head;
    PNODE newn = NULL;

    isize = Count(*Head);

    if((ipos < 1)||(ipos > isize + 1))
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

        for(i = 1;i < ipos - 1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void SinglyLL::DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head != NULL)
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void SinglyLL::DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)   //If Linked List is Empty
    {
        return;
    }
    else if((*Head)->next == NULL)  //If Linked List Contains Only Singly Element
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

void SinglyLL::DeleteAtPos(PPNODE Head,int ipos)
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
        for(i = 1;i < ipos - 1;i++)
        {
            temp = temp->next;
        }

        temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
    }
}

int main()
{
    int iNo = 0;
    int iret = 0;
    int elem = 0;
    int ipos = 0;

    PNODE First = NULL;

    cout<<"Jay Ganesh....\n";

    SinglyLL *sobj = new SinglyLL();
  
    while(1)
    {
        cout<<"-------------------------Singly Linear Linked List Demonstration-----------------------------------\n";
        cout<<"Select Any Operations Option Number You Want To Perform on Linked List \n";
        cout<<"1. Insert Element At First Position\n";
        cout<<"2. Insert Element At Last Position\n";
        cout<<"3. Insert Element At Position Number\n";
        cout<<"4. Display Elements Present In Linked List\n";
        cout<<"5. Count Numbner of Elements Present In Linked List\n";
        cout<<"6. Delete Element At First Position\n";
        cout<<"7. Delete Element At Last Position\n";
        cout<<"8. Delete Element At Position Number\n";
        cout<<"0. Exit\n";

        cout<<"Enter Option Number : \n";
        cin>>iNo;

        switch(iNo)
        {
            case 1 : 
            {
                cout<<"Enter Element Value To Insert : \n";
                cin>>elem;

                sobj->InsertFirst(&First,elem);
                break;
            }
            case 2 : 
            {
                cout<<"Enter Element Value To Insert : \n";
                cin>>elem;

                sobj->InsertLast(&First,elem);
                break;
            }
            case 3 :
            {
                cout<<"Enter Element Value To Insert : \n";
                cin>>elem;

                cout<<"Enter Position You Want To Insert Element At : \n";
                cin>>ipos;

                sobj->InsertAtPos(&First,elem,ipos);

                break;
            }
            case 4 :
            {
                sobj->Display(First);

                break;
            }
            case 5 : 
            {
                iret = sobj->Count(First);
                cout<<"Count of Elements Present In Linked List is : "<<iret<<"\n";

                break;
            }
            case 6 : 
            {
                sobj->DeleteFirst(&First);

                break;
            }
            case 7 :
            {
                sobj->DeleteLast(&First);
                break;
            }
            case 8 :
            {
                cout<<"Enter Position Number You Want To Delete At : \n";
                cin>>ipos;

                sobj->DeleteAtPos(&First,ipos);
                break;
            }
            case 0 :
            {
                return 0;
            }
            default :
            {
                cout<<"Invalid Option Number Enter. Please Enter Valid Option Number \n";
                return -1;
            }
        }
    }
    return 0;
}