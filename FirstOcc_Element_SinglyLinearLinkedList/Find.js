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
        if (temp == null) {
            temp = newn;
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
    SinglyLL.prototype.FirstOcc = function (value) {
        var icnt = 1;
        var temp = this.Head;
        while (temp != null) {
            if (temp.data != value) {
                icnt++;
            }
            else {
                break;
            }
            temp = temp.next;
        }
        return icnt;
    };
    return SinglyLL;
}());
function main() {
    var iret = 0;
    var iret2 = 0;
    console.log("Jay Ganesh...");
    var sobj = new SinglyLL();
    sobj.InsertFirst(51);
    sobj.InsertFirst(11);
    sobj.InsertFirst(10);
    sobj.InsertFirst(5);
    sobj.InsertLast(101);
    sobj.InsertLast(120);
    sobj.InsertLast(10);
    sobj.Display();
    iret = sobj.Count();
    iret2 = sobj.FirstOcc(10);
    console.log("\nCount of Elements From Linked List is : " + iret);
    console.log("First Occurance of Entered Number is a Position number : " + iret2);
}
main();
