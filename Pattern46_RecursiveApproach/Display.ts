/*
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and display below
              pattern.

              Input : 5
              Output : 5 * 4 * 3 * 2 * 1 * 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern
function Display(ino : number)
{
    if(ino < 1)
    {
        return;
    }
    else 
    {
        process.stdout.write(ino+"\t"+"*\t");
        ino--;

        //Recursive Function Call To Display Function
        Display(ino);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    var ino : number = 6;

    console.log("Jay Ganesh.....");

    console.log("Output : ");
    
    //Call To Display Function
    Display(ino)
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();