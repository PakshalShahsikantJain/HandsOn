/*
    Author : Pakshal Shashikant Jain 
    Date : 9/5/2024
    Program : Write a recursive program which accept number from user and return its
              product of digits.

              Input : 523
              Output : 30 
*/

class Digits 
{
    //Characteristics of Class
    imult : number;  //Instance Variable of Class
    ino : number;   //Instance Variable of Class

    //Constructor of Class
    constructor(ivalue : number)
    {
        this.imult = 1;
        this.ino = ivalue;
    } 

    //Behaviour of Class
    Mult() : number
    {
        var Digits : number = 0;

        //Logic To calculate Products of Digits of Entered Number
        Digits = this.ino % 10;
        this.imult = this.imult * Digits;
        this.ino = Math.floor(this.ino / 10);

        if(this.ino != 0)
        {
            //Recursive Function Call To Mult Function
            this.Mult();
        }

        return this.imult;
    }
}

//Main Function
function main() 
{
    var ino : number  = 523;
    var iret : number = 0;

    console.log("Jay Ganesh.........");

    //Creating object of Digits Class
    var dobj : Digits = new Digits(ino);

    //Call To Behaviour of Class
    iret = dobj.Mult();

    console.log("Products of Digits of Entered Number is : %d",iret);
}

//Call To Main Function
main();