/*
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and display below
              pattern.

              Input : 5
              Output : 5 * 4 * 3 * 2 * 1 * 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Require libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Pattern 
{
    //Characteristics of Class
    int ino;    //Instance Variable of Class (Non-Static)

    //Constructor of Class
    Pattern(int value)
    {
        this.ino = value;
    }

    //Behaviour of Class To Print Given Pattern
    void DisplayPattern()
    {
        if(this.ino < 1)
        {
            return;
        }
        else 
        {
            System.out.printf("%d\t*\t",this.ino);
            this.ino--;

            //Recursive Function Call
            this.DisplayPattern();
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        int ino = 0;

        System.out.println("Jay Ganesh......");

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter One Number : ");
        ino = sobj.nextInt();

        //Creating object of Pattern Class 
        Pattern pobj = new Pattern(ino);

        //Call To Behaviour of Class
        pobj.DisplayPattern();

        pobj = null;
    }
}