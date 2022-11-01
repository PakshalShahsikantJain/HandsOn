/*
    Author : Pakshal Jain
    Date : 12/10/2022
    Print : To Calulate Multiplication of Three Numbers 
*/

//Function To Call Mult Function
function Mult(No : number,No2 : number,No3 : number) : number
{
    var ans : number = 0;

    //Handeling Conditions if Any of Entered Number is Zero
    if((No == 0)&&(No2 == 0))
    {
        ans = No3;
    }
    else if((No2 == 0)&&(No3 == 0))
    {
        ans = No;
    }
    else if((No == 0)&&(No3 == 0))
    {
        ans = No2;
    }
    else if(No == 0)
    {
        ans = No2 * No3;
    }
    else if(No2 == 0)
    {
        ans = No * No3;
    }
    else if(No3 == 0)
    {
        ans = No * No3;
    }
    //Handeling Condition if Any of Entered Number is Not Zero
    else 
    {
        ans = No * No2 * No3;
    }

    return ans;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function main()
{
    //Requried variables
    var No : number = 1;
    var No2 : number = 1;
    var No3 : number = 2;
    var iret : number = 0;

    console.log("Jay Ganesh....");

    //Handeling Condtion if All Entered Numbers are Zero
    if((No == 0)&&(No2 == 0)&&(No3 == 0))
    {
        iret = No * No2 * No3;
    }
    else 
    {   
        //Call to Mult Function
        iret = Mult(No,No2,No3);
    }
    
    //Printing Final Output
    console.log("Multiplication of Three Entered Number is : %d",iret);
}

//Call To Main Function
main();