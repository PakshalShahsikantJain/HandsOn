/*
    Author : Pakshal Shashikant Jain 
    Date : 14/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 3 iCol = 5
    Output : A A A A A
             B B B B B
             C C C C C
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern 
function Pattern(No : number,No2 : number) 
{
    var i : number = 0;
    var j : number = 0;

    //Logic To Print Pattern
    console.log("Printing Given Pattern : ");
    for(i = 0;i < No;i++)
    {
        for(j = 0;j < No2;j++)
        {
            process.stdout.write(String.fromCharCode(i + 65)+"\t");
        }
        console.log();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 3;
    var No2 : number = 4;

    console.log("Jay Ganesh...");

    //Call To Pattern Function
    Pattern(No,No2);
}

//Call To Main Function
main();