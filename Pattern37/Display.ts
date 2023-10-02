/*
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
              
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern
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

    //Behaviour of Class To Take Input from user
    Accept()
    {
        this.str = "PPA";
        this.arr = Array.from(this.str);
    }

    //Behaviour of Class To Display Given Pattern
    Display()
    {
        var i : number = 0;
        var j : number = 0;

        //Printing Given Pattern
        console.log("Printing Given Pattern");
        for(i = 0;i < this.arr.length;i++)
        {
            for(j = 0;j < this.arr.length;j++)
            {
                process.stdout.write(this.arr[j]+"\t");
            }
            console.log();
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay Ganesh...");

    //Creating object of Pattern Class
    var pobj = new Pattern();

    //Call To Behaviours of Class
    pobj.Accept();
    pobj.Display();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();