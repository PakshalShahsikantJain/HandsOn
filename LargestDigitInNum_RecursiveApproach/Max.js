/*
    Author : Pakshal Shashikant Jain
    Date : 11/5/2024
    Program : Write a recursive program which accept number from user and return
              largest digit

              Input : 87983
              Output : 9
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
var MaxDigit = /** @class */ (function () {
    //Constructor of Class
    function MaxDigit(value) {
        this.imax = 0;
        this.ino = value;
    }
    //Behaviour of Class To Find Largest Digit in Entered Number
    MaxDigit.prototype.Max = function () {
        var Digit = 0;
        //Logic To Find Largest Digit
        Digit = this.ino % 10;
        if (this.imax < Digit) {
            this.imax = Digit;
        }
        this.ino = Math.floor(this.ino / 10);
        if (this.ino != 0) {
            //Recursive Call To Behaviour of Class
            this.Max();
        }
        return this.imax;
    };
    return MaxDigit;
}());
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var ino = 87987;
    var iret = 0;
    console.log("Jay Ganesh.......");
    //Creating object of MaxDigit Class
    var mobj = new MaxDigit(ino);
    //Call To Behaviour of Class
    iret = mobj.Max();
    //Printing Largest Digit
    console.log("Largest Digit in Entered Number %d is : %d", ino, iret);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
