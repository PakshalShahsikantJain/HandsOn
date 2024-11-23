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

        process.stdout.write("Elements of Linked list are : ");
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

    DisplayProduct()
    {
        var Head : NODE = this.Head;
        var Digit : number = 0;
        var iNo : number = 0;
        var imult : number = 1;

        console.log("Products of Digits of All Elements of linked List are : ");
        while(Head != null)
        {
            iNo = Head.data;
            while(iNo != 0) 
            {
                Digit = iNo % 10;
                if(Digit == 0) 
                {
                    Digit = 1;
                }
                imult = imult * Digit;
                iNo = Math.floor(iNo / 10);
            }

            process.stdout.write(imult+"\t");
            imult = 1;
            Head = Head.next;
        }
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
    sobj.InsertLast(187);
    sobj.InsertLast(178);

    sobj.Display();

    iret = sobj.Count();
    console.log("Count of Elements From Linked List is : %d",iret);

    sobj.DisplayProduct();
}

main();