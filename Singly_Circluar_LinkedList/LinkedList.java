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

class SinglyCL 
{
    private Node Head;
    private Node Tail;

    SinglyCL()
    {
        this.Head = null;
        this.Tail = null;
    }

    void InsertFirst(int value)
    {
        Node newn = new Node();
        newn.data = value;
        newn.next = null;

        if((this.Head == null)&&(this.Tail == null))
        {
            this.Head = newn;
            this.Tail = newn;
        }
        else 
        {
            newn.next = this.Head;
            this.Head = newn;
        }
        (this.Tail).next = this.Head;
    }

    void InsertLast(int value)
    {
        Node newn = new Node();
        newn.data = value;
        newn.next = null;

        if((this.Head == null)&&(this.Tail == null))
        {
            this.Head = newn;
            this.Tail = newn;
        }
        else 
        {
            (this.Tail).next = newn;
            this.Tail = newn;
        }
        (this.Tail).next = this.Head;
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
            newn.next = null;

            for(i = 1;i < (ipos - 1);i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
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

            return;
        }
        else 
        {
            this.Head = (this.Head).next;
            this.Tail.next = null;
            this.Tail.next = this.Head;
        }
    }

    void DeleteLast()
    {
        Node temp = this.Head;

        if((this.Head == null)&&(this.Tail == null))
        {
            return;
        }
        else if(this.Head == this.Tail)
        {
            this.Head = null;
            this.Tail = null;

            return;
        }
        else 
        {
            while(temp.next != this.Tail)
            {
                temp = temp.next;
            }

            temp.next = null;
            this.Tail = temp;
            temp.next = this.Head; 
        }
    }

    void DeleteAtPos(int ipos)
    {
        int isize = 0;
        int i = 0;
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

            temp2 = null;
        }
    }

    void Display()
    {
        Node temp = null;
        temp = this.Head;

        if((this.Head == null)&&(this.Tail == null))
        {
            return;
        }
        else 
        {

            System.out.println("Elements of Linked List are : ");
            do
            {
                System.out.printf("|%d|<->",temp.data);
                temp = temp.next;
            }while(temp != (this.Tail).next);        
            System.out.println();
        }
    }

    int Count()
    {
        Node temp = null;
        temp = this.Head;
        int icnt = 0;

        if((this.Head == null)&&(this.Tail == null))
        {
            return 0;
        }
        else 
        {
            
            do
            {
                icnt++;
                temp = temp.next;
            }while(temp != (this.Tail).next);        

            return icnt;
        }
    }
}

class LinkedList 
{
    public static void main(String args[])
    {
        int iret = 0;
        int ielem = 0;
        int ino = 0;
        int ipos = 0;

        System.out.println("Jay Ganesh.....");

        System.out.println("-------------Singly Cicular Linked List Demonstration(Java)------------------");
        
        Scanner sobj = new Scanner(System.in);

        SinglyCL scobj = new SinglyCL();

        while(true)
        {
            System.out.println("Select Any Operation From Below List of Operations To Perform on Linked List : ");
            System.out.println("1. Insert Element At First Position.");
            System.out.println("2. Insert Element At Last Position.");
            System.out.println("3. Insert Element At Entered Position.");
            System.out.println("4. Display Elements of Linked List.");
            System.out.println("5. Count No of Elements Present in Linked List.");
            System.out.println("6. Delete Element From First Position.");
            System.out.println("7. Delete Element From Last Position.");
            System.out.println("8. Delete Element From Entered Position.");
            System.out.println("0. Exit.");

            System.out.println("Enter Option Number : ");
            ino = sobj.nextInt();

            switch(ino)
            {
                case 1 :
                    {
                        System.out.println("Enter Number to Insert : ");
                        ielem = sobj.nextInt();

                        scobj.InsertFirst(ielem);

                        break;
                    }
                case 2 :
                    {
                        System.out.println("Enter Number to Insert : ");
                        ielem = sobj.nextInt();

                        scobj.InsertLast(ielem);
                        
                        break;
                    }
                case 3 :
                    {
                        System.out.println("Enter Number to Insert : ");
                        ielem = sobj.nextInt();


                        System.out.println("Enter Position to Insert Element At : ");
                        ipos = sobj.nextInt();

                        scobj.InsertAtPos(ielem,ipos);

                        break;
                    }
                case 4 :
                    {
                        scobj.Display();
                        
                        break;
                    }
                case 5 :
                    {
                        iret = scobj.Count();
                        
                        System.out.printf("Count of Elements is : %d\n",iret);
                        break;
                    }
                case 6 :
                    {   
                        scobj.DeleteFirst();
                        break;
                    }
                case 7 :
                    {   
                        scobj.DeleteLast();
                        break;
                    }
                case 8 :
                    {
                        System.out.println("Enter Position to Delete Element From : ");
                        ipos = sobj.nextInt();

                        scobj.DeleteAtPos(ipos);
                        
                        break;
                    }
                case 0 :
                    {
                        return;
                    }
                default :
                {
                    System.out.println("Invalid Option Number Entered, Please Enter Valid Option Number.");
                    return;
                }
            }           
        }
    }
}