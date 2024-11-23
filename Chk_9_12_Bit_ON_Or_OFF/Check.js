/*
    Author : Pakshal Shashikant Jain
    Date : 09/09/2023
    Program : Write a program which accept one number from user and check whether
              9th or 12th bit is on or off.
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Check Bit is on or off
function ChkBit(iNo) {
    //  0     0     0     0     0     1     0     0
    var iMask = 0X00000100; //  0000  0000  0000  0000  0000  0001  0000  0000
    //  0     0     0     0     0     8     0     0                                                            
    var iMask2 = 0X00000800; //  0000  0000  0000  0000  0000  1000  0000  0000
    var iResult = 0;
    var iResult2 = 0;
    if (iNo < 0) {
        iNo = -iNo;
    }
    //Logic to Check Bit is on or off
    iResult = iNo & iMask;
    iResult2 = iNo & iMask2;
    if ((iResult == iMask) || (iResult2 == iMask2)) {
        return true;
    }
    else {
        return false;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var bret = false;
    var No = 2035;
    console.log("Jay Ganesh.....");
    //Call To ChkBit function
    bret = ChkBit(No);
    //Handeling Condition if bret is True
    if (bret == true) {
        console.log("One or Both Bits are ON");
    }
    else {
        console.log("Both BITS are OFF");
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
