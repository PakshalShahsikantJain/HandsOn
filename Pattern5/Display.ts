/*
    Author : Pakshal Jain
    Date : 19/01/2023
    Program : Accept number from user and display below pattern.

    Input : 5
    Output : 5 # 4 # 3 # 2 # 1 # 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function  To Display Given Pattern
function Display(No : number) 
{
    var i : number = 0;

    //Logic To Print Given Pattern
    console.log("Printing Given Pattern")
    for(i = No;i > 0;i--)
    {
        process.stdout.write(i+"\t"+"#\t");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 5;

    console.log("Jay Ganesh....");

    //Call To Display Function
    Display(No);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call TO Main Function
main();