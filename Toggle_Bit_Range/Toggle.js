/*
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number from user and range of
              positions from user. Toggle all bits from that range.
              Input : 897 9 13
              Toggle all bits from position 9 to 13 of input number ie 879.

              UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
              {
                // Logic
              }
*/
//Class Declaration
var Bit = /** @class */ (function () {
    //Constructor of Class
    function Bit() {
        this.iNo = 0;
        this.iStart = 0;
        this.iEnd = 0;
    }
    //Behaviour of Class To Take input from user
    Bit.prototype.Accept = function () {
        this.iNo = 105;
        this.iStart = 9;
        this.iEnd = 13;
    };
    //Behaviour of Class To Toggle Bits in Entered Range
    Bit.prototype.ToggleBitRange = function () {
        var i = 0;
        var iMask = 0X00000001;
        var iResult = 0;
        //Logic To Toggle Bits of Entered Range
        iResult = this.iNo;
        for (i = this.iStart; i <= this.iEnd; i++) {
            iMask = iMask << (i - 1);
            iResult = iResult ^ iMask;
            iMask = 0X00000001;
        }
        return iResult;
    };
    return Bit;
}());
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    console.log("Jay Ganesh....");
    //Creating object of Bit Class
    var bobj = new Bit();
    //Call To Behaviours of Class
    bobj.Accept();
    iret = bobj.ToggleBitRange();
    //Printing Modified Number
    console.log("Modified Number is :", iret);
}
main();
