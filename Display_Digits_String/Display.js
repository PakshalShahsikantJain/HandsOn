/*
    Author : Pakshal Shashikant Jain
    Date : 15/08/2023
    Program : Write a program which accept string from user and display only
              digits from that string.

              Input : “marve89llous121”
              Output : 89121
              Input : “Demo”
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Print Digits From Entered String 
function StrDigits(arr) {
    var i = 0;
    //Logic To Print Digits Present in Entered String 
    console.log("Printing Digits From Entered String : ");
    while (i != arr.length) {
        if ((arr[i] >= '0') && (arr[i] <= '9')) {
            process.stdout.write(arr[i]);
        }
        i++;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    //Initializing Values To Variables
    var str = "marve89llous121";
    var arr = [];
    console.log("Jay Ganesh.....");
    //Converting String To Character array
    arr = Array.from(str);
    //Call To StrDigits Function
    StrDigits(arr);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
