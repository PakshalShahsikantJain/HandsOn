/*
    Author : Pakshal Jain
    Date : 29/10/2022
    Program : To Convert Entered KM into M
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert Km into M
function KmToM(No : number) 
{
    var ans : number = 0;

    ans = No * 1000;

    return ans;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 5;
    var fret : number = 0;

    console.log("Jay ganesh...");

    //Call To KmTom Function
    fret = KmToM(No);

    //Printing Converted Km
    console.log("Converted KM into M is : %d",fret);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();