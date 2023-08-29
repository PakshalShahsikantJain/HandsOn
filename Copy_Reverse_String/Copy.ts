/*
    Author : Pakshal Jain
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string in reverse order.

              Input : "Marvellous Python"
              Output : "nohtyP suollevraM" 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyStringRev
{
    //Characteristics of Class
    str : string;
    src : any[];
    dest : any[];

    //Constructor of Class
    constructor()
    {
        this.str = " ";
        this.src = [];
        this.dest = [];
    }

    //Behaviour of Class To Take Input from user
    Accept()
    {
        this.str = "Marvellous Multi OS By Piyush Manohar Khairnar";
        this.src = Array.from(this.str);
    }

    //Behaviour of Class To Copy String in Reverse Order
    StrCpyRev()
    {
        var i : number = 0;
        var j : number = 0;

        //Logic To Reverse String
        for(i = this.src.length - 1;i > -1;i--)
        {
            this.dest[j] = this.src[i];
            j++;
        }
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay Ganesh....");

    //Creating object of CopyStringRev Class
    var cobj = new CopyStringRev();

    //Call To Behaviours of Class
    cobj.Accept();
    cobj.StrCpyRev();

    //Printing Reversed String
    console.log("String Copied in Reverse Order is : %s",cobj.dest.join(""));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();