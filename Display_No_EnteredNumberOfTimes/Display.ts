/*
    Author : Pakshal Jain
    Date : 18/09/2022
    Program : To display first number in second number of times
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Output
function Display(No : number,No2 : number)
{
    var i : number = 0;

    if(No2 < 0) 
    {
        No2 = -No2;
    }
    for(i = 0;i < No2;i++)
    {
        console.log("%d",No);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function main()
{
    var No : number = -12;
    var No2 : number = -5;

    console.log("Jay Ganesh...");
    //Call To Display Function
    Display(No,No2);   
}
//Call To Main Function
main();