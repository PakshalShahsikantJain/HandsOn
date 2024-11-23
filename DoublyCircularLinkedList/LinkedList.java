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

class DoublyCLL 
{
    private Node Head;
    private Node Tail;

    DoublyCLL()
    {
        this.Head = null;
        this.Tail = null;
    }

    void InsertFirst(int value)
    {
        Node newn = new Node();
        newn.data = value;
        newn.next = null;
        newn.prev = null;

        if((this.Head == null)&&(this.Tail == null))
        {
            this.Head = newn;
            this.Tail = newn;
        }
        else 
        {
            newn.next = this.Head;
            (this.Head).prev = newn;
            this.Head = newn;
        }
        (this.Head).prev = this.Tail;
        (this.Tail).next = this.Head;
    }

    void InsertLast(int value) 
    {
        Node newn = new Node();
        newn.data = value;
        newn.next = null;
        newn.prev = null;

        if((this.Head == null)&&(this.Tail == null))
        {
            this.Head = newn;
            this.Tail = newn;
        }        
        else 
        {
            (this.Tail).next = newn;
            newn.prev = this.Tail;
            this.Tail = newn; 
        }
        (this.Tail).next = this.Head;
        (this.Head).prev = this.Tail;
    }

    void InsertAtPos(int value,int ipos)
    {
        int i = 0;
        int isize = 0;
        Node temp = this.Head;
        Node newn = null;

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
            newn.prev = null;
            newn.next = null;

            for(i = 1;i < (ipos - 1);i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            newn.prev = temp;
            temp.next.prev = newn;
            temp.next = newn;
        }
    }

    void DeleteFirst() 
    {
        if((this.Head == null)&&(this.Tail == null))
        {
            return;
        }
        else if(this.Head == this.Tail)
        {
            this.Head = null;
            this.Tail = null;
        }
        else 
        {
            this.Head = (this.Head).next;
            this.Head.prev = null;
            (this.Head).prev = this.Tail;
            (this.Tail).next = this.Head;
        }
    }

    void DeleteLast() 
    {
        if((this.Head == null)&&(this.Tail == null))
        {
            return;
        }
        else if(this.Head == this.Tail)
        {
            this.Head = null;
            this.Tail = null;
        }
        else 
        {
            this.Tail = (this.Tail).prev;
            (this.Tail).next = null;
            (this.Tail).next = this.Head;
            (this.Head).prev = this.Tail;
        }
    }

    void DeleteAtPos(int ipos)
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
            this.DeleteFirst();
        }
        else if(ipos == isize)
        {
            this.DeleteLast();
        }
        else 
        {
            for(i = 1;i < (ipos - 1);i++)
            {
                temp = temp.next;
            }

            temp2 = temp.next;
            temp.next = temp2.next;
            temp2.next.prev = temp;

            temp2 = null;
        }
    }

    void Display()
    {
        Node Head = this.Head;
        Node Tail = this.Tail;

        if((Head == null)&&(Tail == null))
        {
            return;
        }
        
        System.out.println("Elements of Linked List are : ");
        do 
        {
            System.out.printf("|%d|<=>",Head.data);
            Head = Head.next;
        }while(Head != (Tail.next));
        System.out.println();
    }

    int Count()
    {
        Node Head = this.Head;
        Node Tail = this.Tail;
        int icnt = 0;

        if((Head == null)&&(Tail == null))
        {
            return 0;
        }

        do 
        {
            icnt++;
            Head = Head.next;
        }while(Head != (Tail.next));
        
        return icnt;
    }
}

class LinkedList 
{
    public static void main(String args[])
    {
        int ino = 0;
        int ielem = 0;
        int ipos = 0;
        int iret = 0;

        System.out.println("Jay Ganesh....");

        Scanner sobj = new Scanner(System.in);

        DoublyCLL dobj = new DoublyCLL();
        
        System.out.println("-------------------Doubly Circular Linked List Demonstration---------------------------");

        while(true)
        {
            System.out.println("Select Any One Operation From Below List to Perform on Linked List : ");
            System.out.println("1. Insert Element At First Position.");
            System.out.println("2. Insert Element At Last Position.");
            System.out.println("3. Insert Element At Given Position.");
            System.out.println("4. Display Elements of Linked List.");
            System.out.println("5. Count Elements Present in Linked List.");
            System.out.println("6. Delete Element From First Position.");
            System.out.println("7. Delete Element From Last Position.");
            System.out.println("8. Delete Element From Given Position.");
            System.out.println("0. Exit.");

            System.out.print("Enter Your Choice : ");
            ino = sobj.nextInt();

            switch(ino)
            {
                case 1 :
                    {
                        System.out.print("Enter Element Value to Insert : ");
                        ielem = sobj.nextInt();

                        dobj.InsertFirst(ielem);

                       break;
                    }
                case 2 :
                    {
                        System.out.print("Enter Element Value to Insert : ");
                        ielem = sobj.nextInt();

                        dobj.InsertLast(ielem);

                        break;
                    }
                case 3 :
                    {
                        System.out.print("Enter Value to Insert : ");
                        ielem = sobj.nextInt();

                        System.out.print("Enter Position to Insert Element At : ");
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

                        System.out.printf("Count of Elements Present in Linked List is : %d\n",iret);

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
                        System.out.print("Enter Position Number You Want To Delete Element From : ");
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