class NODE
{
    data : number;
    next : NODE;

    constructor()
    {
        this.data = 0;
        this.next = null;
    }
}

class SinglyLL 
{
    Head : NODE;

    constructor() 
    {
        this.Head = null;
    }

    InsertFirst(value : number)
    {
        var newn : NODE = new NODE();
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

    InsertLast(value : number)
    {
        var newn : NODE = new NODE();
        newn.data = value;  
        newn.next = null;
        var temp : NODE = this.Head;

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

    Display()
    {
        var Head : NODE = this.Head;

        console.log("Element of Linked list are : ");
        while(Head != null)
        {
            process.stdout.write("|"+Head.data+"|->");
            Head = Head.next;
        }
        console.log();
    }

    Count() : number
    {
        var Head : NODE = this.Head;
        var icnt : number = 0;

        while(Head != null)
        {
            icnt++;
            Head = Head.next;
        }

        return icnt;
    }

    AdditionEven() : number
    {
        var Head : NODE = this.Head;
        var isum : number = 0;

        while(Head != null)
        {
            if((Head.data % 2) == 0) 
            {
                isum = isum + Head.data;
            }
            Head = Head.next;
        }

        return isum;
    }
}

function main() 
{
    var iret : number = 0;

    console.log("Jay Ganesh....");

    var sobj = new SinglyLL();

    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(101);
    sobj.InsertLast(120);
    sobj.InsertLast(121);

    sobj.Display();

    iret = sobj.Count();
    console.log("Count of Elements from Linked List is : ",iret);

    iret = sobj.AdditionEven();
    console.log("Addition of Even Elements from Linked List is : ",iret);
}

main();