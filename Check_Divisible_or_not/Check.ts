/*
    Author : Pakshal Jain
    Date : 14/09/2022
    Program : To Check Whether Entered Number is Divisible By 5 or Not
*/

///////////////////////////////////////////////////////////////////////////////////////

function Check(No : number)
{
    if(No % 5 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    var No : number = 12;
    var bret : Boolean = false;

    console.log("Jay Ganesh......");
    bret = Check(No);

    if(bret == true) 
    {
        console.log("Entered Number is Divisible By 5");
    }
    else 
    {
        console.log("Entered Number is Not Divisible By 5");
    }
}   

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

main();