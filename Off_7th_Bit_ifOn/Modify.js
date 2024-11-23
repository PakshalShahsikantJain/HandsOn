/*
    Author : Pakshal Shashikant Jain
    Date : 01/09/2023
    Program : Write a program which accept one number from user and off 7th bit of that
              number if it is on. Return modified number.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Off Entered Bit
function OffBit(iNo) {
    var iResult = 0;
    var iMask = 0X00000040;
    iResult = iNo & iMask;
    if (iResult == iMask) {
        iResult = iMask ^ iNo;
    }
    return iResult;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var iNo = 79;
    var iret = 0;
    console.log("Jay Ganesh....");
    //Call To OffBit Function
    iret = OffBit(iNo);
    //Printing Modified Number
    console.log("Modified Number is :", iret);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main function
main();
