/*
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number from user and range of
              positions from user. Toggle all bits from that range.
              Input : 897 9 13
              Toggle all bits from position 9 to 13 of input number ie 879.

              UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
              {
                // Logic
              } 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Bit
{
    //Characteristics of Class
    int iNo = 0;
    int iStart = 0;
    int iEnd = 0;

    //Constructor of Class
    Bit()
    {
        this.iNo = 0;
        this.iStart = 0;
        this.iEnd = 0;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One Number");
        this.iNo = sobj.nextInt();

        System.out.println("Enter Starting Number");
        this.iStart = sobj.nextInt();

        System.out.println("Enter Ending Number");
        this.iEnd = sobj.nextInt();
    }

    //Function To ToggleBits in Entered Range
    int ToggleBitRange()
    {
        int i = 0;
        int iMask = 0X00000001;
        int iResult = 0;

        //Logic To Toggle Bits
        iResult = this.iNo;
        for(i = this.iStart;i <= this.iEnd;i++)
        {
            iMask = iMask << (i - 1);
            iResult = iResult ^ iMask;
            iMask = 0X00000001;
        }

        return iResult;
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Toggle
{
    //Main Function
    public static void main(String args[])
    {
        int iRet = 0;
        System.out.println("Jay Ganesh....");

        //Creating object of Bit Class 
        Bit bobj = new Bit();
        //Call To Behaviours of Class
        bobj.Accept();
        iRet = bobj.ToggleBitRange();

        //Printing Modified Number
        System.out.println("Modified Number is : "+iRet);
    }
}