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

        console.log("Elements of linked list are : ");
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

    DisplayPrime() 
    {
        var Head : NODE = this.Head;
        var i : number = 0;
        var sum : number = 0;

        console.log("Prime Elements of linked list are : ");
        while(Head != null)
        {
            for(i = 1;i <= (Head.data / 2);i++) 
            {
                if((Head.data % i) == 0) 
                {
                    sum = sum + i;
                }
            }

            if(sum == 1)
            {
                process.stdout.write(Head.data+"\t");
            }
            sum = 0;
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
    sobj.InsertLast(5);
    sobj.InsertLast(17);
    sobj.InsertLast(999983);

    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements from Linked list is : %d",iret);

    sobj.DisplayPrime();
}

main();