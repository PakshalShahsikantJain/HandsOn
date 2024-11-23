/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Number From user and Print First Five Multiples of Entered Number
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Multiples
function Multiples(No : number) 
{
    var i : number = 0;
    var Mult : number = 0;

    //Logic
    console.log("Printing First Five Multiples of Entered Number");
    for(i = 1;i <= 5;i++)
    {
        Mult = No * i;
        process.stdout.write(Mult+"\t");    
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 8;

    console.log("Jay Ganesh...");

    //Call To Multiples Function
    Multiples(No);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
main();