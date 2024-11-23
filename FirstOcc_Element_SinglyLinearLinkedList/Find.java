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
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class To Allocate Memory and data to nodes of linked List
class Node
{
    //Characteristics of Class
    public int data;
    public Node next;
    
    //Constructor of Class
    public Node(int value)
    {
        //Inserting data and Memory in new Nodes
        data = value;
        next = null;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class To Implement Singly Linear Linked list
class SinglyLL
{
    //Characteristics of Class
    public Node Head;

    //Constructor of Class
    SinglyLL()
    {
        Head = null;
    }

    ///////////////////////////////////////////////////////////////////
    //
    // Function/Behaviour name  : InsertFirst
    // Description       : Used to insert at first position of Linked List
    // Parameters       : Data of node
    // Return Value     : void
    //
    ///////////////////////////////////////////////////////////////////
    void InsertFirst(int No)
    {   
        Node newn = new Node(No);

        //Logic To Insert New Element At First Position of Linked List
        if(Head == null)
        {
            Head = newn;
        }
        else
        {
            newn.next = Head;
            Head = newn;
        }
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Function/Behaviour Name : Display
    //  Description : Used To Display Elements of Linded List
    //  Parameters : First Pointer
    //  Return Value : void
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    void Display()
    {
        Node temp = Head;

        //Logic TO Display Elements of Linked List
        System.out.println("Elements of Linked List Are : ");
        while(temp != null)
        {
            System.out.printf("|%d|->",temp.data);
            temp = temp.next;
        }
        System.out.println("Null");
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //  Function/Behaviour Name : SearchFirstOccc
    //  Description : Used To Find First Occurance of Specific Elements Present in Linded List
    //  Parameters : Element To Find
    //  Return Value : void
    //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    int SearchFirstOcc(int iNo)
    {
        int iPos = 1;
        Node temp = Head;
        
        //Logic To Find First Occurance of Specific Element
        while(temp != null)
        {
            if(temp.data != iNo)
            {
                iPos++;
            }
            else
            {
                break;
            }
            temp = temp.next;
        }

        return iPos;
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
class Find
{
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh...");

        //Creating object of SinglyLL Class        
        SinglyLL sobj = new SinglyLL();

        //Call To Behaviours of Class
        sobj.InsertFirst(70);
        sobj.InsertFirst(30);
        sobj.InsertFirst(50);
        sobj.InsertFirst(40);
        sobj.InsertFirst(30);
        sobj.InsertFirst(20);
        sobj.InsertFirst(10);

        //Call To Behaviours of Class
        sobj.Display();
        iret = sobj.SearchFirstOcc(30);
        
        //Printing Position At Which Element is Founded
        System.out.println("First Occurance of Entered Number is at Position Number : "+iret);

        sobj = null;
    }
}