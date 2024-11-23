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
        void DisplayPerfect(PNODE);
        int Count(PNODE);
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

inline void SinglyLL::DisplayPerfect(PNODE Head)
{
    int i = 0;
    int sum = 0;

    cout<<"Perfect Elements of Linked List are :\n";
    while(Head != NULL)
    {
        for(i = 1;i <= (Head->data / 2);i++)
        {
            if((Head->data % i) == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == Head->data)
        {
            cout<<Head->data<<"\t";
        }
        sum = 0;
        Head = Head->next;
    }
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
    sobj->InsertLast(&First,17);
    sobj->InsertLast(&First,28);
    sobj->InsertLast(&First,6);
    sobj->InsertFirst(&First,33550336);

    cout<<"Elements of Linked List are : \n";
    sobj->Display(First);

    iret = sobj->Count(First);
    cout<<"\nCount of Elements From Linked List is : "<<iret<<"\n";

    sobj->DisplayPerfect(First);

    return 0;
}