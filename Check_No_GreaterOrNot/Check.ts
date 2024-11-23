/*
    Author : Pakshal Jain
    Date : 09/10/2022
    Program : To Check Entered Number is Greater Than 100 or Not
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function Check (No : number) : boolean
{
    if(No > 100)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    var No : number = 56;

    var bret : boolean = false;
    console.log("Jay Ganesh......");

    //Call To Check Function
    bret = Check(No);

    if(bret == true)
    {
        console.log("Entered Number %d is Greater Than 100",No);
    }
    else 
    {
        console.log("Entered Number %d is Less Than 100",No);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

main();
