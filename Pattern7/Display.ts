/*  
    Author : Pakshal Jain 
    Date : 17/02/2023
    Program : To Print Below Given Pattern
*/

////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern
function Pattern(No : number) 
{
    var i : number = 0;

    //Logic To Print Given Pattern
    for(i = 1;i <= No;i++)
    {
        process.stdout.write("#  "+i+"  *  ");
    }
}

//////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 5;

    console.log("Jay Ganesh....");

    //Call To Pattern Function
    Pattern(No);
}

////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();