/*
    Author : Pakshal Shashikant Jain
    Date : 29/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by converting all capital
              characters into small case.

              Input : "Marvellous Python 2"
              Output : "marvellous python 2"
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var CopyString = /** @class */ (function () {
    //Constructor of Class
    function CopyString() {
        this.arr = [];
        this.brr = [];
        this.str = " ";
    }
    //Behaviour of Class To Take Input from User
    CopyString.prototype.Accept = function () {
        this.str = "Pakshal Jain";
        this.arr = Array.from(this.str);
    };
    //Behaviour of Class To Copy String After Converting Case of Entered String 
    CopyString.prototype.StrCpySmall = function () {
        var i = 0;
        var ascii = 0;
        if ((this.arr == null) && (this.brr == null)) {
            return;
        }
        //Logic To Copy
        while (i != this.arr.length) {
            if ((this.arr[i] >= 'A') && (this.arr[i] <= 'Z')) {
                ascii = this.arr[i].charCodeAt() + 32;
                this.arr[i] = String.fromCharCode(ascii);
            }
            this.brr[i] = this.arr[i];
            i++;
        }
    };
    return CopyString;
}());
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay Ganesh....");
    //Creating object of CopyString Class
    var cobj = new CopyString();
    //Call To behaviours of Class
    cobj.Accept();
    cobj.StrCpySmall();
    //Printing Copied String 
    console.log("Copied String is : %s", cobj.brr.join(""));
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
