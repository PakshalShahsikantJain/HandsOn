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
        int MaxElement(PNODE);
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
    PNODE temp = *Head;
    newn->data = value;
    newn->next = NULL;

    if(temp == NULL)
    {
        temp = newn;
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
        printf("|%d|->",Head->data);
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

inline int SinglyLL::MaxElement(PNODE Head)
{
    int iMax = Head->data;
    while(Head != NULL)
    {
        if(Head->data > iMax)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }

    return iMax;
}

int main()
{
    int iret = 0;

    PNODE First = NULL;

    cout<<"Jay Ganesh....\n";
    SinglyLL *sobj = new SinglyLL();
    sobj->InsertFirst(&First,51);
    sobj->InsertFirst(&First,11);
    sobj->InsertFirst(&First,10);
    sobj->InsertLast(&First,105);
    sobj->InsertLast(&First,50);

    sobj->Display(First);
    iret = sobj->Count(First);   
    cout<<"\nCount of Elements From Linked List is : "<<iret;

    iret = sobj->MaxElement(First);   
    cout<<"\nMax of Element From Linked List is : "<<iret;
    
    return 0;
}