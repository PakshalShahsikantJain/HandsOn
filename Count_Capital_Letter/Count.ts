/*
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Write a program which accept string from user and count number of
              capital characters.

              Input : “Marvellous Multi OS”
              Output : 4 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Capital 
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

    //Behaviour of Class To Take input from user
    Accept()
    {
        this.str = "Marvellous Multi OS";
        
        this.arr = Array.from(this.str);
    }

    //Behaviour of Class To Count Capital Letters From Entered String
    Count() : number
    {
        var i : number = 0;
        var icnt : number = 0;

        for(i = 0;i < this.arr.length;i++)
        {
            if((this.arr[i] >= 'A')&&(this.arr[i] <= 'Z'))
            {
                icnt = icnt + 1;
            }
        }

        return icnt;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var iret : number = 0;

    console.log("Jay Ganesh...");

    //Creating object of Capital Class
    var cobj = new Capital();

    //Call To Behaviour of Class
    cobj.Accept();
    iret = cobj.Count();

    //Printing Count of Capital Letters
    console.log("Count of Capital Letter is : %d",iret);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();