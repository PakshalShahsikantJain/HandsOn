/*
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and off 7th bit of that
              number if it is on. Return modified number. 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class OffBit
{
    //Characteristics of Class
    int No;

    //Constructor of Class
    OffBit()
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

    //Behaviour of Class 
    int offbit()
    {
        int iResult = 0;
        int iMask = 0X00000040;

        if(this.No < 0)
        {
            this.No = -this.No;
        }

        //Logic To off 7th Bit
        iResult = iMask & this.No;

        if(iResult == iMask)
        {
            iResult = this.No ^ iMask;
        }

        return iResult;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Modify
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of OffBit Class
        OffBit obj = new OffBit();

        //Call To Behaviour of Class
        obj.Accept();
        iret = obj.offbit();

        //Printing Modified Number 
        System.out.printf("Modified Number is : %d",iret);
    }
}