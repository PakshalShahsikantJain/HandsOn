/*
    Author : Pakshal Jain 
    Date : 02/03/2023
    Program : To Print Below Given Pattern

    Input : iRow = 3 iCol = 4
    Output : * # * #
             * # * #
             * # * # 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern
function Pattern(No : number,No2 : number) 
{
    var i : number = 0;
    var j : number = 0;

    //Logic To Print Pattern
    console.log("Printing Given Pattern");
    for(i = 1;i <= No;i++)
    {
        for(j = 1;j <= No2;j++)
        {
            if(j % 2 != 0) 
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

//////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 3;
    var No2 : number = 4;

    console.log("Jay Ganesh...");

    Pattern(No,No2);
}

///////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();