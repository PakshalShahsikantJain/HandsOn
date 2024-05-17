"use strict";
/*
    Author : Pakshal Shashikant Jain
    Date : 17/05/2024
    Program : Write application which accept file name from user and create that file.
              
              Input : Demo.txt
              Output : File created successfully.
*/
exports.__esModule = true;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Required Libraries
var fs_1 = require("fs");
//Function To Open File In Read Mode
function CreateFile(name) {
    (0, fs_1.writeFile)(name, "Jay Ganesh", function (err) {
        if (err) {
            console.error('Error writing to file:', err);
        }
        else {
            console.log('File has been written successfully.');
        }
    });
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay Ganesh.....");
    //Call To Open File Function
    CreateFile("Demo4.txt");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
