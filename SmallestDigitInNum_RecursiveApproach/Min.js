/*
    Author : Pakshal Shashikant Jain
    Date : 14/5/2024
    Program : Write a recursive program which accept number from user and return
              smallest digit

              Input : 87983
              Output : 3
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
var MinDigit = /** @class */ (function () {
    //Constructor of Class
    function MinDigit(value) {
        this.ino = value;
        this.imin = this.ino % 10;
        this.ino = Math.floor(this.ino / 10);
    }
    //Behaviour of Class To Find Smallest Digit in Entered Number
    MinDigit.prototype.Min = function () {
        var Digit = 0;
        //Logic To Find Smallest Digit
        Digit = this.ino % 10;
        if (Digit < this.imin) {
            this.imin = Digit;
        }
        this.ino = Math.floor(this.ino / 10);
        if (this.ino != 0) {
            //Recursive Call To Behaviour of Class
            this.Min();
        }
        return this.imin;
    };
    return MinDigit;
}());
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var ino = 82987;
    var iret = 0;
    console.log("Jay Ganesh.......");
    //Creating object of MinDigit Class
    var mobj = new MinDigit(ino);
    //Call To Behaviour of Class
    iret = mobj.Min();
    //Printing Smallest Digit
    console.log("Smallest Digit in Entered Number %d is : %d", ino, iret);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
