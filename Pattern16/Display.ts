/*
    Author : Pakshal Shahikant Jain 
    Date : 15/03/2023
    Program : To Print Below Given Pattern 
    
    Input : iRow = 3 iCol = 4
    Output : 1 2 3 4
             5 6 7 8
             9 10 11 12 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern 
function Pattern(No : number,No2 : number)
{
    var i : number = 0;
    var j : number = 0;
    var k : number = 1;

    //Logic To Print Pattern 
    console.log("Printing Given Pattern : ");
    for(i = 0;i < No;i++)
    {
        for(j = 0;j < No2;j++)
        {
            process.stdout.write(k+"\t");
            k = k + 1;
        }
        console.log();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 3;
    var No2 : number = 4;

    console.log("Jay Ganesh....");

    //Call To Pattern Function
    Pattern(No,No2);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To main Function
main();