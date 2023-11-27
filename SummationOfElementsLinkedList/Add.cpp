#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node * next;
};

typedef Node NODE;
typedef Node * PNODE;
typedef Node ** PPNODE;

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
        int Sum(PNODE);
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

inline int SinglyLL::Sum(PNODE Head)
{
    int sum = 0;

    while(Head != NULL)
    {
        sum = sum + Head->data;
        Head = Head->next;    
    }

    return sum;
}
int main()
{
    PNODE First = NULL;
    int iret = 0;

    cout<<"Jay Ganesh...\n";

    SinglyLL *sobj = new SinglyLL();
    sobj->InsertFirst(&First,51);
    sobj->InsertFirst(&First,11);
    sobj->InsertFirst(&First,10);
    sobj->InsertLast(&First,101);
    sobj->InsertLast(&First,201);
    sobj->Display(First);

    iret = sobj->Count(First);
    printf("\nCount of Elements From Linked list is : %d",iret);

    iret = sobj->Sum(First);
    printf("\n Summation of Elements From Linked List is : %d",iret);
    
    return 0;
}