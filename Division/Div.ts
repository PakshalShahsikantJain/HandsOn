/*
    Author : Pakshal Jain 
    Date : 04/09/2022
    Program : To Calculate Division of Two Numbers
*/
function Division(No : number,No2 : number): number 
{
    let ans : number = 0;

    if(No2 == 0)
    {
        console.log("Invalid Input.....");
        return 0;
    }
    else if(No2 < 0)
    {
        No2 = -No2;
    }

    ans = No / No2;

    return ans ;
}

/////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    console.log("Jay Ganesh....");

    let no : number = 45;
    let no2 : number = -12;
    let ret : number = 0;

    ret = Division(no,no2);

    console.log("Division of Two Numbers is : %d",ret);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////
main();