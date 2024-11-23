/*
    Author : Pakshal Shashikant Jain
    Date : 04/03/2023
    Program : To Print Below Given Pattern
    Input : iRow = 3 iCol = 4
    Output : 1 1 1 1
             2 2 2 2
             3 3 3 3
             4 4 4 4   
*/

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
            process.stdout.write(i+"\t");
        }
        console.log();
    }
}

//Main Function
function main() 
{
    var No : number = 4;
    var No2 : number = 4;

    console.log("Jay Ganesh....");

    //Call To Pattern Function
    Pattern(No,No2);
}

main();