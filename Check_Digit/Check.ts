/*
    Author : Pakshal Shashikant Jain 
    Date : 24/07/2023
    Program : Accept Character from user and check whether it is digit or not
              (0-9).

              Input : 7 
              Output : TRUE

              Input : d
              Output : FALSE 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Digit 
{
    //Characteristics of Class
    ch : any;

    //Constructor of Class
    constructor()
    {
        this.ch = ' ';
    }

    //Behaviour of Class To Accept Input from user
    Accept()
    {
        this.ch = '5';
    }

    //Behaviour of Class To Check Entered Character is Digit or not
    check() : boolean
    {
        if((this.ch >= '0')&&(this.ch <= '9'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main() 
{
    var bret : boolean = false;

    console.log("Jay Ganesh....");

    //Creating object of Digit Class
    var dobj = new Digit();

    //Call To Behaviour of Class
    dobj.Accept()
    bret = dobj.check();

    //Handeling Condition According Output
    if(bret == true)
    {
        console.log("Entered Character %s is Digit",dobj.ch);
    }
    else
    {
        console.log("Entered Character %s is Not A Digit",dobj.ch);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main function
main();