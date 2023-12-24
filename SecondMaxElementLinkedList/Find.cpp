#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node * next;
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
        void Display(PNODE);
        int Count(PNODE);
        int SecondMax(PNODE);
};

SinglyLL::SinglyLL()
{
    Head = NULL;
}

inline void SinglyLL::InsertFirst(PPNODE Head,int value)
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

inline void SinglyLL::InsertLast(PPNODE Head,int value)
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

inline void SinglyLL::Display(PNODE Head)
{
    while(Head != NULL)
    {
        cout<<"|"<<Head->data<<"|->";
        Head = Head->next;
    }
}

inline int SinglyLL::Count(PNODE Head)
{
    int icnt = 0;
    while(Head != NULL)
    {
        icnt++;
        Head = Head->next;
    }

    return icnt;
}

inline int SinglyLL::SecondMax(PNODE Head)
{
    int tempMax = 0;
    int iSecMax = 0;
    PNODE temp = Head;

    tempMax = temp->data;
    while(temp != NULL)
    {
        if(temp->data > tempMax)
        {
            tempMax = temp->data;
        }

        temp = temp->next;
    }

    iSecMax = Head->data;
    while(Head != NULL)
    {
        if((Head->data > iSecMax)&&(Head->data < tempMax))
        {
            iSecMax = Head->data;
        }
        Head = Head->next;
    }

    return iSecMax;
}
int main()
{
    int iret = 0;
    PNODE First = NULL;

    cout<<"Jay Ganesh...\n";

    SinglyLL *sobj = new SinglyLL();
    sobj->InsertFirst(&First,51);
    sobj->InsertFirst(&First,11);
    sobj->InsertFirst(&First,10);
    sobj->InsertLast(&First,101);
    sobj->InsertLast(&First,150);
    sobj->InsertLast(&First,120);
    
    cout<<"Elements of Linked list are : ";
    sobj->Display(First);

    iret = sobj->Count(First);
    cout<<"\nCount of Elements From Linked List is : "<<iret<<"\n";

    iret = sobj->SecondMax(First);
    cout<<"Second Max Element From Linked List is : "<<iret<<"\n";

    return 0;
}