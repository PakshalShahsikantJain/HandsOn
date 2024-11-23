/*
    Author : Pakshal Shashikant Jain
    Date : 21/08/2023
    Program : Write a program which accept string from user reverse that string
              in place.

              Input : “abcd”
              Output : “dcba”

              Input : “abba”
              Output : “abba”
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var Reverse = /** @class */ (function () {
    //Constructor of Class
    function Reverse() {
        this.Str = " ";
        this.arr = [];
    }
    //Behaviour of Class To Take Input from user
    Reverse.prototype.Accept = function () {
        this.Str = "MarvellouS";
        this.arr = Array.from(this.Str);
    };
    //Behaviour of Class To Reverse String 
    Reverse.prototype.Reverse = function () {
        var i = 0;
        var iStart = 0;
        var iEnd = 0;
        var temp = ' ';
        while (iEnd != this.arr.length) {
            iEnd++;
        }
        while (iStart < iEnd) {
            temp = this.arr[iStart];
            this.arr[iStart] = this.arr[iEnd];
            this.arr[iEnd] = temp;
            iStart++;
            iEnd--;
        }
    };
    return Reverse;
}());
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay Ganesh.....");
    //Creating object of Reverse Class 
    var robj = new Reverse();
    //Call To Behaviour of Class
    robj.Accept();
    robj.Reverse();
    //Printing Reversed String 
    process.stdout.write(robj.arr.join(""));
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
