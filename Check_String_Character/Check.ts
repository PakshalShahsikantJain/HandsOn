/*
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Check whether that character is present in string or not.
              Input : "Marvellous Multi OS"
                       e
              Output : TRUE
              
              Input : "Marvellous Multi OS"
                       W
              Output : FALSE 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Character 
{
    //Characteristic of Class
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
        this.ch = 'W';
    }

    //Behaviour of Class To Check
    Check()
    {
        var i : number = 0;

        //Logic To Check
        while(i != this.arr.length)
        {
            if(this.arr[i] == this.ch)
            {
                break;
            }
            i++;
        }

        if(this.arr[i] == this.ch)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    var bret : boolean = false;

    console.log("Jay Ganesh.....");

    //Creating object of Character Class
    var cobj = new Character();

    //Call To Behaviour Class
    cobj.Accept();
    bret = cobj.Check();

    if(bret == true)
    {
        console.log("Entered Character %s is Present in String",cobj.ch);
    }
    else
    {
        console.log("Entered Character %s is Not Present in String",cobj.ch);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();
