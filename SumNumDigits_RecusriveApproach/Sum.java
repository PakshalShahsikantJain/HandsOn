/*
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and return
              summation of its digits.
              Input : 879
              Output : 24 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Digits
{
    //Characteristics of Class
    private int ino;         //Instance Variable of Class
    private int sum;        //Instance Variable of Class

    //Constructor of Class
    public Digits(int value)
    {
        this.ino = value;
        this.sum = 0;
    }

    //Behaviour of Class
    public int SumDigits()
    {
        int Digits = 0;

        //Logic To Caluclate of Summation of Digits 
        Digits = this.ino % 10;
        this.sum = this.sum + Digits;
        this.ino = this.ino / 10;

        if(this.ino != 0)
        {
            //Recursive Function Call
            this.SumDigits();
        }

        return this.sum;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Sum
{
    //Main Function (Enter point Function)
    public static void main(String args[])
    {
        int ino = 0;
        int iret = 0;

        System.out.println("Jay Ganesh.........");

        //Creating object of Scanner Class To Take Input From 
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter One Number : ");
        ino = sobj.nextInt();

        Digits dobj = new Digits(ino);

        //Call To Behaviour of Class
        iret = dobj.SumDigits();
        
        //Printing Summation of Digits 
        System.out.printf("Summation of Digits of Entered Number is : %d",iret);

        dobj = null;
    }
}
