/*
    Author : Pakshal Jain
    Date : 15/10/2022
    Program : To Calculate Percentage
*/

//Function To Calculate Percentage
function Percentage(No : number,No2 : number)
{
    //Logic To Calculate Percentage
    var ans : number = 0.0;

    ans = No2 / No * 100;

    return ans;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var no : number = 1000;
    var no2 : number = 745;
    var fret : number = 0.0;

    console.log("Jay Ganesh...");

    //Call To Percentage Fucntion
    fret = Percentage(no,no2);

    //Printing Final Output
    console.log("Percentage is : %d",fret,"%");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();