/*
    Author : Pakshal Jain
    Date : 30/10/2022
    program : To Convert Sqft into SqM
*/

//function to Convert Convert 
function Convert(No : number)
{
    var ans : number = 0;

    ans = No * 0.0929;

    return ans;
}

//Main Function
function main()
{
    var No : number = 5;
    var fret : number = 0.0;

    console.log("Jay Ganesh...");

    //Call To Convert Function
    fret = Convert(No);

    console.log("Converted SqFt To SqM is :%d",fret);
}

//Main Function
main();