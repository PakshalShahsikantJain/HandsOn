/*
    Author : Pakshal Shashikant Jain 
    Date : 14/5/2024
    Program : Write a recursive program which accept number from user and return
              smallest digit

              Input : 87983
              Output : 3  
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class MinDigit 
{
    //Characteristics of Class
    int ino;
    int imin;

    //Constructor of Class
    MinDigit(int ivalue)
    {
        this.ino = ivalue;
        this.imin = this.ino % 10;
        this.ino = this.ino / 10;
    }

    //Behaviour of Class To Find Smallest Digits
    int Min()
    {
        int Digits = 0;

        //Logic to Find
        Digits = this.ino % 10;
        if(Digits < this.imin)
        {
            this.imin = Digits;
        }
        this.ino = this.ino / 10;

        if(this.ino != 0)
        {
            //Recursive Function Call
            this.Min();
        }

        return this.imin;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Min
{
    //Main Function
    public static void main(String args[])
    {
        int ino = 0;
        int iret = 0;

        System.out.println("Jay Ganesh....");
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.print("Enter One Number : ");
        ino = sobj.nextInt();

        //Creating object of MinDigit Class
        MinDigit mobj = new MinDigit(ino);
        //Call To Behaviour of Class
        iret = mobj.Min();

        //Printing Smallest Digit
        System.out.printf("Smallest Digit in Enter Number %d is : %d",ino,iret);
    }
}