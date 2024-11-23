/*
    Author : Pakshal Shashikant Jain
    Date : 05/09/2023
    Program : Write a program which accept one number and position from user and Toggle
              that bit. Return modified number.

              Input : 10 3
              Output : 14
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Required Libraries
var Bit = /** @class */ (function () {
    //Constructor of Class
    function Bit() {
        this.iNo = 0;
        this.iPos = 0;
    }
    //Behaviour of Class To Take Input from user
    Bit.prototype.Accept = function () {
        this.iNo = 10;
        this.iPos = 3;
    };
    //Behaviour of Class To Toggle Entered Bit
    Bit.prototype.Toggle = function () {
        var iMask = 0X00000001;
        var iResult = 0;
        if (this.iNo < 0) {
            this.iNo = -this.iNo;
        }
        if ((this.iPos < 1) || (this.iPos > 32)) {
            return 0;
        }
        //Logic To Toggle Bit
        iMask = iMask << (this.iPos - 1);
        iResult = iMask ^ this.iNo;
        return iResult;
    };
    return Bit;
}());
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Jay Ganesh.....");
    //Creating object of Bit Class
    var bobj = new Bit();
    //Call To Behaviours of Class
    bobj.Accept();
    iret = bobj.Toggle();
    //Printing Modified Number
    console.log("Modified Number is : %d", iret);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
