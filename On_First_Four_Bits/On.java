/*
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and on its first 4
              bits. Return modified number.

              Input : 73
              Output : 79 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Bit
{
    //Characteristics of Class
    int No;

    //Constructor of Class
    Bit()
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
    int OnBit()
    {
        int iResult = 0;
        int iMask = 0X0000000F;

        if(this.No < 0)
        {
            this.No = -this.No;
        }

        //Logic To On First Four Bits of Entered Number
        iResult = iMask | this.No;

        return iResult;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class On
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of Bit Class
        Bit bobj = new Bit();

        //Call To Behaviour of Class
        bobj.Accept();
        iret = bobj.OnBit();

        //Printing Modified Number 
        System.out.printf("Modified Number is : %d",iret);
    }
}