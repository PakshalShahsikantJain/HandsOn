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
        process.stdout.write("Elements of Linked list are : ");
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
    SinglyLL.prototype.DisplayProduct = function () {
        var Head = this.Head;
        var Digit = 0;
        var iNo = 0;
        var imult = 1;
        console.log("Products of Digits of All Elements of linked List are : ");
        while (Head != null) {
            iNo = Head.data;
            while (iNo != 0) {
                Digit = iNo % 10;
                if (Digit == 0) {
                    Digit = 1;
                }
                imult = imult * Digit;
                iNo = Math.floor(iNo / 10);
            }
            process.stdout.write(imult + "\t");
            imult = 1;
            Head = Head.next;
        }
    };
    return SinglyLL;
}());
function main() {
    var iret = 0;
    console.log("Jay Ganesh.....");
    var sobj = new SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(101);
    sobj.InsertLast(187);
    sobj.InsertLast(178);
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements From Linked List is : %d", iret);
    sobj.DisplayProduct();
}
main();
