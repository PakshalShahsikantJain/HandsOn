/*
    Author : Pakshal Shashikant Jain
    Date : 30/08/2023
    Program : Write a program which checks whether 15th bit is On or OFF.
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class CheckBitOnOff 
{
    //Characteristics of Class
    int No;

    //Constructor of Class
    CheckBitOnOff()
    {
        this.No = 0;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating objec of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One Number");
        this.No = sobj.nextInt();
    }

    //Behaviour of Class To Check Bit is ON or OFF
    boolean ChkBit()
    {
        int iResult = 0;
        int iMask = 0X00004000;

        if(this.No < 0)
        {
            this.No = -this.No;
        }

        //Logic To Check if Bit is On or Off
        iResult = this.No & iMask;

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Check
{
    //Main Function
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Jay Ganesh.....");

        //Creating object of CheckBit Class
        CheckBitOnOff cobj = new CheckBitOnOff();

        //Call To Behaviour of Class
        cobj.Accept();
        bret = cobj.ChkBit();

        //Handeling Condition if bret is True
        if(bret == true)
        {
            System.out.println("15th Bit is ON");
        }
        //Handeling Condition if bret is False
        else
        {
            System.out.println("15th Bit is OFF");
        }
    }
}