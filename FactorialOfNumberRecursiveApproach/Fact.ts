/*
    Author : Pakshal Shashikant Jain 
    Date : 08/05/2024
    Program : Write a recursive program which accept number from user and return its
              factorial.
              
              Input : 5
              Output : 120 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Factorial
{
    //Characteristics of Class
    imult : number;
    ino : number;

    //Constructor of Class
    constructor(value : number) 
    {
        this.imult = 1;
        this.ino = value;
    }

    //Behaviour of Class
    Fact() : number
    {
        if(this.ino != 0)
        {
            this.imult = this.imult * this.ino;
            this.ino--;

            //Recursive Call
            this.Fact();
        }

        return this.imult;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    var iret : number = 0;

    console.log("Jay Ganesh....");

    //Creating object of Factorial Class
    var fobj : Factorial = new Factorial(5);

    //Call To Behaviour of Class
    iret = fobj.Fact();

    //Printing Factorial Calculated
    console.log("Factorial of Entered Number is : %d",iret);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();