/*
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and toggle 7th bit of
              that number. Return modified number.  
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
    int Togglebit()
    {
        int iResult = 0;           //  0    0    0    0    0    0    4    0
        int iMask = 0X00000040;   //  0000 0000 0000 0000 0000 0000 0100 0000

        if(this.No < 0)
        {
            this.No = -this.No;
        }

        //Logic To Toggle 7 Bit
        iResult = iMask ^ this.No;

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

        //Creating object of  Class
        Bit bobj = new Bit();

        //Call To Behaviour of Class
        bobj.Accept();
        iret = bobj.Togglebit();

        //Printing Modified Number 
        System.out.printf("Modified Number is : %d",iret);
    }
}