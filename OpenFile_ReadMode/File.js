"use strict";
/*
    Author : Pakshal Shashikant Jain
    Date : 16/05/2024
    Program : Write application which accept file name from user and open that file in read mode.

              Input : Demo.txt
              Output : File opened successfully.
*/
exports.__esModule = true;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Required Libraries
var fs_1 = require("fs");
//Function To Open File In Read Mode
function OpenFile(name) {
    (0, fs_1.readFile)(name, 'utf8', function (err, data) {
        if (err != null) {
            console.log("Unable to Open File", err);
        }
        else {
            console.log("File Opened Successfully, Data From File : ", data);
        }
    });
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay Ganesh.....");
    //Call To Open File Function
    OpenFile("Demo.txt");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
