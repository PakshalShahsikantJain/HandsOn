/*
    Author : Pakshal Shashikant Jain
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and off
              that bit. Return modified number.

              Input : 10 2
              Output : 8
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var Bit = /** @class */ (function () {
    //Constructor of Class
    function Bit() {
        this.iNo = 0;
        this.iPos = 0;
    }
    //Behaviour of Class To To Take Input from user
    Bit.prototype.Accept = function () {
        this.iNo = 10;
        this.iPos = 2;
    };
    //Behaviour of Class To Off bit At Entered Position
    Bit.prototype.OffBit = function () {
        var iMask = 0X00000001;
        var iResult = 0;
        if (this.iNo < 0) {
            this.iNo = -this.iNo;
        }
        if ((this.iPos < 1) || (this.iPos > 32)) {
            return 0;
        }
        //Logic To Off Bit 
        iMask = iMask << (this.iPos - 1);
        iResult = this.iNo & iMask;
        if (iResult == iMask) {
            iResult = iMask ^ this.iNo;
        }
        return iResult;
    };
    return Bit;
}()); //End of Class
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Jay ganesh.....");
    //Creating object of Bit Class
    var bobj = new Bit();
    //Call To Behaviour of Class
    bobj.Accept();
    iret = bobj.OffBit();
    //Printing Modified Number
    console.log("Modified Number is : %d", iret);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
