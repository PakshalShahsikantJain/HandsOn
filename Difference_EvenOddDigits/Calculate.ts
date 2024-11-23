/*
    Auhtor : Pakshal Jain
    Date : 20/10/2022
    Program : To Calculate Difference Between Summation of Even and odd Digits of Entered Number
*/

//Functio TO Caluclate Difference
function Difference(No : number) 
{
    var Diff : number = 0;
    var Sum : number = 0;
    var Sum2 : number = 0;
    var Digits : number = 0;

    //Logic
    while(No != 0)
    {
        Digits = No % 10;
        if(Digits % 2 == 0)
        {
            Sum = Sum + Digits;
        }
        else if(Digits % 2 != 0)
        {
            Sum2 = Sum2 + Digits;
        }
        No = Math.floor(No / 10);
    }

    Diff = Sum - Sum2;

    return Diff;
}

//Main Function
function main() 
{
    var no : number = 2395;
    var iret : number = 0;

    console.log("Jay Ganesh...");

    //Call To Difference
    iret = Difference(no);

    //Printing Difference Calculated
    console.log("Difference Between Summation of Even and Odd Digits is : %d",iret);
}

//Call To Main Function
main();