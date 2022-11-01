/*
    Author : Pakshal Jain
    Date :18/09/2022
    Program : To Print Hello if Entered Number is Less 10 or else Print Demo
*/

//Function to Print Output
function Display(No : number) 
{
    if(No < 10)
    {
        console.log("Hello");
    }
    else 
    {
        console.log("Demo");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function main()
{
    var No : number = 5;

    console.log("Jay Ganesh.....");
    Display(No);
}   

////////////////////////////////////////////////////////////////////////////

main();