import java.lang.*;
import java.util.*;

class Node 
{
    int data;
    Node next;

    Node()
    {
        this.data = 0;
        this.next = null;
    }
}

class SinglyLL
{
    Node Head;

    SinglyLL()
    {
        this.Head = null;
    }

    void InsertFirst(int value)
    {
        Node newn = new Node();
        newn.data = value;
        newn.next = null;

        if(this.Head == null)
        {
            this.Head = newn;
        }
        else 
        {
            newn.next = this.Head;
            this.Head = newn;
        }
    }

    void InsertLast(int value)
    {
        Node newn = new Node();
        newn.data = value;
        newn.next = null;
        Node temp = this.Head;

        if(this.Head == null)
        {
            this.Head = newn;
        }
        else 
        {
            while(temp.next != null)
            {
                temp = temp.next;
            } 
            temp.next = newn;
        }
    }

    void Display()
    {
        Node Head = this.Head;

        System.out.print("Elements of linked list are : ");
        while(Head != null)
        {
            System.out.printf("|%d|->",Head.data);
            Head = Head.next;
        }
        System.out.println();
    }

    int Count()
    {
        Node Head = this.Head;
        int icnt = 0;

        while(Head != null)
        {
            icnt++;
            Head = Head.next;
        }
        return icnt;
    }

    int AdditionEven()
    {
        Node Head = this.Head;
        int isum = 0;

        while(Head != null)
        {
            if((Head.data % 2) == 0)
            {
                isum = isum + Head.data;
            }
            Head = Head.next;
        }

        return isum;
    }
}

class Add
{
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        SinglyLL sobj = new SinglyLL();
        sobj.InsertFirst(51);
        sobj.InsertFirst(11);
        sobj.InsertFirst(10);
        sobj.InsertLast(101);
        sobj.InsertLast(120);
        sobj.InsertLast(1002);

        sobj.Display();

        iret = sobj.Count();
        System.out.println("Count of Elements From Linked list is : "+iret);

        iret = sobj.AdditionEven();
        System.out.println("Addition of Even Elements From Linked list is : "+iret);

        sobj = null;
    }
}