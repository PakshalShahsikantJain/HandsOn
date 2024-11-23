"use strict";
/*
    Author : Pakshal Shashikant Jain
    Date : 20/05/2024
    Program : Write application which accept file name from user and one string from user. Write
              that string at the end of file.

              Input : Demo.txt
                      Hello World

              Output : Write Hello World at the end of Demo.txt file
*/
exports.__esModule = true;
//Required Libraries
var fs_1 = require("fs");
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function To Append Data into File
function Append(fname, data) {
    //Appending / Writing Data At The End of File
    (0, fs_1.appendFile)(fname, data, 'utf-8', function (err) {
        if (err != null) {
            console.log("An Error Occured While Appending Data into File");
        }
        else {
            console.log("Data Successfully Appended into File");
        }
    });
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var fname = "Demo.txt";
    var data = "Sneha Nair";
    console.log("Jay Ganesh.....");
    //Call To Append Function
    Append(fname, data);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
