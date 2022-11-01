/*
    Author : Pakshal Jain
    Date : 24/10/2022
    Program : To Display Table of Entered Number
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Table 
function Table(No : number,No2 : number) 
{
    var i : number = 0;
    var table : number = 0;

    //Printing Table of Entered Number
    console.log("Printing Table of Entered Number");
    for(i = 1;i <= No2;i++)
    {
        table = No * i;
        console.log("%d",table);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 2;
    var No2 : number = 10;

    console.log("Jay Ganesh....");

    //call To table Function
    Table(No,No2);
}

//Main Function
main()