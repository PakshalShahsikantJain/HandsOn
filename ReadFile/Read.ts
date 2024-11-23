/*
    Author : Pakshal Shashikant Jain 
    Date : 19/05/2024
    Program : Write application which accept file name from user and read all data from that file
              and display contents on screen.
            
              Input : Demo.txt
              Output : Display all data of file. 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import { readFile, writeFile } from 'fs';

//Function To Read File
function ReadFile(name : string)
{
    readFile(name,'utf8',(err,data)=>{
        if(err != null) {
            console.log("Unable to Open File",err);
        } else {
            console.log("File Opened Successfully, Data From File : ",data);
        }
    })
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay Ganesh.....");

    //Call To Open File Function
    ReadFile("Read.c");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();
