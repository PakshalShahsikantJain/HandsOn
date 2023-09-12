/*
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number , two positions from user and
              check whether bit at first or bit at second position is ON or OFF.

              Input : 10 3 7
              Output : FALSE
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Check Bit is ON or OFF
function CheckBit(iNo, iPos1, iPos2) {
    var iMask = 0X00000001;
    var iMask2 = 0X00000001;
    var iResult = 0;
    var iResult2 = 0;
    iMask = iMask << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);
    //Logic To Check
    iResult = iMask & iNo;
    iResult2 = iMask2 & iNo;
    if ((iResult == iMask) || (iResult2 == iMask2)) {
        return true;
    }
    else {
        return false;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iNo = 10;
    var iPos1 = 2;
    var iPos2 = 7;
    var bret = false;
    console.log("Jay Ganesh....");
    //Call To CheckBit Function
    bret = CheckBit(iNo, iPos1, iPos2);
    if (bret == true) {
        console.log("One or Both Bits are ON");
    }
    else {
        console.log("Both Bits are OFF");
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
