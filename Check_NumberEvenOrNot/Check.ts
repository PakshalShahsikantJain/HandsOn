/*
    Author : Pakshal Jain
    Date : 19/09/2022
    Program : To Check Whether Entered Number is Even or Not
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Eneterd Number is Even or Not
function Check(No : number ) 
{
    if(No % 2 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    var no : number = 12;
    var bret : Boolean = false;

    console.log("Jay Ganesh.....");
    // Call To Check Function
    bret = Check(no);

    if(bret == true)
    {
        console.log("Entered NUmber is Even");
    }
    else 
    {
        console.log("Entered Number is Odd");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();