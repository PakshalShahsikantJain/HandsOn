/*
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and return
              summation of its digits.
              Input : 879
              Output : 24 
*/

class Digits 
{
    //Characteristics of Class
    isum : number;  //Instance Variable of Class
    ino : number;   //Instance Variable of Class

    //Constructor of Class
    constructor(ivalue : number)
    {
        this.isum = 0;
        this.ino = ivalue;
    } 

    //Behaviour of Class
    SumDigits() : number
    {
        var Digits : number = 0;

        //Logic To calculate Summation of Digits of Entered Number
        Digits = this.ino % 10;
        this.isum = this.isum + Digits;
        this.ino = Math.floor(this.ino / 10);

        if(this.ino != 0)
        {
            //Recursive Function Call To SumDigits Function
            this.SumDigits();
        }

        return this.isum;
    }
}

//Main Function
function main() 
{
    var ino : number  = 879;
    var iret : number = 0;

    console.log("Jay Ganesh.........");

    //Creating object of Digits Class
    var dobj : Digits = new Digits(ino);

    //Call To Behaviour of Class
    iret = dobj.SumDigits();

    console.log("Sum of Digits of Entered Number is : %d",iret);
}

//Call To Main Function
main();