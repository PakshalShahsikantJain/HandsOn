/*
    Author : Pakshal Shashikant Jain
    Date : 23/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strcpy() function)
              
              Input : “Marvellous Multi OS”
              Output : “Marvellous Multi OS” in another string 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyString 
{
    //Characteristics of Class
    src : any[];
    dest : any[];
    str : string;

    //Constructor of Class
    constructor()
    {
        this.src = [];
        this.dest = [];
        this.str = " ";
    }

    //Behaviour of Class To Take Input from user
    Accept()
    {
        this.str = "Pakshal Jain";
        
        this.src = Array.from(this.str);
    }

    //Behaviour of Class To Copy Contents of Entered String into Another String 
    StrCpyX()
    {
        var i : number = 0;
        
        //Logic To Copy String
        while(i != this.src.length)
        {
            this.dest[i] = this.src[i];
            i++;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    console.log("Jay Ganesh....");

    //Creating object of CopyString Class
    var cobj = new CopyString();
    //Call To Behaviour of Class
    cobj.Accept();
    cobj.StrCpyX();

    //Printing Copied String 
    console.log("Copied String is :",cobj.dest.join(""));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To main Function
main();