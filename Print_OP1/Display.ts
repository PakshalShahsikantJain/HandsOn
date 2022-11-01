/*
    Author : Pakshal Jain
    Date : 20/09/2022
    Program : Accept one number from user and print that number of even numbers on screen
*/

//Function To Display Even Numbers
function Display(No : number)
{
    var i : number = 0;

    console.log("Printing %d Even Numbers",No);
    for(i = 1;i <= No;i++)
    {
        console.log("%d",i*2);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    var no : number = 7;

    console.log("Jay Ganesh....");
    //Call To Display Function
    Display(no);
}

//Call To Main Function
main();