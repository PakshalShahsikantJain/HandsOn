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
        var temp = this.Head;
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
    SinglyLL.prototype.Addition = function () {
        var temp = this.Head;
        var isum = 0;
        while (temp != null) {
            isum = isum + temp.data;
            temp = temp.next;
        }
        return isum;
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
    sobj.InsertLast(201);
    sobj.Display();
    iret = sobj.Count();
    console.log("\nCount of All Elements From Linked List is :", iret);
    iret = sobj.Addition();
    console.log("Addition of All Elements From Linked List is :", iret);
}
main();
