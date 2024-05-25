"use strict";
/*
    Author : Pakshal Shashikant Jain
    Date : 25/05/2024
    Program : Write a program which accepts file name from user and count number of
              small characters from that file.

              Input : Demo.txt
              Output : Number of small characters are 21
*/
exports.__esModule = true;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Required Libraries
var fs_1 = require("fs");
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Count Small Characters From File 
function CountSmall(fname) {
    var data = " ";
    var arr;
    var i = 0;
    var icnt = 0;
    try {
        //Reading Data From File
        data = (0, fs_1.readFileSync)(fname, 'utf-8');
        console.log("Data From File is : ");
        console.log(data);
    }
    catch (err) {
        console.log("Unable to Read Data From File : ", err);
    }
    //Storing Data From File in Local Array 
    arr = Array.from(data);
    //Counting Number of Small Characters From File 
    for (i = 0; i < arr.length; i++) {
        if ((arr[i] >= 'a') && (arr[i] <= 'z')) {
            icnt++;
        }
    }
    //Returning Count of Small Characters 
    return icnt;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var iret = 0;
    var fname = "Count.js";
    console.log("Jay Ganesh......");
    //Call To ContSmall Function
    iret = CountSmall(fname);
    //Printing Count of Small Characters 
    console.log("Count of Small Characters From File is : %d", iret);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
