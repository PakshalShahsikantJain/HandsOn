/*
    Author : Pakshal Shashikant Jain 
    Date : 07/04/2023
    Program : To Print Below Given Pattern 

    Input : iRow = 5 iCol = 5
    Output : $ * * * *
             # $ * * *
             # # $ * *
             # # # $ *
             # # # # $
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern
function Display(No : number,No2 : number) 
{
    var i : number = 0;
    var j : number = 0;

    //Logic To Print Given Pattern 
    console.log("Printing Below Given Pattern : ");
    for(i = 1;i <= No;i++)
    {
        for(j = 1;j <= No2;j++)
        {
            if(i == j)
            {
                process.stdout.write("$\t");
            }
            else if(i > j) 
            {
                process.stdout.write("#\t");
            }
            else 
            {
                process.stdout.write("*\t");
            }
        }
        console.log();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 5;
    var No2 : number = 5;

    console.log("Jay Ganesh...");

    //Call To Display Function
    Display(No,No2);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();