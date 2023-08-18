/*
    Author : Pakshal Shashikant Jain
    Date : 13/08/2023
    Program : Write a program which accept string from user and convert it into
              upper case.

              Input : “Marvellous Multi OS”
              Output : MARVELLOUS MULTI OS
*/
//Class Declaration
var Convert = /** @class */ (function () {
    //Constructor of Class
    function Convert() {
        this.str = " ";
        this.arr = [];
    }
    //Behaviour of Class to Take Input from user
    Convert.prototype.Accept = function () {
        this.str = "Marvellous Multi OS";
        this.arr = Array.from(this.str);
    };
    //Behaviour of Class to Convert String 
    Convert.prototype.Convert = function () {
        var i = 0;
        var ascii = 0;
        //Logic To Convert 
        while (i != this.arr.length) {
            if ((this.arr[i] >= 'a') && (this.arr[i] <= 'z')) {
                ascii = this.arr[i].charCodeAt() - 32;
                this.arr[i] = String.fromCharCode(ascii);
            }
            i++;
        }
    };
    return Convert;
}());
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay Ganesh......");
    //Creating object of Convert Class
    var cobj = new Convert();
    //Call To Behaviour of Class
    cobj.Accept();
    cobj.Convert();
    //Printing Converted String 
    console.log("Converted String is :", cobj.arr.join(""));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
