class NODE 
{
    data : number;
    next : NODE;
    
    NODE()
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

    SmallElem() : number 
    {
        var temp : NODE = this.Head;
        var Min : number = 0;

        Min = temp.data;

        while(temp != null)
        {
            if(temp.data < Min) 
            {
                Min = temp.data;
            }
            temp = temp.next;
        }
        
        return Min;
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
    sobj.InsertLast(2);
    sobj.InsertLast(101);
    sobj.InsertLast(105);

    console.log("Elements From Linked List is :");
    sobj.Display();
    
    iret = sobj.Count();
    console.log("\nCount of Elements From Linked List is :",iret);
    
    iret = sobj.SmallElem();
    console.log("Smallest Element From Linked List is :",iret);
}

main();