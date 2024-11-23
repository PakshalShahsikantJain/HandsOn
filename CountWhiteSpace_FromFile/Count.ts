/*
    Author : Pakshal Shashikant Jain 
    Date : 26/05/2024
    Program : Write a program which accepts file name from user and count number of
              white spaces from that file.

              Input : Demo.txt
              Output : Number of white spaces are 13 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import {readFileSync} from 'fs';

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count WhiteSpace  From File
function CountWhiteSpace(fname : string) : number 
{
    var arr : any[];
    var icnt : number = 0;
    var i : number = 0;

    try 
    { 
        //Reading Data From File and Storing it in Local Array  
        const data = readFileSync(fname,'utf-8');
        arr = Array.from(data);

        //Counting Number of WhiteSpace From File 
        for(i = 0;i < arr.length;i++)
        {
            if(arr[i] == ' ')
            {
                icnt++;
            }
        }

        return icnt;
    }
    catch (err)
    {
        console.log("An Error Occured While Reading File",err);

        return -1;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var fname : string = "Count.cpp";
    var iret = 0;
    console.log("Jay Ganesh.....");

    //Call To CountWhiteSpace Function
    iret = CountWhiteSpace(fname);

    //Printing Count of WhiteSpace 
    console.log("Count of WhiteSpace From File is : %d",iret);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();