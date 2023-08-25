/*
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy capital
              characters of that string into another string.
            
              Input : "Marvellous Multi OS"
              Output : "MMOS"
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
    //Behaviour of Class To Copy Capital Letters From Entered String
    CopyString.prototype.StrCapCpy = function () {
        var i = 0;
        if ((this.arr == null) && (this.brr == null)) {
            return;
        }
        //Logic To Copy
        while (i != this.arr.length) {
            if ((this.arr[i] >= 'A') && (this.arr[i] <= 'Z')) {
                this.brr[i] = this.arr[i];
            }
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
    cobj.StrCapCpy();
    //Printing Copied String 
    console.log("Capital Letters Copied from Entered String is : %s", cobj.brr.join(""));
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
