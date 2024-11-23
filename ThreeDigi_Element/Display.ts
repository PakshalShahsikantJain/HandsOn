/*
    Author : Pakshal Shashikant Jain 
    Date : 18/07/2023
    Program : Accept N numbers from user and display all such numbers which contains
              3 digits in it.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 665 953 858
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Digit
{
    //Characteristics of Class
    isize : number;
    arr : number[];

    //Constructor of Class
    constructor()
    {
        this.isize = 0;
        this.arr = [];
    }
    
    //Behaviour of Class To Assign Value To Class Variables
    Accept()
    {
        this.isize = 6;
        this.arr = [8225,665,3,76,953,858];
    }

    //Behaviour of Class To Display All Such Elements Which Contains 3 Digits in it 
    Display()
    {
        var i : number = 0;
        var idigits : number = 0;
        var no : number = 0;
        var icnt : number = 0;

        //Logic To Display 
        console.log("inside Display function");
        for(i = 0;i < this.isize;i++)
        {
            no = this.arr[i];
            while(no != 0)
            {   
                idigits = no % 10;
                icnt = icnt + 1;
                no = Math.floor(no / 10);        
            }   
            if(icnt == 3)
            {
                process.stdout.write(this.arr[i]+"\t");
            }
            icnt = 0;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main() 
{
    console.log("Jay Ganesh....");

    //Creating object of Digit Class
    var dobj = new Digit();

    //Call To Behaviours of Class
    dobj.Accept();
    dobj.Display();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//call to Main function
main();