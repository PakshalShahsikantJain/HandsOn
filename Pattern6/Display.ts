/*
    Author : Pakshal Jain
    Date : 16/02/2023
    Program : To Print Below Given Pattern

    Input : 5
    Output : 1 * 2 * 3 * 4 * 5 * 
*/

////////////////////////////////////////////////////////////////////////////////

//Function To Print Given Pattern
function Display(No : number) 
{
    var i : number = 0;

    //Logic To Print Given Pattern
    for(i = 1;i <= No;i++) {
        process.stdout.write(i+"\t"+"*\t");
    }
}

/////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 5;

    console.log("Jay Ganesh...");

    //Call To Display Function
    Display(No);
}

//Call To Main Function
main();