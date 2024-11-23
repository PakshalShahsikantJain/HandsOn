class NODE 
{
    data : number;
    next : NODE | null;

    constructor()
    {
        this.data = 0;
        this.next = null;
    }
}

class SinglyLL
{
    Head : NODE | null;

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
        var temp : NODE |null = this.Head;

        var newn : NODE = new NODE();
        newn.data = value;
        newn.next = null;

        if(temp == null)
        {
            temp = newn;
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

    LastOcc(value : number) : number 
    {
        var icnt : number = 1;
        var ipos : number = 0;
        var temp : NODE | null = this.Head;

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
    Count() : number
    {
        var icnt : number = 0;
        var temp : NODE | null = this.Head;

        while(temp != null)
        {
            icnt++;
            temp = temp.next;
        }

        return icnt;
    }

    Display()
    {
        var temp : NODE | null = this.Head;

        while(temp != null)
        {
            process.stdout.write("|"+temp.data+"|->");
            temp = temp.next;
        }
    }
}

function main()
{
    console.log("Jay Ganesh....");

    var sobj : SinglyLL = new SinglyLL();
    var iret : number = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertFirst(5);
    sobj.InsertLast(101);
    sobj.InsertLast(201);
    sobj.InsertLast(11);
    sobj.InsertLast(301);
    sobj.Display();

    iret = sobj.Count();
    console.log("\nCount of Elements Present in Linked is : %d",iret);

    iret = sobj.LastOcc(11);
    console.log("Last Occurance of Entered Element is At Position number : %d",iret);
}

main();