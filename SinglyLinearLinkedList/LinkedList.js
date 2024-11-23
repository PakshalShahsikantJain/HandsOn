var NODE = /** @class */ (function () {
    function NODE() {
        this.data = 0;
        this.next = null;
    }
    return NODE;
}());
var SinglyLL = /** @class */ (function () {
    function SinglyLL() {
    }
    SinglyLL.prototype.SinglyLL = function () {
        this.Head = null;
    };
    SinglyLL.prototype.InsertFirst = function (value) {
        var newn = new NODE();
        newn.data = value;
        newn.next = null;
        if (this.Head == null) {
            this.Head = newn;
        }
        else {
            newn.next = this.Head;
            this.Head = newn;
        }
    };
    SinglyLL.prototype.InsertLast = function (value) {
        var newn = new NODE();
        newn.data = value;
        newn.next = null;
        var temp = this.Head;
        if (this.Head == null) {
            this.Head = newn;
        }
        else {
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newn;
        }
    };
    SinglyLL.prototype.InsertAtPos = function (value, ipos) {
        var isize = 0;
        var i = 0;
        var newn = new NODE();
        var temp = this.Head;
        isize = this.Count();
        if ((ipos < 1) || (ipos > isize + 1)) {
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
            for (i = 1; i < (ipos - 1); i++) {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;
        }
    };
    SinglyLL.prototype.DeleteFirst = function () {
        var temp = this.Head;
        if (this.Head != null) {
            this.Head = (this.Head).next;
            temp = null;
        }
    };
    SinglyLL.prototype.DeleteLast = function () {
        var temp = this.Head;
        if (this.Head == null) {
            return;
        }
        else if ((this.Head).next == null) {
            this.Head = null;
            return;
        }
        else {
            while (temp.next.next != null) {
                temp = temp.next;
            }
            delete (temp.next);
            temp.next = null;
        }
    };
    SinglyLL.prototype.DeleteAtPos = function (ipos) {
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
            temp2 = null;
        }
    };
    SinglyLL.prototype.Display = function () {
        var temp = this.Head;
        console.log("Elements of Linked List are : ");
        while (temp != null) {
            process.stdout.write("|" + temp.data + "|->");
            temp = temp.next;
        }
        console.log();
    };
    SinglyLL.prototype.Count = function () {
        var temp = this.Head;
        var icnt = 0;
        while (temp != null) {
            icnt++;
            temp = temp.next;
        }
        return icnt;
    };
    return SinglyLL;
}());
function main() {
    console.log("Jay Ganesh....");
    var iret = 0;
    var sobj = new SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(60);
    sobj.InsertLast(101);
    sobj.InsertLast(120);
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements Present in linked List is : %d", iret);
    sobj.InsertAtPos(21, 3);
    console.log("----------Updated Linked List after inserting New Element at Given Position-------");
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements Present in linked List is : %d", iret);
    sobj.DeleteFirst();
    console.log("----------Updated Linked List after Deleting First Element-------");
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements Present in linked List is : %d", iret);
    sobj.DeleteLast();
    console.log("----------Updated Linked List after Deleting Last Element-------");
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements Present in linked List is : %d", iret);
    sobj.DeleteAtPos(5);
    console.log("----------Updated Linked List after Deleting Element From Given Position-------");
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements Present in linked List is : %d", iret);
}
main();
