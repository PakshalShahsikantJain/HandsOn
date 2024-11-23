/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To Accept Number From User and Print That Number of $ and * on Screen
*/

//Function To Print  Pattern
function Pattern(No : number) 
{
    var i : number = 0;

    //Logic
    for(i = 0;i < No;i++)
    {
        process.stdout.write("$\t*\t");
    }
}

//Main Function
function main() 
{
    var No : number = 5;

    console.log("Jay Ganesh...");

    //Call To Pattern Function
    Pattern(No);
}

//Call To Main Function
main();