/*
    Author : Pakshal Shashikant Jain 
    Date : 05/09/2023
    Program : Write a program which accept one number and position from user and ON
              that bit. Return modified number.

              Input : 10 3
              Output : 14 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Bit
{
    //Characteristics of Class
    int iNo;
    int iPos;

    //Constructor of Class
    Bit()
    {
        this.iNo = 0;
        this.iPos = 0;
    }

    //Behavoiour of Class TO Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class  To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One Number");
        this.iNo = sobj.nextInt();

        System.out.println("Enter One Position");
        this.iPos = sobj.nextInt();
    }

    //Behaviour of Class To On Bit
    int On()
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

        //Logic To On Bit At Entered Position
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
}//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class OnBit
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of Bit Class
        Bit bobj = new Bit();

        //Call To Behaviours of Class
        bobj.Accept();
        iret = bobj.On();

        if(iret == bobj.iNo)
        {
            System.out.println("Bit is Already On");

            return;
        }

        //Printing Modified Number
        System.out.println("Modified Number is : "+iret);
    }
}