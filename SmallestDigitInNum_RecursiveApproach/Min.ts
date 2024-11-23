/*
    Author : Pakshal Shashikant Jain 
    Date : 14/5/2024
    Program : Write a recursive program which accept number from user and return
              smallest digit

              Input : 87983
              Output : 3  
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class MinDigit
{
    //Characteristics of Class
    imin : number;
    ino : number;

    //Constructor of Class
    constructor(value : number)
    {
        this.ino = value;
        this.imin = this.ino % 10;
        this.ino = Math.floor(this.ino / 10);
    }

    //Behaviour of Class To Find Smallest Digit in Entered Number
    Min() : number 
    {
        var Digit : number = 0;
        
        //Logic To Find Smallest Digit
        Digit = this.ino % 10;
        if(Digit < this.imin)
        {
            this.imin = Digit;
        }
        this.ino = Math.floor(this.ino / 10);

        if(this.ino != 0)
        {
            //Recursive Call To Behaviour of Class
            this.Min();
        }

        return this.imin;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var ino : number = 82987;
    var iret : number = 0;
    
    console.log("Jay Ganesh.......");

    //Creating object of MinDigit Class
    var mobj : MinDigit = new MinDigit(ino);
    //Call To Behaviour of Class
    iret = mobj.Min();

    //Printing Smallest Digit
    console.log("Smallest Digit in Entered Number %d is : %d",ino,iret);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                    
//Call To Main Function
main();