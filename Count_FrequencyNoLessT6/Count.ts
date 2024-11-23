//Function To Count Frequecny
function Frequency(No : number) : number
{
    var Digit : number = 0;
    var icnt : number = 0;

    //Logic
    while(No != 0)
    {
        Digit = No % 10;
        if(Digit < 6)
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
    var No : number = 6547;
    var iret : number = 0;

    console.log("Jay Ganesh...");
    //Call To Frequecy Function
    iret = Frequency(No);

    console.log("Frequecy of Digits Less Than 6 is : %d",iret);
}

//Call To Main Function
main()
