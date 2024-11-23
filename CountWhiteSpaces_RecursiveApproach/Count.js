/*
    Author : Pakshal Shashikant Jain
    Date : 9/5/2024
    Program : Write a recursive program which accept string from user and count white
              spaces.

              Input : HE llo WOr lD
              Output : 3
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
var StringSpace = /** @class */ (function () {
    //Constructor of Class
    function StringSpace(svalue) {
        this.icnt = 0;
        this.str = svalue;
        this.i = 0;
    }
    //Behaviour of Class To Count White Space
    StringSpace.prototype.WhiteSpace = function () {
        var arr = Array.from(this.str);
        if (this.i != arr.length) {
            if (arr[this.i] == ' ') {
                this.icnt++;
            }
            this.i++;
            //Recursive Function Call
            this.WhiteSpace();
        }
        return this.icnt;
    };
    return StringSpace;
}());
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var str = "Pakshal Shashikant Jain";
    var iret = 0;
    console.log("Jay Ganesh....");
    //Creating object of StringSpace Class
    var sobj = new StringSpace(str);
    //Call To Behaviour of Class
    iret = sobj.WhiteSpace();
    //Printing Count of White Spaces
    console.log("Count of White Spaces in Entered String '%s' is: %d", str, iret);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
