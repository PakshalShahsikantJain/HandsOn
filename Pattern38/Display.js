/*
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u
                       M a r v e l l o
                       M a r v e l l
                       M a r v e l
                       M a r v e
                       M a r v
                       M a r
                       M a
                       M

              Input : "PPA"
              Output : P P A
                       P P
                       P
*/
//Class Declaration
var StringPattern = /** @class */ (function () {
    //Constructor of Class
    function StringPattern() {
        this.str = " ";
        this.arr = [];
    }
    //Behaviour of Class To Take Input from user
    StringPattern.prototype.Accept = function () {
        this.str = "Pakshal";
        this.arr = Array.from(this.str);
    };
    //Behaviour of Class To Print Given Pattern
    StringPattern.prototype.Pattern = function () {
        var i = 0;
        var j = 0;
        if (this.arr == null) {
            return;
        }
        //Printing Given Pattern
        console.log("Printing Given Pattern : ");
        for (i = this.arr.length - 1; i >= 0; i--) {
            for (j = 0; j < this.arr.length; j++) {
                if (i >= j) {
                    process.stdout.write(this.arr[j] + "\t");
                }
            }
            console.log();
        }
    };
    return StringPattern;
}()); //End of Class
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay Ganesh....");
    //Creating object of StringPattern Class
    var sobj = new StringPattern();
    //Call To Behaviours of Class
    sobj.Accept();
    sobj.Pattern();
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
