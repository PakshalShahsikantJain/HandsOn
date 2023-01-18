/*
    Author : Pakshal Jain
    Date : 18/01/2023
    Program : Accept number from user and display below pattern.
    
    Input : 5
    Output : A B C D E
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern
function Display(No : number )
{
    var i : number = 0;
    var Sum : number = 0;
    var Ch : String = " ";

    //Logic To Print Given Pattern
    for(i = 0;i < No;i++)
    {
        Sum = i + 65;
        Ch = String.fromCharCode(Sum);

        console.log(Ch);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 5;
    console.log("Jay Ganesh....");

    //Call To Display Function
    Display(No);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();