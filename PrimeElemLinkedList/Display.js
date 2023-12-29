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
        console.log("Elements of linked list are : ");
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
    SinglyLL.prototype.DisplayPrime = function () {
        var Head = this.Head;
        var i = 0;
        var sum = 0;
        console.log("Prime Elements of linked list are : ");
        while (Head != null) {
            for (i = 1; i <= (Head.data / 2); i++) {
                if ((Head.data % i) == 0) {
                    sum = sum + i;
                }
            }
            if (sum == 1) {
                process.stdout.write(Head.data + "\t");
            }
            sum = 0;
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
    sobj.InsertLast(5);
    sobj.InsertLast(17);
    sobj.InsertLast(999983);
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Elements from Linked list is : %d", iret);
    sobj.DisplayPrime();
}
main();
