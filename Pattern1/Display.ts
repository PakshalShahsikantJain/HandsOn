/*
    Author : Pakshal Jain
    Date : 14/09/2022
    Program : To Print * Entered Number of Times
*/

//Function To Print * 
function Pattern(No : number) : void 
{
    var i : number = 0;

    console.log("Printing * %d times",No);
    for(i = 0;i < No;i++)
    {
        process.stdout.write("*\t");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    console.log("Ganpati Bappa Morya....");
    var no : number = 10;
    
    //Call To Function
    Pattern(no);
}

main();