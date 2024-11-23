import java.lang.*;
import java.util.*;

class Node 
{
    int data;
    Node next;
    Node prev;

    Node()
    {
        this.data = 0;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL
{
    private Node Head;

    public DoublyLL()
    {
        this.Head = null;
    }

    public void InsertFirst(int value)
    {
        Node newn = new Node();
        newn.data = value;
        newn.next = null;
        newn.prev = null;

        if(this.Head == null)
        {
            this.Head = newn;
        }
        else 
        {
            newn.next = this.Head;
            this.Head.prev = newn;
            this.Head = newn;
        }
    }

    public void InsertLast(int value)
    {
        Node newn = new Node();
        newn.data = value;
        newn.next = null;
        newn.prev = null;
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
            newn.prev = temp;
        }
    }

    public void InsertAtPos(int value,int ipos)
    {
        int i = 0;
        int isize = 0;
        Node newn = null;
        Node temp = this.Head;

        isize = this.Count();

        if((ipos < 1)||(ipos > (isize + 1)))
        {
            return;
        }
        else if(ipos == 1)
        {
            this.InsertFirst(value);
        }
        else if(ipos == (isize + 1))
        {
            this.InsertLast(value);
        }
        else 
        {
            newn = new Node();
            newn.data = value;
            newn.next = null;
            newn.prev = null;

            for(i = 1;i < (ipos - 1);i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
        }
    }

    public void DeleteFirst()
    {
        if(this.Head == null)
        {
            return;
        }
        else if((this.Head).next == null)
        {
            this.Head = null;
        }
        else 
        {
            this.Head = this.Head.next;
            this.Head.prev = null;
        }
    }

    public void DeleteLast()
    {
        if(this.Head == null)
        {
            return;
        }
        else if((this.Head).next == null) 
        {
            this.Head = null;
        }
        else
        {
            Node temp = this.Head;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;
        }
    }

    public void DeleteAtPos(int ipos)
    {
        int i = 0;
        int isize = 0;
        Node temp = this.Head;
        Node temp2 = null;

        isize = this.Count();
        
        if((ipos < 1)||(ipos > isize))
        {
            return;
        }
        else if(ipos == 1)
        {
            DeleteFirst();
        }
        else if(ipos == isize)
        {
            DeleteLast();
        }
        else 
        {
            for(i = 1;i < (ipos - 1);i++)
            {
                temp  = temp.next;
            }

            temp2 = temp.next;
            temp.next = temp2.next;
            temp2.next.prev = temp;

            temp2 = null;
        }
    }

    public void Display()
    {
        Node temp = this.Head;

        System.out.println("Elements of Linked List are : ");
        while(temp != null)
        {
            System.out.printf("|%d|<=>",temp.data);
            temp = temp.next;
        }
        System.out.println();
    }

    public int Count()
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

class LinkedList
{
    public static void main(String args[])
    {
        int iret = 0;
        int ipos = 0;
        int ielem = 0;
        int ino = 0;

        System.out.println("Jay Ganesh....");

        DoublyLL dobj = new DoublyLL();
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------------------------Doubly Linear Linked List Demonstration--------------------");
        
        while(true)
        {
            System.out.println("---Select Operations Option Number to Perform on Linked List From Below---");
            System.out.println("1. Insert Element At First Position.");
            System.out.println("2. Insert Element At Last Position.");
            System.out.println("3. Insert Element At Given Position.");
            System.out.println("4. Display Elements of Linked List.");
            System.out.println("5. Count No of Elements Present in Linked List.");
            System.out.println("6. Delete Element From First Position.");
            System.out.println("7. Delete Element From Last Position.");
            System.out.println("8. Delete Element From Given Position.");
            System.out.println("0. Exit.");

            System.out.println("Enter Option Number : ");
            ino = sobj.nextInt();

            switch(ino)
            {

                case 1 :
                    {
                        System.out.println("Enter Element Value to Insert : ");
                        ielem = sobj.nextInt();

                        dobj.InsertFirst(ielem);

                        break;
                    }
                case 2 :
                    {
                        System.out.println("Enter Element Value to Insert : ");
                        ielem = sobj.nextInt();

                        dobj.InsertLast(ielem);
                        break;
                    }
                case 3 :
                    {
                        System.out.println("Enter Element Value to Insert : ");
                        ielem = sobj.nextInt();

                        System.out.println("Enter Position You Want To Insert Value At : ");
                        ipos = sobj.nextInt();

                        dobj.InsertAtPos(ielem,ipos);
                        break;
                    }
                case 4 :
                    {
                        dobj.Display();
                        break;
                    }
                case 5 :
                    {
                        iret = dobj.Count();

                        System.out.printf("Count of Element Present in Linked List is : %d\n",iret);
                        break;
                    }
                case 6 :
                    {
                        dobj.DeleteFirst();
                        break;
                    }
                case 7 :
                    {
                        dobj.DeleteLast();
                        break;
                    }
                case 8 :
                    {
                        System.out.println("Enter Position You Want To Delete Element From : ");
                        ipos = sobj.nextInt();

                        dobj.DeleteAtPos(ipos);
                        break;
                    }
                case 0 :
                    {
                        return;
                    }
                default :
                {
                    System.out.println("Invalid Option Number Entered.");

                    return;
                }
            }
        }
    }
}