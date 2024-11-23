/*
    Author : Pakshal Shashikant Jain 
    Date : 26/03/2023
    Program : To Print Below Given Pattern 
    
    Input : iRow = 4 iCol = 4
    Output : * * * *
             * * * #
             * * # #
             * # # # 
*/

///////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern 
function Pattern(No : number,No2 : number) 
{
    var i : number = 0;
    var j : number = 0;

    //Logic To Print Pattern 
    console.log("Printing Below Given Pattern : ");
    for(i = 1;i <= No;i++)
    {
        for(j = No2;j > 0;j--)
        {
            if((i == j)||(i < j)) 
            {
                process.stdout.write("*\t");
            }
            else 
            {
                process.stdout.write("#\t");
            }
        }
        console.log();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 4;
    var No2 : number = 4;

    console.log("Jay Ganesh...");

    //Call To Pattern Function
    Pattern(No,No2);
}

//Call To Main Function
main();