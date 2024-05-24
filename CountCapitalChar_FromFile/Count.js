"use strict";
/*
    Author : Pakshal Shashikant Jain
    Date : 24/05/2024
    Program : Write a program which accepts file name from user and count number of
              capital characters from that file.

              Input : Demo.txt
              Output : Number of capital characters are 23
*/
exports.__esModule = true;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Required Libraries
var fs_1 = require("fs");
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Count Capital Characters From File
function CountCapital(fname) {
    var arr;
    var icnt = 0;
    var i = 0;
    try {
        //Reading Data From File and Storing it in Local Array  
        var data = (0, fs_1.readFileSync)(fname, 'utf-8');
        arr = Array.from(data);
        //Counting Number of Capital Characters From File 
        for (i = 0; i < arr.length; i++) {
            if ((arr[i] >= 'A') && (arr[i] <= 'Z')) {
                icnt++;
            }
        }
        return icnt;
    }
    catch (err) {
        console.log("An Error Occured While Reading File", err);
        return -1;
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var fname = "Count.ts";
    var iret = 0;
    console.log("Jay Ganesh.....");
    //Call To CountCapital Function
    iret = CountCapital(fname);
    //Printing Count of Capital Characters
    console.log("Count of Capital Characters From File is : %d", iret);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
