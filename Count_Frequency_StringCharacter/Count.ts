/*
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return frequency of that character.
             
              Input : “Marvellous Multi OS”
                       M
              Output : 2

              Input : “Marvellous Multi OS”
                       W
              Output : 0 
*/

//Class Declaration
class CharCount
{
    //Characteristics of Class
    arr : any[];
    str : string;
    ch : any;

    //Constructor of Class
    constructor() 
    {
        this.arr = [];
        this.str = " ";
        this.ch = ' ';
    }

    //Behaviour of Class To Take Input from user
    Accept()
    {
        this.str = "Marvellous Multi OS";
        this.arr = Array.from(this.str);
        this.ch = 'l'
    }

    //Behaviour of Find Frequencty of Entered Character in Entered String
    Count() : number 
    {
        var i : number = 0;
        var icnt : number = 0;  

        //Logic To Find
        while(i != this.arr.length)
        {
            if(this.arr[i] == this.ch)
            {
                icnt++;
            }

            i++;
        }

        return icnt;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var iret : number = 0;

    console.log("Jay Ganesh....");

    //Creating object of CharCount Class
    var cobj = new CharCount();

    //Call To Behaviour of Class
    cobj.Accept();
    iret = cobj.Count();

    //Printing Count of Entered Character
    console.log("Count of Entered Character %s in Entered String is : %d",cobj.ch,iret);
}

main();