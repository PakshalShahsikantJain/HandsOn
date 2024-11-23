/*
    Author : Pakshal Jain
    Date : 16/10/2022
    Program : To Check Entered Number Contains Zero or Not
*/

//Function To Check Entered Number Constains Zero or Not
function Check(No : number) 
{
    var Digit : number = 0;

    //Logic
    while(No != 0)
    {
        Digit = No % 10;
        if(Digit == 0)
        {
            break;
        }
        No = Math.floor(No / 10);
    }

    //Handeling Condition if Number Contains Zero
    if(Digit == 0)
    {
        return true;
    }
    //Handeling Condition if Number Does Not Contains Zero
    else 
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 1240456;
    var bret : boolean = false;

    console.log("Jay Ganesh...");

    //Call To Check Function
    bret = Check(No);

    //Handeling Condition if Return value is True
    if(bret == true)
    {
        console.log("Entered Number Contains Zero in it");
    }
    //Handeling Condition if Return value is False
    else 
    {
        console.log("Entered Number Does Not Constains Zero in it");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();