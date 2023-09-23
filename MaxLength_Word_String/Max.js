/*
    Author : Pakshal Shashikant Jain
    Date : 23/09/2023
    Program : Write a program which accept string from user and return length of
              largest word.

              Input : "Marvellous Multi OS Infosystems"
              Output : 11
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Find Length of Largest Word
function MaxWordLen(arr) {
    var i = 0;
    var icnt = 0;
    var iMax = 0;
    if (arr == null) {
        return -1;
    }
    //Logic To Find
    while (i != arr.length) {
        if (arr[i] == ' ') {
            while ((arr[i] == ' ') && (i != arr.length)) {
                i++;
            }
            icnt = 0;
        }
        else {
            icnt++;
            if (icnt > iMax) {
                iMax = icnt;
            }
            i++;
        }
    }
    return iMax;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    var str = "Marvellous Multi OS Infosystems";
    var arr = [];
    console.log("Jay Ganesh......");
    //Creating Character array of Entered String
    arr = Array.from(str);
    //Call To MaxWordLen Function
    iret = MaxWordLen(arr);
    //Printing Length of Largest Word
    console.log("Length of Largest Word is : %d", iret);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
