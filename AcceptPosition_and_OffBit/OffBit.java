/*
    Author : Pakshal Shashikant Jain 
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and off
              that bit. Return modified number.

              Input : 10 2
              Output : 8 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Bit
{
    //Characteristics of Class
    int iNo = 0;
    int iPos = 0;

    //Constructor of Class
    Bit()
    {
        this.iNo = 0;
        this.iPos = 0;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One Number");
        this.iNo = sobj.nextInt();

        System.out.println("Enter One Position");
        this.iPos = sobj.nextInt();
    }

    //Behaviour of Class TO Off Bit At Entered Position
    int OffBit()
    {
        int iMask = 0X00000001;
        int iResult = 0;

        if(this.iNo < 0)
        {
            this.iNo = -this.iNo;
        }

        if((this.iPos < 1)||(this.iPos > 32))
        {
            return 0;
        }

        //Logic to off Bit
        iMask = iMask << (this.iPos - 1);
        iResult = iMask & this.iNo;
        
        if(iResult == iMask)
        {
            iResult = iMask ^ this.iNo;
        }

        return iResult;
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class OffBit
{
    //Main function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh.....");

        //Creating object of Bit Class
        Bit bobj = new Bit();

        //Call To Behaviour of Class
        bobj.Accept();
        iret = bobj.OffBit();

        //Printing Modified Number 
        System.out.printf("Modified Number is : %d",iret); 
    }
}