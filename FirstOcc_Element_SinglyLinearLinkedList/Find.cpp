/*
    Author : Pakshal Shashikant Jain 
    Date : 13/10/2023
    Program : Write a program which search first occurrence of particular element from
              singly linear linked list.

              Function should return position at which element is found.
              Function Prototype :int SearchFirstOcc( PNODE Head , int no )

              Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
              Input element : 30
              Output : 3 
*/

//Required Libraries
#include<iostream>
using namespace std;

//Structure Declartion
struct Node
{
    int data;
    struct Node *next;
};

//Giving New Name To Structure
typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

//Class Declaration
class SinglyLL
{
    //Characteristics of Class
    private :
        PPNODE Head;
        int iSize;
    public :
        //Constructor of Class
        SinglyLL();
        //Behaviours of Class
        void InsertFirst(PPNODE,int);
        void Display(PNODE);
        int SearchFirstOcc(PNODE,int); 
        //int Count();
};

SinglyLL::SinglyLL()
{
    Head = NULL;
    //iSize = 0;
}

//inline function To Display Elements of Linked List
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function/Behaviour Name : Display
//  Description : Used To Display Elements of Linded List
//  Parameters : First Pointer
//  Return Value : void
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
inline void SinglyLL::Display(PNODE Head)
{
    while(Head != NULL)
    {
        cout<<"|"<<Head->data<<"|"<<"->";
        Head = Head->next;
    }
    cout<<"NULL\n";
}

///////////////////////////////////////////////////////////////////
//
// Function/Behaviour name  : InsertFirst
// Description       : Used to insert at first position of Linked List
// Parameters       : Addreass of First pointer & data of node
// Return Value     : void
//
///////////////////////////////////////////////////////////////////
void SinglyLL::InsertFirst(PPNODE Head,int value)
{
    PNODE newn = new NODE;

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

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function/Behaviour Name : SearchFirstOccc
//  Description : Used To Find First Occurance of Specific Elements Present in Linded List
//  Parameters : First Pointer & Element To Find
//  Return Value : void
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
int SinglyLL::SearchFirstOcc(PNODE Head,int iNo)
{
    int iPos = 1;
    while(Head != NULL)
    {
        if(Head->data != iNo)
        {
            iPos++;
        }
        else
        {
            break;
        }
        Head = Head->next;
    }

    return iPos;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function 
int main()
{
    PNODE First = NULL;
    int iret = 0;
    int iNo = 0;

    cout<<"Jay Ganesh...\n";
    
    //Creating Object of SinglyLL Class
    SinglyLL *sobj = new SinglyLL();

    //Call To Behaviours of Class
    sobj->InsertFirst(&First,70);
    sobj->InsertFirst(&First,30);
    sobj->InsertFirst(&First,50);
    sobj->InsertFirst(&First,40);
    sobj->InsertFirst(&First,30);
    sobj->InsertFirst(&First,20);
    sobj->InsertFirst(&First,10);
    
    //Printing Elements of Linked List
    cout<<"Elements of Linked List are as Follows \n";
    //Call To Behaviour of Class
    sobj->Display(First);

    //Taking Input from user
    cout<<"Enter One Number You Want To Find First Occurance of : \n";
    cin>>iNo;
    
    //Call To behaviour of Class
    iret = sobj->SearchFirstOcc(First,iNo);
    printf("First Occurance of Eneterd Element %d is at Position %d\n",iNo,iret);

    //Deallocating Memory of Object
    delete sobj;

    return 0;
}