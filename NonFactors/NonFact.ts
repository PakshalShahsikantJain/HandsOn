/*
    Author : Pakshal Jain
    Date : 04/10/2022
    Program : To Print Nonfactors of Entered Number
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Nonfactors of Entered Number
function NonFact(no : number)
{
    var i : number = 0;

    for(i = 1;i < no;i++)
    {
        if(no % i != 0)
        {
            console.log("%d",i);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//main function
function main() 
{
    var No : number = 10;
    
    console.log("Ganapti Bappa Morya...");
    
    //Call To Nonfact Function
    NonFact(No);
}

//Call To main Function
main();