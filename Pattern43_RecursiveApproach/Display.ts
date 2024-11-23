/*
    Author : Pakshal Shashikant Jain
    Date : 29/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 1 2 3 4 5
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    static i : number = 1;    //Static Variable of Class(Class Variable)
    ino : number = 0;         //Non-Static Varibale of Class(Instance variable of Class)

    //Constructor of Class
    constructor(value : number)
    {
        this.ino = value;    //Instace varibale of Class is Accessed using this Keyword
    }

    //Behaviour of Class
    Display()
    {
        if(Pattern.i > this.ino)
        {
            return;
        }
        else 
        {
            process.stdout.write(Pattern.i+"\t");   //Class Varibale is accessed using Class Name
            Pattern.i++;    

            //Recursive Function Call
            this.Display();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    var ino : number = 0;

    console.log("Jay Ganesh.....");

    //Creating object of Pattern Class
    var pobj : Pattern = new Pattern(5);

    console.log("Output : ");
    
    //Call To Display Function
    pobj.Display();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
main();