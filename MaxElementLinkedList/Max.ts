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

    MaxElement() : number 
    {
        var temp : NODE | null = this.Head;
        var iMax : number = 0;

        iMax = temp.data;
        while(temp != null)
        {
            if(temp.data > iMax)
            {
                iMax = temp.data;
            }
            temp = temp.next;
        }

        return iMax;
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
    var iret : number = 0;

    console.log("Jay Ganesh.....");

    var sobj = new SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(105);
    sobj.InsertLast(100);

    sobj.Display();
    iret = sobj.Count();
    console.log("\nCount of Elements From Linked List is : %d",iret);

    iret = sobj.MaxElement();
    console.log("Max Elements From Linked List is : %d",iret);
}

main();