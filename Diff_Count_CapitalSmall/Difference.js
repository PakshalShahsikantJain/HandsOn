var Difference = /** @class */ (function () {
    function Difference() {
        this.str = " ";
        this.arr = [];
    }
    Difference.prototype.Accept = function () {
        this.str = "MarvellouS";
        this.arr = Array.from(this.str);
    };
    Difference.prototype.Calculation = function () {
        var idiff = 0;
        var icnt = 0;
        var icnt2 = 0;
        var i = 0;
        for (i = 0; i < this.arr.length; i++) {
            if ((this.arr[i] >= 'A') && (this.arr[i] <= 'Z')) {
                icnt++;
            }
            else if ((this.arr[i] >= 'a') && (this.arr[i] <= 'z')) {
                icnt2++;
            }
        }
        idiff = icnt2 - icnt;
        return idiff;
    };
    return Difference;
}());
function main() {
    var iret = 0;
    console.log("Jay Ganesh....");
    var dobj = new Difference();
    dobj.Accept();
    iret = dobj.Calculation();
    console.log("Difference Between Small and Capital Letter is : %d", iret);
}
main();
