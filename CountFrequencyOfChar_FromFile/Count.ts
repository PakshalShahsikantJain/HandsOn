/*
    Author : Pakshal Shashikant Jain 
    Date : 27/05/2024
    Program : Write a program which accepts file name and one character from user and
              count number of occurrences of that characters from that file.

              Input : Demo.txt ‘M’
              Output : Frequency of M is 7 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import {readFileSync} from "fs"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Frequecny of Character From File
function CountChar(fname : string,ch : string) 
{
    var data : string = " ";
    var arr : any[];
    var i : number  = 0;
    var icnt : number = 0;

    try 
    {
        //Reading Data From File 
        data = readFileSync(fname,'utf-8');
        
        console.log("File Opened Successfully");
        console.log("Data From File is : ");
        console.log(data);
    }
    catch(err)
    {
        console.log("Unable To Open File :",err);
    }

    //Storing Data in Local Array 
    arr = Array.from(data);

    //Counting Frequecy of Entered Character 
    for(i = 0;i < arr.length ;i++)
    {
        if(arr[i] == ch)
        {
            icnt++;
        }
    }
    
    //Returning Frequency of Entered Character
    return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var str : string = "Count.js";
    var ch : string = 'E';
    var iret : number = 0;

    console.log("Jay Ganesh.....");

    //Call To CountChar Function
    iret = CountChar(str,ch);

    //Printing Count of Entered Character
    console.log("Count of Character From File is : %d",iret);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();