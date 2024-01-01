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
        int icnt = 0;
        Node Head = this.Head;

        while(Head != null)
        {
            icnt++;
            Head = Head.next;
        }
        return icnt;
    }

    void DisplayPallindrome()
    {
        Node Head = this.Head;
        int irev = 0;
        int Digit = 0;
        int No = 0;

        System.out.print("Pallindrome Elements of linked list are : ");
        while(Head != null)
        {
            No = Head.data;
            while(No != 0)
            {
                Digit = No % 10;
                irev = (irev * 10) + Digit;
                No = No / 10;
            }

            if(irev == Head.data)
            {
                System.out.printf("%d\t",Head.data);
            }
            irev = 0;
            Head = Head.next;
        }
    }
}

class Display
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
        sobj.InsertLast(121);
        sobj.InsertLast(999983);

        sobj.Display();
        
        iret = sobj.Count();
        System.out.println("Count of Elements From Linked List is : "+iret);

        sobj.DisplayPallindrome();

        sobj = null;
    }
}