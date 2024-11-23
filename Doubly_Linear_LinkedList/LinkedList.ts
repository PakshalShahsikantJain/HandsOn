class NODE 
{
    data : number;
    next : NODE | null;
    prev : NODE | null;
    constructor()
    {
        this.data = 0;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLL 
{
    private Head : NODE | null;

    constructor()
    {
        this.Head = null;
    }

    InsertFirst(value : number) 
    {
        var newn : NODE = new NODE();
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

    InsertLast(value : number)
    {
        var newn : NODE = new NODE();
        newn.data = value;
        newn.next = null;
        newn.prev = null;
        var temp : any = this.Head;

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

    InsertAtPos(value : number,ipos : number) 
    {
        var i : number = 0;
        var isize : number = 0;
        var temp : any = this.Head;
        var newn : NODE = new NODE();

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

    DeleteFirst()
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
            this.Head = (this.Head).next;
            this.Head.prev = null;
        }
    }

    DeleteLast()
    {
        var temp : any = this.Head;

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

    DeleteAtPos(ipos : number)
    {
        var i : number = 0;
        var isize : number = 0;
        var temp : any = this.Head;
        var temp2 : any = null;
        
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

    Display()
    {
        var Head : any = this.Head;

        console.log("Elements of Linked List are : ");
        while(Head != null)
        {
            process.stdout.write("|"+Head.data+"|<=>");
            Head = Head.next;
        }
        console.log();
    }

    Count() : number
    {
        var Head : any = this.Head;
        var icnt : number = 0;

        while(Head != null)
        {
            icnt++;
            Head = Head.next;
        }

        return icnt;
    }
}

function main() 
{
    var iret : number = 0;

    console.log("Jay Ganesh....");

    var dobj : DoublyLL = new DoublyLL();
    dobj.InsertFirst(51);
    dobj.InsertFirst(11);
    dobj.InsertFirst(10);
    dobj.InsertLast(60);
    dobj.InsertLast(100);
    dobj.InsertLast(120);
    dobj.InsertAtPos(21,3);
    dobj.InsertAtPos(5,1);
    dobj.InsertAtPos(130,9);

    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d",iret);

    dobj.DeleteFirst();
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d",iret);

    dobj.DeleteLast();
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d",iret);

    dobj.DeleteAtPos(4);
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d",iret);

    dobj.DeleteAtPos(1);
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d",iret);

    dobj.DeleteAtPos(5);
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d",iret);
}

main();