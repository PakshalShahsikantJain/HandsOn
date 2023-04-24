/*
    Author : Pakshal Shashikant Jain 
    Date : 19/04/2023
    Program : To Print Below Given Pattern 
    
    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4 5
             1 2     5
             1   3   5
             1     4 5
             1 2 3 4 5 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Given pattern 
function Pattern(No : number,No2 : number)
{
    //local Variables
    var i : number = 0;
    var j : number = 0;

    //Logic To Print Given Pattern
    process.stdout.write("Printing Below Given Pattern : ");
    for(i = 1;i <= No;i++)
    {
        for(j = 1;j <= No2;j++)
        {
            if((i == j)||(i == 1)||(j == 1)||(i == No)||(j == No2))
            {
                process.stdout.write(j+"\t");
            }
            else 
            {
                process.stdout.write(" \t");
            }
        }
        console.log()
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 6;
    var No2 : number = 6;

    console.log("Jay Ganesh....");

    //Call To Pattern Function
    Pattern(No,No2);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();