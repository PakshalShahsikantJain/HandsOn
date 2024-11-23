/*
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number , two positions from user and
              check whether bit at first or bit at second position is ON or OFF.

              Input : 10 3 7
              Output : FALSE 
*/

//Required libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Bit
{
    //Characteristics of Class
    int iNo;
    int iPos1;
    int iPos2;

    //Constructor of Class
    Bit()
    {
        this.iNo = 0;
        this.iPos1 = 0;
        this.iPos2 = 0;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter one Number");
        this.iNo = sobj.nextInt();

        System.out.println("Enter First Position");
        this.iPos1 = sobj.nextInt();

        System.out.println("Enter First Position");
        this.iPos2 = sobj.nextInt();
    }

    //Behaviour of Class To Check Bit is On or off
    boolean Check()
    {
        int iMask = 0X00000001;
        int iMask2 = 0X00000001;
        
        int iResult = 0;
        int iResult2 = 0;

        //Logic To Check
        iMask = iMask << (this.iPos1 - 1);
        iMask2 = iMask2 << (this.iPos2 - 1);

        iResult = this.iNo & iMask;
        iResult2 = this.iNo & iMask2;  

        if((iResult == iMask)||(iResult2 == iMask2))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class 
class Check
{
    //Main Function
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Jay Ganesh....");

        //Creating object of Bit Class 
        Bit bobj = new Bit();
        
        //Call To Behaviour of Class
        bobj.Accept();
        bret = bobj.Check();

        if(bret == true)
        {
            System.out.println("One or Both Bits are ON");
        }
        else
        {
            System.out.println("Both Bits are OFF");
        }
    }
}