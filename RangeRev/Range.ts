/*
    Author : Pakshal Jain
    Date : 12/12/2022
    Program : To Display Entered Range in Reverse Order
*/

//Function to Dipslay Range in Reverse Order
function RangeRev(No : number,No2 : number)
{
    var i : number = 0;

    //logic
    for(i = No2;i >= No;i--)
    {   
        console.log(i);
    }
}

//Main Function
function main() 
{
    var No : number = -23;
    var No2 : number = 35;

    console.log("Jay ganesh...");

    //Handeling Condition if Entered Number is Negative or Starting Number is Greater Than Ending number
    if((No < 0)||(No > No2)) 
    {
        console.log("Invalid Range");
        return;
    }

    //Call To RangeRev Function
    RangeRev(No,No2);
}

//Call Main Function
main();