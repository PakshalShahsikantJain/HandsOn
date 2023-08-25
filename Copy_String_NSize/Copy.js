/*
    Author : Pakshal Shashikant Jain
    Date : 24/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strncpy() function)
              
              Input : "Marvellous Multi OS"
                       10
              Output : Marvellous
              
              Note : If third parameter is greater than the size of source string then
              copy whole string into destination.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var CopyString = /** @class */ (function () {
    //Constructor of Class
    function CopyString() {
        this.arr = [];
        this.brr = [];
        this.str = " ";
        this.isize = 0;
    }
    //Behaviour of Class To Take Input from user
    CopyString.prototype.Accept = function () {
        this.str = "Marvellous Multi OS";
        this.arr = Array.from(this.str);
        this.isize = 10;
    };
    //Behaviour of Class To Copy Contents of String Till Entered size
    CopyString.prototype.StrNCpyX = function () {
        var i = 0;
        if ((this.arr == null) && (this.brr == null)) {
            return;
        }
        //Logic To Copy Contents
        while ((i != this.arr.length) && (this.isize != 0)) {
            this.brr[i] = this.arr[i];
            i++;
            this.isize--;
        }
    };
    return CopyString;
}());
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay Ganesh....");
    //Creating object of CopyString 
    var cobj = new CopyString();
    //Call To Behaviours of Class
    cobj.Accept();
    cobj.StrNCpyX();
    //Printing Copied String
    console.log("Copied String is :", cobj.brr.join(""));
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
