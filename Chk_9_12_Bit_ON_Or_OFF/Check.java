/*
    Author : Pakshal Shashikant Jain
    Date : 09/09/2023
    Program : Write a program which accept one number from user and check whether
              9th or 12th bit is on or off.
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
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One Number");
        this.No = sobj.nextInt();
    }

    //Behaviour of Class To Check Bit is ON or OFF
    boolean ChkBit()
    {
                                       //  0     0     0     0     0     1     0     0
        int iMask = 0X00000100;       // 0000  0000  0000  0000  0000  0001  0000  0000
                                       //  0     0     0     0     0     8     0     0                                                            
        int iMask2 = 0X00000800;      // 0000  0000  0000  0000  0000  1000  0000  0000
        int iResult = 0;
        int iResult2 = 0;

        if(this.No < 0)
        {
            this.No = -this.No;
        }

        //Logic To Check if Bit is On or Off
        iResult = this.No & iMask;
        iResult2 = this.No & iMask2;
        if((iResult == iMask)||(iResult2 == iMask2))
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
            System.out.println("One or Both Bits are ON");
        }
        //Handeling Condition if bret is False
        else
        {
            System.out.println("Both BITS are OFF");
        }
    }
}