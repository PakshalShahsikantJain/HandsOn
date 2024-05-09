/*
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and return
              Products of its digits.
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
    private int imult;        //Instance Variable of Class

    //Constructor of Class
    public Digits(int value)
    {
        this.ino = value;
        this.imult = 1;
    }

    //Behaviour of Class
    public int Mult()
    {
        int Digits = 0;

        //Logic To Caluclate of Products of Digits 
        Digits = this.ino % 10;
        this.imult = this.imult * Digits;
        this.ino = this.ino / 10;

        if(this.ino != 0)
        {
            //Recursive Function Call
            this.Mult();
        }

        return this.imult;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Product
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
        iret = dobj.Mult();
        
        //Printing Products of Digits 
        System.out.printf("Products of Digits of Entered Number is : %d",iret);

        dobj = null;
    }
}
