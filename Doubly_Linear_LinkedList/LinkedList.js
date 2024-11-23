var NODE = /** @class */ (function () {
    function NODE() {
        this.data = 0;
        this.next = null;
        this.prev = null;
    }
    return NODE;
}());
var DoublyLL = /** @class */ (function () {
    function DoublyLL() {
        this.Head = null;
    }
    DoublyLL.prototype.InsertFirst = function (value) {
        var newn = new NODE();
        newn.data = value;
        newn.next = null;
        newn.prev = null;
        if (this.Head == null) {
            this.Head = newn;
        }
        else {
            newn.next = this.Head;
            this.Head.prev = newn;
            this.Head = newn;
        }
    };
    DoublyLL.prototype.InsertLast = function (value) {
        var newn = new NODE();
        newn.data = value;
        newn.next = null;
        newn.prev = null;
        var temp = this.Head;
        if (this.Head == null) {
            this.Head = newn;
        }
        else {
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;
        }
    };
    DoublyLL.prototype.InsertAtPos = function (value, ipos) {
        var i = 0;
        var isize = 0;
        var temp = this.Head;
        var newn = new NODE();
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
            newn.data = value;
            newn.next = null;
            newn.prev = null;
            for (i = 1; i < (ipos - 1); i++) {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next.prev = newn;
            temp.next = newn;
        }
    };
    DoublyLL.prototype.DeleteFirst = function () {
        if (this.Head == null) {
            return;
        }
        else if ((this.Head).next == null) {
            this.Head = null;
        }
        else {
            this.Head = (this.Head).next;
            this.Head.prev = null;
        }
    };
    DoublyLL.prototype.DeleteLast = function () {
        var temp = this.Head;
        if (this.Head == null) {
            return;
        }
        else if ((this.Head).next == null) {
            this.Head = null;
        }
        else {
            while (temp.next.next != null) {
                temp = temp.next;
            }
            temp.next = null;
        }
    };
    DoublyLL.prototype.DeleteAtPos = function (ipos) {
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
            temp2.next.prev = temp;
            temp2 = null;
        }
    };
    DoublyLL.prototype.Display = function () {
        var Head = this.Head;
        console.log("Elements of Linked List are : ");
        while (Head != null) {
            process.stdout.write("|" + Head.data + "|<=>");
            Head = Head.next;
        }
        console.log();
    };
    DoublyLL.prototype.Count = function () {
        var Head = this.Head;
        var icnt = 0;
        while (Head != null) {
            icnt++;
            Head = Head.next;
        }
        return icnt;
    };
    return DoublyLL;
}());
function main() {
    var iret = 0;
    console.log("Jay Ganesh....");
    var dobj = new DoublyLL();
    dobj.InsertFirst(51);
    dobj.InsertFirst(11);
    dobj.InsertFirst(10);
    dobj.InsertLast(60);
    dobj.InsertLast(100);
    dobj.InsertLast(120);
    dobj.InsertAtPos(21, 3);
    dobj.InsertAtPos(5, 1);
    dobj.InsertAtPos(130, 9);
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d", iret);
    dobj.DeleteFirst();
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d", iret);
    dobj.DeleteLast();
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d", iret);
    dobj.DeleteAtPos(4);
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d", iret);
    dobj.DeleteAtPos(1);
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d", iret);
    dobj.DeleteAtPos(5);
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : %d", iret);
}
main();
