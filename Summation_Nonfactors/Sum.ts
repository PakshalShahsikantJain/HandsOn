/*
    Author : Pakshal Jain
    Date : 05/10/2022
    Program : To Calculate Summation of Nonfactors of Entered Number
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calulate summation
function Summation(no : number) 
{
    var i : number = 0;
    var sum : number = 0;

    //Logic
    for(i = 1;i < no;i++)
    {
        if(no % i != 0)
        {
            sum = sum + i;
        }
    }

    return sum;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    var no : number = 12;
    var iret : number = 0;

    console.log("Jay Ganesh....");
    
    //Call To Summation Function
    iret = Summation(no);

    console.log("Summation of Non Factors of Entered Number is : %d",iret);
}

//Call To  Main Function
main();