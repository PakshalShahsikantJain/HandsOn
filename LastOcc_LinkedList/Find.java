import java.lang.*;
import java.util.*;

class Node
{
    public int data;
    public Node next;

    Node()
    {
        data = 0;
        next = null;
    }
}

class SinglyLL
{
    public Node Head;

    SinglyLL()
    {
        Head = null;
    }

    void InsertFirst(int No)
    {
        Node newn = new Node();
        newn.data = No;
        newn.next = null;

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

    void InsertLast(int value)
    {
        Node newn = new Node();
        Node temp = Head;
        newn.data = value;
        newn.next = null;

        if(Head == null)
        {
            Head = newn;
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
        Node temp = Head;

        while(temp != null)
        {
            System.out.printf("|%d|->",temp.data);
            temp = temp.next;
        }
    }

    int Count()
    {
        int icnt = 0;
        Node temp = Head;

        while(temp != null)
        {
            icnt++;
            temp = temp.next;
        }

        return icnt;
    }

    int LastOcc(int value)
    {
        Node temp = Head;
        int icnt = 1;
        int ipos = 0;

        while(temp != null)
        {
            if(temp.data == value)
            {
                ipos = icnt;
            }
            icnt++;
            temp = temp.next;
        }

        return ipos;
    }
}
class Find
{
    public static void main(String args[])
    {
        int iret = 0;
        int iret2 = 0;

        System.out.println("Jay Ganesh....");

        SinglyLL sobj = new SinglyLL();
        sobj.InsertFirst(51);
        sobj.InsertFirst(11);
        sobj.InsertFirst(10);
        sobj.InsertLast(101);
        sobj.InsertLast(51);
        sobj.InsertLast(51);

        System.out.println("Elements of Linked list are : ");
        sobj.Display();
        iret = sobj.Count();
        iret2 = sobj.LastOcc(10);

        System.out.println("\nCount of Elements From Linked List is : "+iret);

        System.out.println("Last Occurace of Entered Number is At Index number : "+iret2);
        sobj = null;
    }
}