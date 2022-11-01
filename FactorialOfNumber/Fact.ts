/*
    Author : Pakshal Jain
    Date : 23/10/2022
    Program : To Calculate Factorial of Entered Number
*/

//////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Factorial
function Factorial(No : number) 
{
    var i : number = 0;
    var fact : number = 1;

    //Handeling Condition if Entered Number is Negative
    if(No < 0)
    {
        No = -No;
    }

    //Logic
    for(i = No;i > 0;i--)
    {
        fact = fact * i;
    }

    return fact;
}

////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    var no : number = -5;
    var iret : number = 0;

    console.log("Jay Ganesh....");

    //Call To Factorial Function
    iret = Factorial(no);

    //Printing Factorial
    console.log("Factorial of Entered Number is : %d",iret);
}

//Call To Main Function
main();