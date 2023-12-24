var NODE = /** @class */ (function () {
    function NODE() {
    }
    NODE.prototype.NODE = function () {
        this.data = 0;
        this.next = null;
    };
    return NODE;
}());
var SinglyLL = /** @class */ (function () {
    function SinglyLL() {
        this.Head = null;
    }
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
    SinglyLL.prototype.Display = function () {
        var temp = this.Head;
        while (temp != null) {
            process.stdout.write("|" + temp.data + "|->");
            temp = temp.next;
        }
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
    SinglyLL.prototype.SmallElem = function () {
        var temp = this.Head;
        var Min = 0;
        Min = temp.data;
        while (temp != null) {
            if (temp.data < Min) {
                Min = temp.data;
            }
            temp = temp.next;
        }
        return Min;
    };
    return SinglyLL;
}());
function main() {
    console.log("Jay Ganesh....");
    var sobj = new SinglyLL();
    var iret = 0;
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(2);
    sobj.InsertLast(101);
    sobj.InsertLast(105);
    console.log("Elements From Linked List is :");
    sobj.Display();
    iret = sobj.Count();
    console.log("\nCount of Elements From Linked List is :", iret);
    iret = sobj.SmallElem();
    console.log("Smallest Element From Linked List is :", iret);
}
main();
