/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Radius From user and Calculate Area From user
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Area of Circle
function Calculate(No : number) : number
{
    var area : number = 0;

    //Logic
    area = 3.14 * No * No;

    return area;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 5.3;
    var fret : number = 0.0;

    console.log("Jay Ganesh....");

    //Call To Calculate Function
    fret = Calculate(No);
    //Printing Area of Circle
    console.log("Area of Circle is : %f",fret);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();