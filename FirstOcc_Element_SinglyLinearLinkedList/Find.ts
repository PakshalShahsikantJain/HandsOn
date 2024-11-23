class NODE 
{
    public data : number;
    public next : NODE | null;

    constructor()
    {
        this.data = 0;
        this.next = null;
    }
}

class SinglyLL
{
    public Head : NODE | null;
    
    constructor()
    {
        this.Head = null;
    }

    InsertFirst(value : number) 
    {
        var newn = new NODE();
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
        var newn = new NODE();
        newn.data = value;
        newn.next = null;

        var temp : NODE | null = this.Head;

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

    FirstOcc(value : number) : number
    {
        var icnt : number = 1;
        var temp : NODE | null = this.Head;
        while(temp != null)
        {
            if(temp.data != value)
            {
                icnt++;
            }
            else
            {
                break;
            }
            temp = temp.next;
        }

        return icnt;
    }
}
function main()
{   
    var iret : number = 0;
    var iret2 : number = 0;

    console.log("Jay Ganesh...");

    var sobj = new SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertFirst(5);
    sobj.InsertLast(101);
    sobj.InsertLast(120);
    sobj.InsertLast(10);

    sobj.Display();
    iret = sobj.Count()
    iret2 = sobj.FirstOcc(10);

    console.log("\nCount of Elements From Linked List is : "+iret);
    console.log("First Occurance of Entered Number is a Position number : "+iret2);
}

main();