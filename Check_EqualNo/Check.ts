/*
    Author : Pakshal Jain 
    Date : 10/10/2022
    Program : To Check Entered Two Number Are equal or Not
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check
function Check(No : number,No2 : number) : boolean 
{
    if(No == No2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    var No : number = 12;
    var No2 : number = 12;
    var bret : boolean = false;

    console.log("Jay Ganesh....");

    //Call To Check Function
    bret = Check(No,No2);

    if(bret == true)
    {
        console.log("Entred Numbers %d and %d are Equal",No,No2);
    }
    else 
    {
        console.log("Entered Numbers %d and %d are Not Equal",No,No2);
    }
}

//Call To main Function
main();