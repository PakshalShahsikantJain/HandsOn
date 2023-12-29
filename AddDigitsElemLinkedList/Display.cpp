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
        void SumDigit(PNODE);
};

SinglyLL::SinglyLL()
{
    Head = NULL;
}

inline void SinglyLL::InsertFirst(PPNODE Head,int value)
{
    PNODE newn = new(NODE);
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
    PNODE newn = new(NODE);
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
    cout<<"Elements of linked List are : ";
    while(Head != NULL)
    {
        cout<<"|"<<Head->data<<"|->";
        Head = Head->next;
    }
    cout<<"\n";
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

inline void SinglyLL::SumDigit(PNODE Head)
{
    int Digit = 0;
    int isum = 0;
    int No = 0;

    cout<<"Addition of Digits of All Elements is as Follows : \n";
    while(Head != NULL)
    {
        No = Head->data;
        while(No != 0)
        {
            Digit = No % 10;
            isum = isum + Digit;
            No = No / 10;
        }

        printf("%d\t",isum);
        
        isum = 0;
        Head = Head->next;
    }
}

int main()
{
    int iret = 0;
    PNODE First = NULL;

    cout<<"Jay Ganesh...\n";
    SinglyLL *sobj = new SinglyLL();   
    sobj->InsertFirst(&First,20);
    sobj->InsertFirst(&First,11);
    sobj->InsertFirst(&First,10);
    sobj->InsertLast(&First,13);
    sobj->InsertLast(&First,100);

    sobj->Display(First);

    iret = sobj->Count(First);
    cout<<"Count of Elements From linked list is : "<<iret<<"\n";

    sobj->SumDigit(First);

    free(sobj);
    
    return 0;
}