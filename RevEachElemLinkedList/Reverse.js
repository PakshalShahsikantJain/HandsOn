var NODE = /** @class */ (function () {
    function NODE() {
        this.data = 0;
        this.next = null;
    }
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
        var Head = this.Head;
        process.stdout.write("Elements of Linked List are : ");
        while (Head != null) {
            process.stdout.write("|" + Head.data + "|->");
            Head = Head.next;
        }
        console.log();
    };
    SinglyLL.prototype.Count = function () {
        var Head = this.Head;
        var icnt = 0;
        while (Head != null) {
            icnt++;
            Head = Head.next;
        }
        return icnt;
    };
    SinglyLL.prototype.Reverse = function () {
        var Head = this.Head;
        var irev = 0;
        var Digit = 0;
        var No = 0;
        process.stdout.write("Ouput After Reversing Each Elements is : ");
        while (Head != null) {
            No = Head.data;
            while (No != 0) {
                Digit = No % 10;
                irev = (irev * 10) + Digit;
                No = Math.floor(No / 10);
            }
            process.stdout.write("|" + irev + "|->");
            irev = 0;
            Head = Head.next;
        }
    };
    return SinglyLL;
}());
function main() {
    var iret = 0;
    console.log("Jay Ganesh....");
    var sobj = new SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(101);
    sobj.InsertLast(121);
    sobj.InsertLast(1201);
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of elements From Linked List is : ", iret);
    sobj.Reverse();
}
main();
