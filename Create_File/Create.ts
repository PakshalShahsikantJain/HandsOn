/*
    Author : Pakshal Shashikant Jain 
    Date : 17/05/2024
    Program : Write application which accept file name from user and create that file.
              
              Input : Demo.txt
              Output : File created successfully. 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import { readFile, writeFile } from 'fs';

//Function To Open File In Read Mode
function CreateFile(name : string)
{
    writeFile(name, "Jay Ganesh", (err) => {
        if (err) {
          console.error('Error writing to file:', err);
        } else {
          console.log('File has been written successfully.');
        }
      });
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay Ganesh.....");

    //Call To Open File Function
    CreateFile("Demo4.txt");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();
