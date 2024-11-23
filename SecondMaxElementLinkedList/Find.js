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
    SinglyLL.prototype.SecondMax = function () {
        var temp = this.Head;
        var Head = this.Head;
        var tempMax = 0;
        var iSecMax = 0;
        tempMax = temp.data;
        while (temp != null) {
            if (temp.data > tempMax) {
                tempMax = temp.data;
            }
            temp = temp.next;
        }
        iSecMax = Head.data;
        while (Head != null) {
            if ((Head.data > iSecMax) && (Head.data < tempMax)) {
                iSecMax = Head.data;
            }
            Head = Head.next;
        }
        return iSecMax;
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
    sobj.InsertLast(101);
    sobj.InsertLast(150);
    sobj.InsertLast(120);
    console.log("Elements of Linked list are : ");
    sobj.Display();
    iret = sobj.Count();
    console.log("\nCount of Elements From Linked list is :", iret);
    iret = sobj.SecondMax();
    console.log("Second Max Element From Linked list is :", iret);
}
main();
