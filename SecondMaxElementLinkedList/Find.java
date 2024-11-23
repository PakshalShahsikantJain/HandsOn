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

    int Count()
    {
        Node temp = this.Head;
        int icnt = 0;

        while(temp != null)
        {
            icnt++;
            temp = temp.next;
        }

        return icnt;
    }

    int SecondMax()
    {
        int tempMax = 0;
        int iSecMax = 0;
        Node Head = this.Head;
        Node temp = this.Head;

        tempMax = temp.data;
        while(temp != null)
        {
            if(temp.data > tempMax)
            {
                tempMax = temp.data;
            }
            temp = temp.next;
        }

        iSecMax = Head.data;
        while(Head != null)
        {
            if((Head.data > iSecMax)&&(Head.data < tempMax))
            {
                iSecMax = Head.data;
            }
            Head = Head.next;
        }

        return iSecMax;
    }
}
class Find
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
        sobj.InsertLast(150);
        sobj.InsertLast(120);

        System.out.print("Elements of linked list is : ");
        sobj.Display();
    
        iret = sobj.Count();
        System.out.println("\nCount of Elements From Linked list is : "+iret);

        iret = sobj.SecondMax();
        System.out.println("Second Max Element From Linked list is : "+iret);

        sobj = null;
    }
}