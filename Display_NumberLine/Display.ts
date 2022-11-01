/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To Accept Number From User and Print Number Line Of Entered Number
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print NumberLine
function NumberLine(No : number) 
{
    var i : number = 0;

    //Logic
    console.log("Printing NumberLine of Entered Number");
    for(i = -No;i <= No;i++)
    {
        process.stdout.write(i+"\t");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 8;

    console.log("Jay Ganesh...");

    //Call To Numberline Function
    NumberLine(No);
}

main();