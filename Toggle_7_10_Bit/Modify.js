/*
    Author : Pakshal Shashikant Jain
    Date : 01/09/2023
    Program : Write a program which accept one number from user and toggle 7th and
              10th bit of that number. Return modified number.

              Input : 137
              Output : 713
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Toggle Entered Bit
function ToggleBit(iNo) {
    var iResult = 0; // 0    0    0    0    0    2    4    0
    var iMask = 0X00000240; // 0000 0000 0000 0000 0000 0010 0100 0000
    iResult = iNo ^ iMask;
    return iResult;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var iNo = 137;
    var iret = 0;
    console.log("Jay Ganesh....");
    //Call To ToggleBit Function
    iret = ToggleBit(iNo);
    //Printing Modified Number
    console.log("Modified Number is :", iret);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main function
main();
