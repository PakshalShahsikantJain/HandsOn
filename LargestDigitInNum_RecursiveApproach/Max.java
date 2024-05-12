/*
    Author : Pakshal Shashikant Jain 
    Date : 11/5/2024
    Program : Write a recursive program which accept number from user and return
              largest digit

              Input : 87983
              Output : 9   
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class MaxDigit 
{
    //Characteristics of Class
    int ino;
    int imax;

    //Constructor of Class
    MaxDigit(int ivalue)
    {
        this.ino = ivalue;
        this.imax = 0;
    }

    //Behaviour of Class To Find Largest Digits
    int Max()
    {
        int Digits = 0;

        //Logic to Find
        Digits = this.ino % 10;
        if(this.imax < Digits)
        {
            this.imax = Digits;
        }
        this.ino = this.ino / 10;

        if(this.ino != 0)
        {
            //Recursive Function Call
            this.Max();
        }

        return this.imax;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Max
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

        //Creating object of MaxDigit Class
        MaxDigit mobj = new MaxDigit(ino);
        //Call To Behaviour of Class
        iret = mobj.Max();

        //Printing Largest Digit
        System.out.printf("Largest Digit in Enter Number %d is : %d",ino,iret);
    }
}