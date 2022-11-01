/*
    Author : Pakshal Jain
    Date : 19/10/2022
    Program : To Count Frequecy of Digits in Entered Number
*/

//////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Frequency
function Frequency(No : number)
{
    var Digit : number = 0;
    var icnt : number = 0;

    //Logic
    while(No != 0)
    {
        Digit = No % 10;
        if(Digit % 2 == 0)
        {
            icnt++;
        }
        No = Math.floor(No / 10);
    }

    return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() 
{
    var no : number = 872;
    var iret : number = 0;

    console.log("Jay Ganesh...")

    //Call To Frequency Function
    iret = Frequency(no);

    console.log("Frequecny of Even Digits of Entered Number is : %d",iret);
}

main();