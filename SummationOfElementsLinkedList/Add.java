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

        if(temp == null)
        {
            temp = newn;
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
        Node temp = this.Head;

        while(temp != null)
        {
            System.out.printf("|%d|->",temp.data);
            temp = temp.next;
        }
    }

    int Addition()
    {
        int sum = 0;
        Node temp = this.Head;

        while(temp != null)
        {
            sum = sum + temp.data;
            temp = temp.next;
        }

        return sum;
    }

    int Count()
    {
        int icnt = 0;
        Node temp = this.Head;

        while(temp != null)
        {
            icnt++;
            temp = temp.next;
        }

        return icnt;
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
        sobj.InsertLast(201);
        sobj.Display();

        iret = sobj.Count();
        System.out.printf("\nCount of Elements From Linked List is : %d",iret);

        iret = sobj.Addition();
        System.out.printf("\nAddition of Elements From Linked List is : %d",iret);
    }
}