"use strict";
/*
    Author : Pakshal Shashikant Jain
    Date : 27/05/2024
    Program : Write a program which accepts file name and one character from user and
              count number of occurrences of that characters from that file.

              Input : Demo.txt ‘M’
              Output : Frequency of M is 7
*/
exports.__esModule = true;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Required libraries
var fs_1 = require("fs");
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Count Frequecny of Character From File
function CountChar(fname, ch) {
    var data = " ";
    var arr;
    var i = 0;
    var icnt = 0;
    try {
        //Reading Data From File 
        data = (0, fs_1.readFileSync)(fname, 'utf-8');
        console.log("File Opened Successfully");
        console.log("Data From File is : ");
        console.log(data);
    }
    catch (err) {
        console.log("Unable To Open File :", err);
    }
    //Storing Data in Local Array 
    arr = Array.from(data);
    //Counting Frequecy of Entered Character 
    for (i = 0; i < arr.length; i++) {
        if (arr[i] == ch) {
            icnt++;
        }
    }
    //Returning Frequency of Entered Character
    return icnt;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var str = "Count.js";
    var ch = 'E';
    var iret = 0;
    console.log("Jay Ganesh.....");
    //Call To CountChar Function
    iret = CountChar(str, ch);
    //Printing Count of Entered Character
    console.log("Count of Character From File is : %d", iret);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
