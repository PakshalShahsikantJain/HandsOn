var NODE = /** @class */ (function () {
    function NODE() {
        this.data = 0;
        this.next = null;
    }
    return NODE;
}());
var SinglyCL = /** @class */ (function () {
    function SinglyCL() {
        this.Head = null;
        this.Tail = null;
    }
    SinglyCL.prototype.InsertFirst = function (value) {
        var newn = new NODE();
        newn.data = value;
        newn.next = null;
        if ((this.Head == null) && (this.Tail == null)) {
            this.Head = newn;
            this.Tail = newn;
        }
        else {
            newn.next = this.Head;
            this.Head = newn;
        }
        (this.Tail).next = this.Head;
    };
    SinglyCL.prototype.InsertLast = function (value) {
        var newn = new NODE();
        newn.data = value;
        newn.next = null;
        if ((this.Head == null) && (this.Tail == null)) {
            this.Head = newn;
            this.Tail = newn;
        }
        else {
            (this.Tail).next = newn;
            this.Tail = newn;
        }
        (this.Tail).next = this.Head;
    };
    SinglyCL.prototype.InsertAtPos = function (value, ipos) {
        var isize = 0;
        var i = 0;
        var temp = this.Head;
        var newn = null;
        isize = this.Count();
        if ((ipos < 1) || (ipos > (isize + 1))) {
            return;
        }
        else if (ipos == 1) {
            this.InsertFirst(value);
        }
        else if (ipos == (isize + 1)) {
            this.InsertLast(value);
        }
        else {
            newn = new NODE();
            newn.data = value;
            newn.next = null;
            for (i = 1; i < (ipos - 1); i++) {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;
        }
    };
    SinglyCL.prototype.DeleteFirst = function () {
        if ((this.Head == null) && (this.Tail == null)) {
            return;
        }
        else if (this.Head == this.Tail) {
            delete (this.Head);
            this.Head = null;
            this.Tail = null;
        }
        else {
            this.Head = (this.Head).next;
            delete ((this.Tail).next);
            (this.Tail).next = this.Head;
        }
    };
    SinglyCL.prototype.DeleteLast = function () {
        var temp = this.Head;
        if ((this.Head == null) && (this.Tail == null)) {
            return;
        }
        else if (this.Head == this.Tail) {
            delete (this.Head);
            this.Head = null;
            this.Tail = null;
        }
        else {
            while (temp.next != this.Tail) {
                temp = temp.next;
            }
            delete (this.Tail);
            this.Tail = temp;
        }
        (this.Tail).next = this.Head;
    };
    SinglyCL.prototype.DeleteAtPos = function (ipos) {
        var i = 0;
        var isize = 0;
        var temp = this.Head;
        var temp2 = null;
        isize = this.Count();
        if ((ipos < 1) || (ipos > isize)) {
            return;
        }
        else if (ipos == 1) {
            this.DeleteFirst();
        }
        else if (ipos == isize) {
            this.DeleteLast();
        }
        else {
            for (i = 1; i < (ipos - 1); i++) {
                temp = temp.next;
            }
            temp2 = temp.next;
            temp.next = temp2.next;
            temp2 = null;
        }
    };
    SinglyCL.prototype.Display = function () {
        var Head = this.Head;
        console.log("Elements of Linked List are : ");
        do {
            process.stdout.write("|" + Head.data + "|<->");
            Head = Head.next;
        } while (Head != (this.Tail).next);
        console.log();
    };
    SinglyCL.prototype.Count = function () {
        var Head = this.Head;
        var icnt = 0;
        do {
            icnt++;
            Head = Head.next;
        } while (Head != (this.Tail).next);
        return icnt;
    };
    return SinglyCL;
}());
function main() {
    var iret = 0;
    console.log("Jay Ganesh...");
    var sobj = new SinglyCL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(60);
    sobj.InsertLast(65);
    sobj.InsertLast(100);
    sobj.InsertAtPos(21, 3);
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements present in Linked List is : %d", iret);
    console.log("-------Output After Performin DeleteFirst Operation------");
    sobj.DeleteFirst();
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements present in Linked List is : %d", iret);
    console.log("-------Output After Performin DeleteLast Operation------");
    sobj.DeleteLast();
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements present in Linked List is : %d", iret);
    console.log("-------Output After Performin DeleteAtPos Operation------");
    sobj.DeleteAtPos(5);
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements present in Linked List is : %d", iret);
}
main();
