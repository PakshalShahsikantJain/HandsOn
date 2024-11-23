var Digit = /** @class */ (function () {
    function Digit() {
        this.isize = 0;
        this.arr = [];
    }
    Digit.prototype.Accept = function () {
        this.isize = 6;
        this.arr = [8225, 665, 3, 76, 953, 858];
    };
    Digit.prototype.Display = function () {
        var i = 0;
        var idigits = 0;
        var no = 0;
        var icnt = 0;
        console.log("inside Display function");
        for (i = 0; i < this.isize; i++) {
            no = this.arr[i];
            while (no != 0) {
                idigits = no % 10;
                icnt = icnt + 1;
                no = Math.floor(no / 10);
            }
            if (icnt == 3) {
                process.stdout.write(this.arr[i] + "\t");
            }
            icnt = 0;
        }
    };
    return Digit;
}());
function main() {
    console.log("Jay Ganesh....");
    var dobj = new Digit();
    dobj.Accept();
    dobj.Display();
}
main();
