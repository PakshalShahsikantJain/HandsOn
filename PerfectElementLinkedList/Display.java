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

        System.out.println("Elements of Linked List are : ");
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

    void DisplayPerfect()
    {
        int i = 0;
        int sum = 0;
        Node Head = this.Head;

        System.out.println("Perfect Elements From Linked List are : ");
        while(Head != null)
        {
            for(i = 1;i <= (Head.data / 2);i++)
            {
                if((Head.data % i) == 0)
                {
                    sum = sum + i;
                }
            }

            if(sum == Head.data)
            {
                System.out.printf("%d\t",Head.data);
            }
            sum = 0;
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
        sobj.InsertFirst(6);
        sobj.InsertLast(41);
        sobj.InsertLast(17);
        sobj.InsertLast(28);
        sobj.InsertLast(33550336);

        sobj.Display();
        iret = sobj.Count();
        System.out.println("Count of Elements From Linked List is : "+iret);

        sobj.DisplayPerfect();
        sobj = null;
    }
}