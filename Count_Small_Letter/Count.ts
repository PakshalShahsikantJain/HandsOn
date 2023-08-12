/*
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and count number of
              small characters.

              Input : “Marvellous”
              Output : 9  
*/

///////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class SmallLetter
{
    //Characteristisc of Class
    str : string;
    arr : any[];

    //Constructor of Class
    constructor()
    {
        this.str = " ";
        this.arr = [];
    }

    //Behaviour of Class To Take input from user
    Accept()
    {
        this.str = "Marvellous Multi OS";
        this.arr = Array.from(this.str);
    }

    //Behaviour of Class To Count 
    Count() : number
    {
        var i : number = 0;
        var icnt : number = 0;

        //Logic To Count Small Letter
        for(i = 0;i < this.arr.length;i++)
        {
            if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
            {
                icnt++;
            }
        }

        return icnt;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var iret : number = 0;

    console.log("Jay Ganesh.....");

    //Creating object of SmallLetter Class
    var sobj = new SmallLetter();

    //Call To Behaviour of Class
    sobj.Accept();  
    iret = sobj.Count();

    //Printing Count Calculated
    console.log("Count of Small Letter in Entered Character (%s) is : %d",sobj.str,iret);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To main function
main();