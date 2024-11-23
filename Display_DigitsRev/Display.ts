/*
    Author : Pakshal Jain
    Date : 15/10/2022
    Program : To Printing Digits of Entered Number in Reverse Order
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display
function Display(No : number) 
{
    var Digit : number = 0;

    console.log("Printing Digits in Reverse Order : ");
    //Logic To Print Digits of Entered Number in Reverse Order
    while(No != 0)
    {
        Digit = No % 10;
        console.log("%d",Digit);
        No = Math.floor(No / 10);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 252871;

    console.log("Jay Ganesh....");

    //Call To Display Function
    Display(No);
}

//Call To Main Function
main();