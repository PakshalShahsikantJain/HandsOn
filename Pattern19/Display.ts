/*
    Author : Pakshal Shashikant Jain 
    Date : 18/03/2023
    Program : To Print Below Given Pattern
    
    Input : iRow = 5 iCol = 5
    Output : a b c d e
             1 2 3 4 5
             a b c d e
             1 2 3 4 5
             a b c d e
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern 
function Pattern(No : number,No2 : number) 
{
    var i : number = 0;
    var j : number = 0;

    //Logic To Print Pattern
    console.log("Printing Below Given Patter : ");
    for(i = 0;i < No;i++) 
    {
        for(j = 0;j < No2;j++)
        {
            if(i % 2 == 0)
            {
                process.stdout.write(String.fromCharCode(j + 97)+"\t");
            }
            else 
            {
                process.stdout.write((j + 1)+"\t");
            }
        }
        console.log();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 5;
    var No2 : number = 5;

    console.log("Jay Ganesh.....");

    //Call To Pattern Function
    Pattern(No,No2);
}

//Call To main Function
main();