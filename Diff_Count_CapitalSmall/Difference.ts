/*
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and return
              difference between frequency of small characters and frequency of
              capital characters.

              Input : “MarvellouS”
              Output : 6 (8-2) 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Difference 
{
    //Characteristics of Class
    str : string;
    arr : any[];

    //Constructor of Class
    constructor()
    {
        this.str = " ";
        this.arr = [];
    }

    //Behaviour of Class To Take input 
    Accept()
    {
        //Initializing Value To Variables
        this.str = "MarvellouS";
        this.arr = Array.from(this.str);
    }

    //Behaviour of Class To Calculate
    Calculation() : number
    {
        var idiff : number = 0;
        var icnt : number = 0;
        var icnt2 : number = 0;
        var i : number = 0;

        //Logic To Find Difference
        for(i = 0;i < this.arr.length;i++)
        {
            if((this.arr[i] >= 'A')&&(this.arr[i] <= 'Z'))
            {
                icnt++;
            }
            else if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
            {
                icnt2++;
            }
        }

        idiff = icnt2 - icnt;

        return idiff;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var iret : number = 0;

    console.log("Jay Ganesh....");

    //Creating object of Difference Class
    var dobj = new Difference();
    
    //Call To Behaviour of Class
    dobj.Accept();
    iret = dobj.Calculation();

    //Printing Difference Calculated
    console.log("Difference Between Small and Capital Letter is : %d",iret);
}

//Call To Main Function
main();