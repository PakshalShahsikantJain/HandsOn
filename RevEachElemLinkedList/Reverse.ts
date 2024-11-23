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

    Reverse()
    {
        var Head : NODE = this.Head;
        var irev : number = 0;
        var Digit : number = 0;
        var No : number = 0;

        process.stdout.write("Ouput After Reversing Each Elements is : ");
        while(Head != null)
        {
            No = Head.data;

            while(No != 0)
            {
                Digit = No % 10;
                irev = (irev * 10) + Digit;
                No = Math.floor(No / 10);
            }

            process.stdout.write("|"+irev+"|->");
            irev = 0;
            Head = Head.next;
        }
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
    sobj.InsertLast(121);
    sobj.InsertLast(1201);

    sobj.Display();

    iret = sobj.Count();
    console.log("Count of elements From Linked List is : ",iret);

    sobj.Reverse();
}

main();