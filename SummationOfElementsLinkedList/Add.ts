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
        var newn : NODE = new NODE();
        var temp : NODE | null = this.Head;
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

    Display()
    {
        var temp : NODE | null = this.Head;
        while(temp != null)
        {
            process.stdout.write("|"+temp.data+"|->");
            temp = temp.next;
        }
    }

    Count() : number
    {
        var temp : NODE | null = this.Head;
        var icnt : number = 0;

        while(temp != null)
        {
            icnt++;
            temp = temp.next;
        }

        return icnt;
    }

    Addition() : number
    {
        var temp : NODE | null = this.Head;
        var isum : number = 0;

        while(temp != null)
        {
            isum = isum + temp.data;
            temp = temp.next;
        }

        return isum;
    }
}
function main()
{
    var iret : number = 0;

    console.log("Jay Ganesh.....");

    var sobj : SinglyLL = new SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(101);
    sobj.InsertLast(201);
    sobj.Display();

    iret = sobj.Count();
    console.log("\nCount of All Elements From Linked List is :",iret);

    iret = sobj.Addition();
    console.log("Addition of All Elements From Linked List is :",iret);
}

main();