/*
    Author : Pakshal Shashikant Jain
    Date : 30/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 5 4 3 2 1
*/

//Required Libraries
import java.lang.*;
import java.util.*;

class Pattern
{
    private int ino;     //Instance Variable of Class

    Pattern(int value)   //Constructor of Class
    {
        this.ino = value;    
    }

    //Function To Display Given Pattern 
    void DisplayPattern()
    {
        if(this.ino < 1)
        {
            return;
        }
        else 
        {
            System.out.printf("%d\t",this.ino);
            this.ino--;
            this.DisplayPattern();
        }
    }
}

//Main Class
class Display 
{
    //Main Function
    public static void main(String args[])
    {
        int ino = 0;
        System.out.println("Jay Ganesh.....");

        //Creating object of Scanner Class To Take Input From user
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Any One Number You Want : ");
        ino = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(ino);

        System.out.println("Output : ");
    
        //Call To Behaviour of Class
        pobj.DisplayPattern();

        pobj = null;
    }
}