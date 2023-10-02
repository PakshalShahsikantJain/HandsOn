/*
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
              
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var Pattern = /** @class */ (function () {
    //Constructor of Class
    function Pattern() {
        this.str = " ";
        this.arr = [];
    }
    //Behaviour of Class To Take Input from user
    Pattern.prototype.Accept = function () {
        this.str = "PPA";
        this.arr = Array.from(this.str);
    };
    //Behaviour of Class To Display Given Pattern
    Pattern.prototype.Display = function () {
        var i = 0;
        var j = 0;
        //Printing Given Pattern
        console.log("Printing Given Pattern");
        for (i = 0; i < this.arr.length; i++) {
            for (j = 0; j < this.arr.length; j++) {
                process.stdout.write(this.arr[j] + "\t");
            }
            console.log();
        }
    };
    return Pattern;
}()); //End of Class
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay Ganesh...");
    //Creating object of Pattern Class
    var pobj = new Pattern();
    //Call To Behaviours of Class
    pobj.Accept();
    pobj.Display();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
