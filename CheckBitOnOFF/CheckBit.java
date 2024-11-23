/*
    Author : Pakshal Shashikant Jain
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and
              check whether bit at that position is on or off. If bit is one return TURE
              otherwise return FALSE.
            
              Input : 10 2
              Output : TRUE 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CheckBitOnOff
{
    //Characteristics of Class
    int iNo;
    int iPos;

    //Constructor of Class
    CheckBitOnOff()
    {
        this.iNo = 0;
        this.iPos = 0;
    }   

    //Behaviour of Class to Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);  

        //Taking Input from user
        System.out.println("Enter One Number");
        this.iNo = sobj.nextInt();

        System.out.println("Enter One Position");
        this.iPos = sobj.nextInt();
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Behaviour of Class To Check Bit is On or Not
    boolean Check()
    {
        int iMask = 0X00000001;
        int iResult = 0;
        
        if(this.iNo < 0)
        {
            this.iNo = -this.iNo;
        }

        if((this.iPos < 1)||(this.iPos > 32))
        {
            return false;
        }

        //Logic to Check
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
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class CheckBit
{
    //Main function       
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Jay Ganesh.....");

        //Creating object of cobj Class
        CheckBitOnOff cobj = new CheckBitOnOff();

        //Call To Behaviours of Class
        cobj.Accept();
        bret = cobj.Check();

        //Printing Output According To Result
        if(bret == true)
        {
            System.out.printf("Bit is ON At %d Position",cobj.iPos);
        }
        else
        {
            System.out.printf("Bit is OFF At %d Position",cobj.iPos);
        }
    }
}