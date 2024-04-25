var NODE = /** @class */ (function () {
    function NODE() {
        this.data = 0;
        this.next = null;
        this.prev = null;
    }
    return NODE;
}());
var DoublyCLL = /** @class */ (function () {
    function DoublyCLL() {
        this.Head = null;
        this.Tail = null;
    }
    DoublyCLL.prototype.InsertFirst = function (value) {
        var newn = new NODE();
        newn.data = value;
        newn.next = null;
        newn.prev = null;
        if ((this.Head == null) && (this.Tail == null)) {
            this.Head = newn;
            this.Tail = newn;
        }
        else {
            newn.next = this.Head;
            (this.Head).prev = newn;
            this.Head = newn;
        }
        (this.Head).prev = this.Tail;
        (this.Tail).next = this.Head;
    };
    DoublyCLL.prototype.InsertLast = function (value) {
        var newn = new NODE();
        newn.data = value;
        newn.next = null;
        newn.prev = null;
        if ((this.Head == null) && (this.Tail == null)) {
            this.Head = newn;
            this.Tail = newn;
        }
        else {
            (this.Tail).next = newn;
            newn.prev = this.Tail;
            this.Tail = newn;
        }
        (this.Head).prev = this.Tail;
        (this.Tail).next = this.Head;
    };
    DoublyCLL.prototype.InsertAtPos = function (value, ipos) {
        var isize = 0;
        var i = 0;
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
            newn.prev = temp;
            (temp.next).prev = newn;
            temp.next = newn;
        }
    };
    DoublyCLL.prototype.DeleteFirst = function () {
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
            delete ((this.Head).prev);
            (this.Head).prev = this.Tail;
            (this.Tail).next = this.Head;
        }
    };
    DoublyCLL.prototype.DeleteLast = function () {
        if ((this.Head == null) && (this.Tail == null)) {
            return;
        }
        else if (this.Head == this.Tail) {
            delete (this.Head);
            this.Head = null;
            this.Tail = null;
        }
        else {
            this.Tail = (this.Tail).prev;
            delete ((this.Tail).next);
            (this.Tail).next = this.Head;
            (this.Head).prev = this.Tail;
        }
    };
    DoublyCLL.prototype.DeleteAtPos = function (ipos) {
        var isize = 0;
        var i = 0;
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
            (temp2.next).prev = temp;
            temp2 = null;
        }
    };
    DoublyCLL.prototype.Display = function () {
        var Head = this.Head;
        var Tail = this.Tail;
        if ((Head == null) && (Tail == null)) {
            console.log("Linked List is Empty");
            return;
        }
        else {
            console.log("Elements of Linked List are : ");
            do {
                process.stdout.write("|" + Head.data + "|<->");
                Head = Head.next;
            } while (Head != Tail.next);
            console.log();
        }
    };
    DoublyCLL.prototype.Count = function () {
        var Head = this.Head;
        var Tail = this.Tail;
        var icnt = 0;
        if ((Head == null) && (Tail == null)) {
            return 0;
        }
        else {
            do {
                icnt++;
                Head = Head.next;
            } while (Head != Tail.next);
            return icnt;
        }
    };
    return DoublyCLL;
}());
function main() {
    var iret = 0;
    console.log("Jay Ganesh.....");
    var dobj = new DoublyCLL();
    dobj.InsertFirst(51);
    dobj.InsertFirst(11);
    dobj.InsertFirst(10);
    dobj.InsertLast(60);
    dobj.InsertLast(100);
    dobj.InsertLast(120);
    dobj.InsertAtPos(21, 3);
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : " + iret);
    console.log("Elements of Linked List After Deleting First Element : ");
    dobj.DeleteFirst();
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : " + iret);
    console.log("Elements of Linked List After Deleting Last Element : ");
    dobj.DeleteLast();
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : " + iret);
    console.log("Elements of Linked List After Deleting From Entered Position : ");
    dobj.DeleteAtPos(3);
    dobj.Display();
    iret = dobj.Count();
    console.log("Count of Elements Present in Linked List is : " + iret);
}
main();
