/*
    Author : Pakshal Shashikant Jain 
    Date : 19/07/2023
    Prorgam : Accept Character from user and check whether it is alphabet or not
              (A-Z a-z).
              Input : F
              Output : TRUE
                
              Input : &
              Output : FALSE
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Character 
{
    //Charcateristics of Class
    ch : any 

    //Constructor of Class
    constructor()
    {
        this.ch = ' ';
    }

    //Behaviour of Class To Class To Take Input
    Accept()
    {
        this.ch = 'z';
    }

    //Behaviour of Class To Check Entered Character is alphabet or Not
    Check()
    {
        if((this.ch >= 'A')&&(this.ch <= 'Z')||(this.ch >= 'a')&&(this.ch <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main()
{
    var bret : boolean = false;

    console.log("Jay Ganesh.....");

    //Creating object of Character Class
    var cobj = new Character();

    //Call To Behaviours of Class
    cobj.Accept();
    bret = cobj.Check();

    //Handeling Conditions According To Output
    if(bret == true)
    {
        console.log("Entered Character %s is An Alphabet",cobj.ch);
    }
    else
    {
        console.log("Entered Character %s is Not An Alphabet",cobj.ch);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main function
main();