/*
    Author : Pakshal Shashikant Jain 
    Date : 11/08/2023
    Program : Write a program which accept string from user and display it inn
              reverse order.

              Input : "MarvellouS"
              Output : "SuollevraM"
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Reverse
{
    //Characteristics  of Class
    Str : string;
    arr : any[];

    //Constructor of Class
    constructor() 
    {
        this.Str = " ";
        this.arr = [];
    }

    //Behaviour of Class To Take Input from user
    Accept()
    {
        this.Str = "MarvellouS";
        this.arr = Array.from(this.Str);
    }

    //Behaviour of Class To Reverse String 
    Reverse()
    {
        var i : number = 0;
        var iStart : number = 0;
        var iEnd : number = 0;
        var temp : any = ' ';

        while(iEnd != this.arr.length)
        {   
            iEnd++;
        }

        while(iStart < iEnd)
        {
            temp = this.arr[iStart];
            this.arr[iStart] = this.arr[iEnd];
            this.arr[iEnd] = temp;

            iStart++;
            iEnd--;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    console.log("Jay Ganesh.....");

    //Creating object of Reverse Class 
    var robj = new Reverse();

    //Call To Behaviour of Class
    robj.Accept();
    robj.Reverse();

    //Printing Reversed String 
    process.stdout.write(robj.arr.join(""));
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();