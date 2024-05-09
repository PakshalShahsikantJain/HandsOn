/*
    Author : Pakshal Shashikant Jain
    Date : 9/5/2024
    Program : Write a recursive program which accept number from user and return its
              product of digits.

              Input : 523
              Output : 30
*/
var Digits = /** @class */ (function () {
    //Constructor of Class
    function Digits(ivalue) {
        this.imult = 1;
        this.ino = ivalue;
    }
    //Behaviour of Class
    Digits.prototype.Mult = function () {
        var Digits = 0;
        //Logic To calculate Products of Digits of Entered Number
        Digits = this.ino % 10;
        this.imult = this.imult * Digits;
        this.ino = Math.floor(this.ino / 10);
        if (this.ino != 0) {
            //Recursive Function Call To Mult Function
            this.Mult();
        }
        return this.imult;
    };
    return Digits;
}());
//Main Function
function main() {
    var ino = 523;
    var iret = 0;
    console.log("Jay Ganesh.........");
    //Creating object of Digits Class
    var dobj = new Digits(ino);
    //Call To Behaviour of Class
    iret = dobj.Mult();
    console.log("Products of Digits of Entered Number is : %d", iret);
}
//Call To Main Function
main();
