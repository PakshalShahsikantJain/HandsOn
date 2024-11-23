/*
    Author : Pakshal Shashikant Jain
    Date : 08/05/2024
    Program : Write a recursive program which accept number from user and return its
              factorial.
              
              Input : 5
              Output : 120
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
var Factorial = /** @class */ (function () {
    //Constructor of Class
    function Factorial(value) {
        this.imult = 1;
        this.ino = value;
    }
    //Behaviour of Class
    Factorial.prototype.Fact = function () {
        if (this.ino != 0) {
            this.imult = this.imult * this.ino;
            this.ino--;
            //Recursive Call
            this.Fact();
        }
        return this.imult;
    };
    return Factorial;
}());
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Jay Ganesh....");
    //Creating object of Factorial Class
    var fobj = new Factorial(5);
    //Call To Behaviour of Class
    iret = fobj.Fact();
    //Printing Factorial Calculated
    console.log("Factorial of Entered Number is : %d", iret);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
