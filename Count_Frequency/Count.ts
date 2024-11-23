/*
    Author : Pakshal Jain
    Date : 17/10/2022
    Program : To Count Frequency of Two in Entered 
*/

//Function To Count Frequecy of Two Present in Entered Number
function Frequency(No : number)
{
    var icnt : number = 0;
    var Digit : number = 0;

    //Logic To Count 
    while(No != 0)
    {
        Digit = No % 10;
        if(Digit == 2)
        {
            icnt++;
        }
        No = Math.floor(No / 10);
    }

    return icnt;
}

//Main Function
function main()
{
    var No : number = 46542426;
    var iret : number = 0;

    console.log("Jay Ganesh...");

    //call To Frequecny Function
    iret = Frequency(No);

    //Printing Frequecy of 2 Present in Entered Number
    console.log("Frequency of 2 in Entered number is : %d",iret);
}

//Call To Main Function
main();