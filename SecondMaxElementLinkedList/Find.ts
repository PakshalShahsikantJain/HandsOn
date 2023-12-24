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
    SinglyLL()
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
        var temp : NODE = this.Head;

        while(temp != null)
        {
            process.stdout.write("|"+temp.data+"|->");
            temp = temp.next;
        }
    }

    Count() : number
    {
        var temp : NODE = this.Head;
        var icnt : number = 0;

        while(temp != null)
        {
            icnt++;
            temp = temp.next;
        }

        return icnt;
    }

    SecondMax() : number
    {
        var temp : NODE = this.Head;
        var Head : NODE = this.Head;
        var tempMax : number = 0;
        var iSecMax : number = 0;

        tempMax = temp.data;
        while(temp != null)
        {
            if(temp.data > tempMax)
            {
                tempMax = temp.data;
            }
            temp = temp.next;
        }

        iSecMax = Head.data;
        while(Head != null)
        {
            if((Head.data > iSecMax)&&(Head.data < tempMax))
            {
                iSecMax = Head.data;
            }
            Head = Head.next;
        }

        return iSecMax;
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
    sobj.InsertLast(101);
    sobj.InsertLast(150);
    sobj.InsertLast(120);

    console.log("Elements of Linked list are : ");
    sobj.Display();
    
    iret = sobj.Count();
    console.log("\nCount of Elements From Linked list is :",iret);

    iret = sobj.SecondMax();
    console.log("Second Max Element From Linked list is :",iret);
}

main();