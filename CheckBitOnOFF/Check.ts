/*
    Author : Pakshal Shashikant Jain
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and
              check whether bit at that position is on or off. If bit is one return TURE
              otherwise return FALSE.
            
              Input : 10 2
              Output : TRUE 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CheckBit
{
    //Characteristics of Class
    iNo : number;
    iPos : number;

    //Constructor of Class
    constructor()
    {
        this.iNo = 0;
        this.iPos = 0;
    }

    //Behaviour of Class To Take Input from user
    Accept() 
    {
        //Taking Input from user
        this.iNo = 10;
        this.iPos = 2;
    }

    //Behaviour of Class To Check Bit is ON or OFF
    Check() : boolean
    {
        var iMask : number = 0;
        var iResult : number = 0;

        if(this.iNo < 0)
        {
            this.iNo = -this.iNo;
        }

        if((this.iPos < 1)||(this.iPos > 32))
        {
            return false;
        }
        
        iMask = iMask << (this.iPos - 1);

        iResult = iMask & this.iNo;

        if(iResult == iMask) 
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main()
{
    var bret : boolean = false;

    console.log("Jay Ganesh....");

    //Creating object of CheckBit Class
    var cobj = new CheckBit();

    //Call To Behaviour of Class
    cobj.Accept();
    bret = cobj.Check();

    //Handeling Condition if bret is true
    if(bret == true) 
    {
        console.log("Bit is ON At Entered Postion %d",cobj.iPos);
    }
    //Handeling Condition if bret is false
    else
    {
        console.log("Bit is OFF At Entered Postion %d",cobj.iPos);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main function
main();