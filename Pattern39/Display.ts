/*
    Author : Pakshal Shashikant Jain
    Date : 05/10/2023
    Program : Input : "Marvellous"
              Output : 
              M
              M a
              M a r
              M a r v
              M a r v e
              M a r v e l
              M a r v e l l
              M a r v e l l o
              M a r v e l l o u
              M a r v e l l o u s

              Input : “PPA”
              Output : 
              P
              P P
              P P A 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringPattern
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

    //Behaviour of Class To Print Given Pattern
    Pattern()
    {
        var i : number = 0;
        var j : number = 0;

        //Printing Given Pattern
        console.log("Printing Given Pattern : ");
        for(i = 0;i < this.arr.length;i++)
        {
            for(j = 0;j < this.arr.length;j++)
            {
                if(i >= j)
                {
                    process.stdout.write(this.arr[j]+"\t");
                }
            }
            console.log();
        }
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay ganesh....");

    //Creating object of StringPattern Class
    var sobj = new StringPattern();

    //Call To Behaviours of Class
    sobj.Accept();
    sobj.Pattern();
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();