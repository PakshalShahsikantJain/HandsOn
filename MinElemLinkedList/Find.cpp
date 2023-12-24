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
        void Display(PNODE);
        int Count(PNODE);
        int SmallElem(PNODE);
};

SinglyLL :: SinglyLL()
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

inline int SinglyLL::SmallElem(PNODE Head)
{
    int Min = 0;

    Min = Head->data;
    while(Head != NULL)
    {
        if(Head->data < Min)
        {
            Min = Head->data;
        }
        Head = Head->next;
    }

    return Min;
}

int main()
{
    PNODE First = NULL;
    int iret = 0;

    cout<<"Jay Ganesh....\n";

    SinglyLL *sobj = new SinglyLL();
    sobj->InsertFirst(&First,51);
    sobj->InsertFirst(&First,11);
    sobj->InsertFirst(&First,10);
    sobj->InsertLast(&First,2);
    sobj->InsertLast(&First,101);
    sobj->InsertLast(&First,105);

    cout<<"Elements of linked List is : \n";
    sobj->Display(First);

    iret = sobj->Count(First);
    cout<<"\nCount of Elements From Linked List Is : "<<iret<<"\n";

    iret = sobj->SmallElem(First);
    cout<<"Smallest Element From Linked List Is : "<<iret<<"\n";
    
    return 0;
}