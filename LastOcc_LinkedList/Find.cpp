#include<iostream>
#include<stdlib.h>
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
        int value;
    public :
        SinglyLL();
        void InsertFirst(PPNODE,int);
        void InsertLast(PPNODE,int);
        int Count(PNODE);
        void Display(PNODE);
        int LastOcc(PNODE,int);
};

SinglyLL::SinglyLL()
{
    Head = NULL;
}

inline void SinglyLL::InsertFirst(PPNODE Head,int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
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
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;

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

inline int SinglyLL::LastOcc(PNODE Head,int value)
{
    int i = 0;
    int ipos = 0;

    while(Head != NULL)
    {
        if(Head->data == value)
        {
            ipos = i;
        }
        i++;
        Head = Head->next;
    }

    return ipos;
}

int main()
{
    int iret = 0;
    int iret2 = 0;

    PNODE First = NULL;

    cout<<"Jay Ganesh....\n";
    SinglyLL *sobj = new SinglyLL();

    sobj->InsertFirst(&First,51);
    sobj->InsertFirst(&First,11);
    sobj->InsertFirst(&First,10);
    sobj->InsertLast(&First,101);
    sobj->InsertLast(&First,51);
    sobj->InsertLast(&First,51);

    sobj->Display(First);
    iret = sobj->Count(First);
    iret2 = sobj->LastOcc(First,10);

    cout<<"\nCount of Element From Linked List is : "<<iret;
    cout<<"\nLast Occurace of Entered Number is at index Number : "<<iret2;

    delete sobj;
    
    return 0;
}