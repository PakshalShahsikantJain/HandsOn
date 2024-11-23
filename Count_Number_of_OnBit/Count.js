/*
    Author : Pakshal Shashikant Jain
    Date : 07/09/2023
    Program : Write a program which accept one number from user and count number of
              ON (1) bits in it without using % and / operator.

              Input : 11
              Output : 3
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Count Number of ON Bits
function CountOnBit(iNo) {
    var iResult = 0;
    var iMask = 0X00000001;
    var i = 0;
    var icnt = 0;
    //Logic To Count Number of ON Bits
    for (i = 1; i <= 32; i++) {
        iMask = iMask << (i - 1);
        iResult = iMask & iNo;
        if (iResult == iMask) {
            icnt++;
        }
        iMask = 0X00000001;
        iResult = 0;
    }
    return icnt;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iNo = 10;
    var iret = 0;
    console.log("Jay Ganesh.....");
    //Call To CountOnBit function
    iret = CountOnBit(iNo);
    //Printing Count of Number of ON Bits
    console.log("Count of Number of ON Bits is :", iret);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call TO Main Function
main();
