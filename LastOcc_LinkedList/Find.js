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
        var temp = this.Head;
        var newn = new NODE();
        newn.data = value;
        newn.next = null;
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
    SinglyLL.prototype.LastOcc = function (value) {
        var icnt = 1;
        var ipos = 0;
        var temp = this.Head;
        while (temp != null) {
            if (temp.data == value) {
                ipos = icnt;
            }
            icnt++;
            temp = temp.next;
        }
        return ipos;
    };
    SinglyLL.prototype.Count = function () {
        var icnt = 0;
        var temp = this.Head;
        while (temp != null) {
            icnt++;
            temp = temp.next;
        }
        return icnt;
    };
    SinglyLL.prototype.Display = function () {
        var temp = this.Head;
        while (temp != null) {
            process.stdout.write("|" + temp.data + "|->");
            temp = temp.next;
        }
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
    sobj.InsertFirst(5);
    sobj.InsertLast(101);
    sobj.InsertLast(201);
    sobj.InsertLast(11);
    sobj.InsertLast(301);
    sobj.Display();
    iret = sobj.Count();
    console.log("\nCount of Elements Present in Linked is : %d", iret);
    iret = sobj.LastOcc(11);
    console.log("Last Occurance of Entered Element is At Position number : %d", iret);
}
main();
