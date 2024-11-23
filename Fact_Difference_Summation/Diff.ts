/*
    Author : Pakshal Jain
    Date : 06/10/2022
    Program : To Find Summation of Factors and Nonfactors of Entered Number
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Difference
function Difference(No : number) 
{
    var i : number = 0;
    var sum : number = 0;
    var sum2 : number = 0;
    var diff : number = 0;

    for(i = 1;i < No;i++)
    {
        if(No % i == 0)
        {
            sum = sum + i;
        }
        else if(No % i != 0) 
        {
            sum2 = sum2 + i;
        }
    }

    diff = sum - sum2;

    return diff;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    var no : number = 12;
    var iret : number = 0;

    console.log("Jay Ganesh...");

    //Call To Difference Function
    iret = Difference(no);

    console.log("Difference Between Summation of Factors and Nonfactors is : %d",iret);
}

//Call To main Function
main();