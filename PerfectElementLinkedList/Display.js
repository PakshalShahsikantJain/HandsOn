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
        console.log("Elements of Linked list are : ");
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
    SinglyLL.prototype.DisplayPerfect = function () {
        var i = 0;
        var sum = 0;
        var Head = this.Head;
        console.log("Perfect Elements From Linked List are : ");
        while (Head != null) {
            for (i = 1; i <= (Head.data / 2); i++) {
                if ((Head.data % i) == 0) {
                    sum = sum + i;
                }
            }
            if (sum == Head.data) {
                process.stdout.write(Head.data + "\t");
            }
            sum = 0;
            Head = Head.next;
        }
    };
    return SinglyLL;
}());
function main() {
    console.log("Jay Ganesh...");
    var iret = 0;
    var sobj = new SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertLast(6);
    sobj.InsertLast(41);
    sobj.InsertLast(17);
    sobj.InsertLast(28);
    sobj.InsertFirst(33550336);
    sobj.Display();
    iret = sobj.Count();
    console.log("Count of Element From Linked List is : %d", iret);
    sobj.DisplayPerfect();
}
main();
