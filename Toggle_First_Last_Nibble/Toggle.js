/*
    Author : Pakshal Shashikant Jain
    Date : 07/09/2023
    Program : Write a program which accept one number from user and toggle contents
              of first and last nibble of the number. Return modified number. (Nibble is a
              group of four bits)

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var Nibble = /** @class */ (function () {
    //Constructor of Class
    function Nibble() {
        this.iNo;
    }
    //Behaviour of Class To Take Input from user
    Nibble.prototype.Accept = function () {
        this.iNo = 508n;
    };
    //Behaviour of Class To Toggle Content of First and Last Nibble of Entered Number
    Nibble.prototype.Toggle = function () {
        var iMask = 0xf000000fn;
        var iResult = 0n;
        if (this.iNo < 0) {
            this.iNo = -this.iNo;
        }
        //Logic To Toggle Contents
        iResult = iMask ^ this.iNo;
        return iResult;
    };
    return Nibble;
}());
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret;
    console.log("Jay Ganesh....");
    //Creating object of Nibble Class
    var nobj = new Nibble();
    //Call To Behaviours of Class
    nobj.Accept();
    iret = nobj.Toggle();
    //Printing Modified Number
    console.log("Modified Number is : ", iret);
}
main();
