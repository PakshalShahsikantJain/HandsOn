/*
    Author : Pakshal Shashikant Jain 
    Date : 11/5/2024
    Program : Write a recursive program which accept number from user and return
              largest digit

              Input : 87983
              Output : 9   
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class MaxDigit
{
    //Characteristics of Class
    imax : number;
    ino : number;

    //Constructor of Class
    constructor(value : number)
    {
        this.imax = 0;
        this.ino = value;
    }

    //Behaviour of Class To Find Largest Digit in Entered Number
    Max() : number 
    {
        var Digit : number = 0;
        
        //Logic To Find Largest Digit
        Digit = this.ino % 10;
        if(this.imax < Digit)
        {
            this.imax = Digit;
        }
        this.ino = Math.floor(this.ino / 10);

        if(this.ino != 0)
        {
            //Recursive Call To Behaviour of Class
            this.Max();
        }

        return this.imax;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var ino : number = 87987;
    var iret : number = 0;
    
    console.log("Jay Ganesh.......");

    //Creating object of MaxDigit Class
    var mobj : MaxDigit = new MaxDigit(ino);
    //Call To Behaviour of Class
    iret = mobj.Max();

    //Printing Largest Digit
    console.log("Largest Digit in Entered Number %d is : %d",ino,iret);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    
//Call To Main Function
main();