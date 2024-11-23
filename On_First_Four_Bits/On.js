/*
    Author : Pakshal Shashikant Jain
    Date : 01/09/2023
    Program : Write a program which accept one number from user and on its first 4
              bits. Return modified number.

              Input : 73
              Output : 79
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To On Entered Bit
function OnBit(iNo) {
    var iResult = 0;
    var iMask = 0X0000000F;
    iResult = iNo | iMask;
    return iResult;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var iNo = 137;
    var iret = 0;
    console.log("Jay Ganesh....");
    //Call To OnBit Function
    iret = OnBit(iNo);
    //Printing Modified Number
    console.log("Modified Number is :", iret);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main function
main();
