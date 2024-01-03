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

        process.stdout.write("Elements of Linked List are : ");
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

    DisplaySmall()
    {
        var Head : NODE = this.Head;
        var iMin : number = 0;
        var Digit : number = 0;
        var No : number = 0;

        console.log("Smallest Digit of All Elements of Linked List are : ");
        while(Head != null) 
        {
            No = Head.data;
            iMin = No % 10;
            while(No != 0)
            {
                Digit = No % 10;
                if(Digit < iMin)
                {
                    iMin = Digit;
                }
                No = Math.floor(No / 10);
            }

            process.stdout.write(iMin + "\t");
            iMin = 0;
            Head = Head.next;
        }
        console.log();
    }
}

function main() 
{
    var iret : number = 0;

    console.log("Jay Ganesh....");

    var sobj : SinglyLL = new SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(101);
    sobj.InsertLast(723);
    sobj.InsertLast(9882);

    sobj.Display();
   
    iret = sobj.Count();
    console.log("Count of ELements From Linked List is : ",iret);

    sobj.DisplaySmall();
}

main();