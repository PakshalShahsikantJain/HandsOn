/*
    Author : Pakshal Shashikant Jain 
    Date : 05/09/2023
    Program : Write a program which accept one number and position from user and ON
              that bit. Return modified number.

              Input : 10 3
              Output : 14 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
class Bit
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
        this.iNo = 10;
        this.iPos = 3;
    }

    //Behaviour of Class To On Entered Bit
    OnBit()
    {
        var iMask : number = 0X00000001;
        var iResult : number = 0;

        if(this.iNo < 0) 
        {
            this.iNo = -this.iNo;
        }

        if((this.iPos < 1)||(this.iPos > 32))
        {
            return 0;
        }

        //Logic To On Entered Bit
        iMask = iMask << (this.iPos - 1);
        iResult = iMask & this.iNo;
        
        if(iResult != iMask)
        {
            iResult = iMask ^ this.iNo;
        }   
        else 
        {
            iResult = this.iNo;
        }

        return iResult;
    }   
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{

    var iret : number = 0;

    console.log("Jay Ganesh.....");

    //Creating object of Bit Class
    var bobj = new Bit();
    
    //Call To Behaviours of Class
    bobj.Accept();
    iret = bobj.OnBit();    

    if(iret == this.iNo)
    {
        console.log("Bit is Already ON");

        return;
    }

    //Printing Modified Number
    console.log("Modified Number is : %d",iret);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();