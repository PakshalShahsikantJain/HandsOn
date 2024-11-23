/*
    Author : Pakshal Shashikant Jain
    Date : 30/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 5 4 3 2 1
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern
function Display(ino : number)
{
    if(ino < 1)
    {
        return;
    }
    else 
    {
        process.stdout.write(ino+"\t");
        ino--; 

        //Recursive Function call
        Display(ino);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay Ganesh....");

    console.log("Output : ");
    
    //Call To Display Function
    Display(5);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();