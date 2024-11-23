/*
    Author : Pakshal Shashikant Jain 
    Date : 20/05/2024
    Program : Write application which accept file name from user and one string from user. Write
              that string at the end of file.

              Input : Demo.txt
                      Hello World

              Output : Write Hello World at the end of Demo.txt file 
*/

//Required Libraries
import { readFile,writeFile,appendFile } from "fs";

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Append Data into File
function Append(fname : string,data : string) 
{
    //Appending / Writing Data At The End of File
    appendFile(fname,data,'utf-8',(err)=> {
        if(err != null) {
            console.log("An Error Occured While Appending Data into File");
        } else {
            console.log("Data Successfully Appended into File");
        }
    });
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    var fname : string = "Demo.txt";
    var data : string = "Sneha Nair";

    console.log("Jay Ganesh.....");

    //Call To Append Function
    Append(fname,data);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();