"use strict";
/*
    Author : Pakshal Shashikant Jain
    Date : 28/05/2024
    Program : Write a program which accepts file name and one count from user and read
              that number of characters from starting position.

              Input : Demo.txt 12
              Output : Display first 12 characters from Demo.txt
*/
exports.__esModule = true;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Required Libraries
var fs_1 = require("fs");
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Display First N Number of Characters From File 
function DisplayN(fname, isize) {
    var data = " ";
    try {
        //Reading Data From File 
        data = (0, fs_1.readFileSync)(fname, 'utf-8');
        //Printing First N Number of Characters From File 
        data = data.slice(0, isize);
        console.log(data);
    }
    catch (err) {
        console.log("An Error Occured : ", err);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var fname = "Display.js";
    var ino = 56;
    console.log("Jay Ganesh.....");
    //Call To DisplayN Function
    DisplayN(fname, ino);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
