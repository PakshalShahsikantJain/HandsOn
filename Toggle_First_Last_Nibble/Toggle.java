/*
    Author : Pakshal Shashikant Jain 
    Date : 07/09/2023
    Program : Write a program which accept one number from user and toggle contents 
              of first and last nibble of the number. Return modified number. (Nibble is a
              group of four bits) 

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Nibble
{
    //Characteristics of Class
    int iNo;

    //Constructor of Class (Default)
    Nibble()
    {
        this.iNo = 0;
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One Number");
        this.iNo = sobj.nextInt();
    }

    //Behaviour of Class To Take Input from user
    int ToggleBit()
    {
        int iMask = 0XF000000F;
        int iResult = 0;

        if(this.iNo < 0)
        {
            this.iNo = -this.iNo;
        }

        //Logic To Toggle Nibbles
        iResult = iMask ^ this.iNo;

        return iResult;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Toggle
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of Nibble Class
        Nibble nobj = new Nibble();

        //Call To Behaviours of Class
        nobj.Accept();
        iret = nobj.ToggleBit();
        
        //Printing Modified Number
        System.out.println("Modified Number is : "+Integer.toUnsignedString(iret));
    }
}