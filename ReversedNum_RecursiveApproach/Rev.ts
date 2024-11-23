/*
    Author : Pakshal Shashikant Jain 
    Date : 14/5/2024
    Program :  Write a recursive program which accept number from user and return its
               reverse number.

               Input : 523
               Output : 325  
*/

//////////////////////////////////////////////////////////////////////////////

//Start of Class
class RevNum
{
    //Characteristics of Class
    ino : number;
    rno : number;

    //Constructor of Class
    constructor(ivalue : number)
    {
        this.ino = ivalue;
        this.rno = 0;
    }

    //Behaviour of Class
    Reverse() : number
    {
        var Digit : number = 0;

        //Logic of Class
        if(this.ino != 0)
        {
            //Logic
            Digit = this.ino % 10;
            this.rno = (this.rno * 10) + Digit;
            this.ino = Math.floor(this.ino / 10);
            
            //Recursive Function Call To Behaviour of Class
            this.Reverse();
        }

        return this.rno;
    }
}

////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var ino : number = 5657;
    var iret : number = 0;

    console.log("Jay Ganesh....");
    
    //Creating object of RevNum Class
    var robj : RevNum = new RevNum(ino);

    //Call To Behaviour of Class
    iret = robj.Reverse();

    //Printing Reversed Number
    console.log("Reversed Number of Number %d is : %d",ino,iret);
}

////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();