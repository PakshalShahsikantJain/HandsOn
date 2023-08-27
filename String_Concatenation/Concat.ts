/*
    Author : Pakshal Shashikant Jain 
    Date : 27/08/2023
    Program : Write a program which 2 strings from user and concat second string
              after first string. (Implement strcat() function).

              Input : "Marvellous Infosystems"
                      "Logic Building"

              Output : "Marvellous Infosystems Logic Building" 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringConcatenation
{
    //Characteristics of Class
    str : string;
    str2 : string;

    //Constructor of Class
    constructor() 
    {
        this.str = " ";
        this.str2 = " ";
    }

    //Behaviour of Class To Take Input from user
    Accept()
    {
        this.str = "Marvellous Mutli OS";
        this.str2 = "Infosystems"
    }

    //Behaviour of Class To Concatenate Two Strings
    Concatenation()
    {
        //Logic To Concatenate
        this.str = this.str+" "+this.str2;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var iret : number = 0;

    console.log("Jay Ganesh....");

    //Creating object of StringConcatenation Class
    var cobj = new StringConcatenation();

    //Call to Behaviour of Class
    cobj.Accept();
    cobj.Concatenation();

    //Printing Concatenated String
    console.log("Concatenated String is :",cobj.str);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();