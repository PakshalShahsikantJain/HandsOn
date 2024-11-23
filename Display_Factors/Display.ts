/*
    Author : Pakshal Jain
    Date : 24/09/2022
    Program : To Display Factors of Entered Number
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function Display(No : number)
{
    var i : number = 0;

    if(No < 0)
    {
        No = -No;
    }
    
    console.log("Factors of Entered Number is As Follows");
    for(i = 1;i <= No;i++)
    {
        if(No % i == 0)
        {
            console.log("%d",i);
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    var no : number = -45;

    console.log("Jay Ganesh....");
    
    //Call To Display Function
    Display(no);
}


//Call To main Function
main();