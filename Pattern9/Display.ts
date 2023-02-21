/*
    Author : Pakshal Shashikant Jain 
    Date : 19/02/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 3
    Output :    1 2 3
                1 2 3
                1 2 3
                1 2 3 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern 
function Pattern(Row : number,Col : number)
{
    var i : number = 0;
    var j : number = 0;

    //Logic To Print Given Pattern
    console.log("Printing Given Pattern");
    for(i = 1;i <= Row;i++)
    {
        for(j = 1;j <= Col;j++)
        {
            process.stdout.write(j+"\t");
        }
        console.log();
        j = 0;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 4;
    var No2 : number = 3;

    console.log("Jay Ganesh....");

    //Call To Pattern Function
    Pattern(No,No2);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();