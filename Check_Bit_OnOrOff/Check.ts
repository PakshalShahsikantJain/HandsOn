/*
    Author : Pakshal Shashikant Jain
    Date : 30/08/2023
    Program : Write a program which checks whether 15th bit is On or OFF.
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Bit is on or off
function ChkBit(iNo : number) : boolean 
{
    var iResult : number = 0;
    var iMask : number = 0X00004000;

    if(iNo < 0)
    {
        iNo = -iNo
    }

    //Logic to Check Bit is on or off
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main() 
{
    var bret : boolean = false;
    var No : number = 16547;

    console.log("Jay Ganesh.....");

    //Call To ChkBit function
    bret = ChkBit(No);

    //Handeling Condition if bret is True
    if(bret == true)
    {
        console.log("15th Bit is On");
    }
    else
    {
        console.log("15th Bit is OFF");
    }
}

main();