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
        void DisplayPrime(PNODE);
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

    cout<<"Elements of Linked list are : \n";
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

inline void SinglyLL::DisplayPrime(PNODE Head)
{
    int i = 0;
    int sum = 0;

    cout<<"Prime From Linked list is : \n";
    while(Head != NULL)
    {
        for(i = 1;i <= (Head->data / 2);i++)
        {
            if((Head->data % i) == 0) 
            {
                sum = sum + i;
            }
        }

        if(sum == 1)
        {
            cout<<Head->data<<"\t";
        }
        sum = 0;
        Head = Head->next;
    }
}

int main()
{
    int iret = 0;
    PNODE First = NULL;

    cout<<"Jay Ganesh....\n";

    SinglyLL *sobj = new SinglyLL();

    sobj->InsertFirst(&First,51);
    sobj->InsertFirst(&First,11);
    sobj->InsertFirst(&First,5);
    sobj->InsertLast(&First,999983);
    sobj->InsertLast(&First,41);
    sobj->InsertLast(&First,17);

    sobj->Display(First);
    
    iret = sobj->Count(First);
    cout<<"Count of Elements From Linked list is : "<<iret<<"\n";

    sobj->DisplayPrime(First);

    free(sobj);
    
    return 0;
}