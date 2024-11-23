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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Defining Structure
struct Node
{
    int data;
    struct Node *next;
};//End of Structure

//Giving New Name to Structure

/*----------------------------------------------------------
            Old Name                    New Name
 ----------------------------------------------------------
            struct Node                     NODE
            struct Node *                  PNODE
            struct Node **                PPNODE
 ----------------------------------------------------------*/

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

///////////////////////////////////////////////////////////////////
//
// Function name  : InsertFirst
// Description       : Used to insert at first position of Linked List
// Parameters       : Addreass of First pointer & data of node
// Return Value     : void
//
///////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
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
//  Function Name : Display
//  Description : Used To Display Elements of Linded List
//  Parameters : First Pointer
//  Return Value : void
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(PNODE Head)
{
    printf("Elements of Linked List Are : \n");
    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SearchFirstOccc
//  Description : Used To Find First Occurance of Specific Elements Present in Linded List
//  Parameters : First Pointer & Element To Find
//  Return Value : void
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
int SearchFirstOcc(PNODE Head,int No)
{
    int ipos = 1;

    //Logic To Find
    while(Head != NULL)
    {
        if(Head->data != No)
        {
            ipos++;
        }
        else
        {
            break;
        }
        Head = Head->next;
    }

    return ipos;
}

//Main Function
int main()
{
    PNODE First = NULL;
    int iret = 0;
    int iNo = 0;

    printf("Jay Ganesh.....\n");

    //Inserting Values in Linked List
    //Call To InsertFirst Function
    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    //Call To Dispaly Function
    Display(First);

    //Taking Input from user
    printf("Enter Number You Want To Find First Occurance of : \n");
    scanf("%d",&iNo);

    //Call to SearchFirstOcc Function
    iret = SearchFirstOcc(First,iNo);

    //Printing First Occurance (Position) of Entered Number
    printf("First Occurance of Entered Number %d is At Position %d",iNo,iret);

    return 0;
}