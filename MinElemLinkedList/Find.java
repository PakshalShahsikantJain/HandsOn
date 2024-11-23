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

    int SmallElem()
    {
        Node temp = this.Head;
        int Min = 0;

        Min = temp.data;
        while(temp != null)
        {
            if(temp.data < Min)
            {
                Min = temp.data;
            }
            temp = temp.next;
        }

        return Min;
    }
}
class Find
{
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh...");

        SinglyLL sobj = new SinglyLL();
        sobj.InsertFirst(51);
        sobj.InsertFirst(11);
        sobj.InsertFirst(10);
        sobj.InsertLast(2);
        sobj.InsertLast(101);
        sobj.InsertLast(105);

        System.out.println("Elements of Linked List are : ");
        sobj.Display();

        iret = sobj.Count();
        System.out.printf("\nCount of Elements From Linked list Is : %d\n",iret);
        
        iret = sobj.SmallElem();
        System.out.printf("Smallest Element From Linked list Is : %d\n",iret);
    }  
}