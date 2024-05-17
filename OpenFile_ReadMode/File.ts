/*
    Author : Pakshal Shashikant Jain 
    Date : 16/05/2024
    Program : Write application which accept file name from user and open that file in read mode.

              Input : Demo.txt
              Output : File opened successfully. 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import { readFile, writeFile } from 'fs';

//Function To Open File In Read Mode
function OpenFile(name : string)
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
    OpenFile("Demo.txt");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();
