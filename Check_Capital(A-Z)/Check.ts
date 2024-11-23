/*
    Author : Pakshal Shashikant Jain 
    Date : 21/07/2023
    Prorgam : Accept Character from user and check whether it is capital or not(A-Z).
              Input : F
              Output : TRUE

              Input : d
              Output : FALSE 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Character 
{
    //Characterstics of Class
    ch : any

    //Constructor of Class
    construct()     
    {
        this.ch = ' ';
    }

    //Behaviour of Class To Take Input from user
    Accept() 
    {
        this.ch = 'Z';
    }   

    //Behaviour of Class To Check
    check() : boolean
    {
        //Logic
        if((this.ch >= 'A')&&(this.ch <= 'Z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main() 
{
    var bret : boolean = false;

    console.log("Jay Ganesh.....");

    //Creating object of Character Class To Take input from user
    var cobj = new Character();

    //Call To Behaviour of Class
    cobj.Accept();
    bret = cobj.check();

    //Handeling Conditions according to output
    if(bret == true)
    {
        console.log("Entered Character %s is Capital",cobj.ch);
    }
    else
    {
        console.log("Entered Character %s is Not Capital",cobj.ch);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call TO Main function
main()