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
    
    void InsertAtPos(int value,int ipos)
    {
        int isize = 0;
        int i = 0;
        Node newn = null;
        Node temp = this.Head;

        isize = Count();

        if((ipos < 1)||(ipos > isize + 1))
        {
            return;
        }
        else if(ipos == 1)
        {
            InsertFirst(value);
        }
        else if(ipos == (isize + 1))
        {
            InsertLast(value);
        }
        else 
        {
            newn = new Node();
            newn.data = value;

            for(i = 1;i < ipos - 1;i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;
        }
    }

    void Display()
    {
        Node temp = this.Head;

        System.out.println("Elements of Linked List are : ");
        while(temp != null)
        {
            System.out.printf("|%d|->",temp.data);
            temp = temp.next;
        }

        System.out.println();
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

    void DeleteFirst()
    {
        Node temp = this.Head;
        if(this.Head != null)
        {
            this.Head = this.Head.next;
            temp = null;
        }
    }

    void DeleteLast()
    {
        Node temp = this.Head;

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
            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null; 
        }
    }

    void DeleteAtPos(int ipos)
    {
        int isize = 0;
        Node temp = this.Head;
        Node temp2 = null;
        int i = 0;
        
        isize = Count();  

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
            for(i = 1;i < ipos - 1;i++)
            {
                temp = temp.next;
            }

            temp2 = temp.next;
            temp.next = temp2.next;
            temp2 = null;
        }
    }

}
class LinkedList 
{
    public static void main(String args[])
    {
        int ino = 0;
        int ipos = 0;
        int iret = 0;
        int elem = 0;

        System.out.println("Jay Ganesh.....");

        Scanner sobj = new Scanner(System.in);

        SinglyLL sobj2 = new SinglyLL();
        
        while(true)
        {
            System.out.println("--------------------------------------------Singly Linear Linked Linked List Demonstration-------------------------------------------");
            System.out.println("Please Selection Any From Below List of Operations To Peform on Linked List : ");
            System.out.println("1. Insert Element At First Position");
            System.out.println("2. Insert Element At Last Position");
            System.out.println("3. Insert Element At Desired Position Number");
            System.out.println("4. Display Elements Present In Linked List");
            System.out.println("5. Count Number of Elements Present In Linked List");
            System.out.println("6. Delete Element At First Position");
            System.out.println("7. Delete Element At Last Position");
            System.out.println("8. Delete Element At Desired Position Number");
            System.out.println("0. Exit");
            
            System.out.println("Enter Option Number : ");
            ino = sobj.nextInt();

            switch(ino) 
            {
                case 1 :
                    {
                        System.out.println("Enter Value of Element You Want To insert");
                        elem = sobj.nextInt();

                        sobj2.InsertFirst(elem);
                        break;
                    }
                case 2 :
                    {
                        
                        System.out.println("Enter Value of Element You Want To insert");
                        elem = sobj.nextInt();

                        sobj2.InsertLast(elem);
                        break;
                    }
                case 3 :
                    {
                        System.out.println("Enter Value of Element To insert");
                        elem = sobj.nextInt();

                        System.out.println("Enter Position Number You Want To Insert Element At : ");
                        ipos = sobj.nextInt();

                        sobj2.InsertAtPos(elem,ipos);
                        break;
                    }
                case 4 :
                    {
                        sobj2.Display();
                        break;
                    }
                case 5 :
                    {
                        iret = sobj2.Count();
                        System.out.printf("Count of Elements present in Linked List is : %d",iret);
                        System.out.println();
                        break;
                    }
                case 6 :
                    {
                        sobj2.DeleteFirst();
                    }
                case 7 :
                    {
                        sobj2.DeleteLast();
                    }
                case 8 :
                    {
                        System.out.println("Enter Position Number You Want To Delete Element At : ");
                        ipos = sobj.nextInt();

                        sobj2.DeleteAtPos(ipos);
                        break;
                    }
                case 0 :
                    {
                        return;
                    }
                default :
                {
                    System.out.println("Invalid Option Entered. Please Enter Valid Option.");
                    return;
                }
            }
        }
    }
}