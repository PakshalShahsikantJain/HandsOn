/*
    Author : Pakshal Jain
    Date : 10/09/2022
    Program : Printing Marvellous Entered Number of Times
*/

function Display(No : number) : void 
{
    var i : number = 0;

    console.log("Printing Marvellous %d Times",No);

    for(i = 0;i < No;i++)
    {
        console.log("Marvellous");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    var No : number = 5;

    console.log("Jay Ganesh....");

    Display(No);
}   

////////////////////////////////////////////////////////////////////////////////////////////////////////

main();