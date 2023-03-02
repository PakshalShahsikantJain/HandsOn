/*
    Author : Pakshal Jain
    Date : 02/03/2023
    Program : To Print Below Given Pattern

    Input : iRow = 3 iCol = 5
    Output : 5 4 3 2 1
             5 4 3 2 1
             5 4 3 2 1 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern
function Display(No : number,No2 : number)
{
    var i : number = 0;
    var j : number = 0;

    //Logic To Print Pattern
    console.log("Printing Given Pattern... : ");
    for(i = 1;i <= No;i++)
    {   
        for(j = No2;j > 0;j--)
        {
            process.stdout.write(j+"\t");
        }
        console.log();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 3;
    var No2 : number = 5;

    console.log("Jay Ganesh....");
    
    //Call To Display Function
    Display(No,No2);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();