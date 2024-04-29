/*
    Author : Pakshal Shashikant Jain
    Date : 29/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 1 2 3 4 5
*/

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Pattern 
{
    static int i;         //Static Characteristics of Class / Class Variable of Class
    int ino;              //Non-Static Characteristics of Class / Instance Variable of Class

    static                //Static Block 
    {
        i = 1;
    }

    //Constructor of Class
    Pattern(int value)
    {
        this.ino = value;
    }

    //Behaviour of Class
    void DisplayPattern()
    {
        if(i > this.ino)
        {
            return;
        }
        else 
        {
            System.out.printf("%d\t",i);
            i++;
            
            //Recursive Function Call
            DisplayPattern();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display 
{
    //Main Function
    public static void main(String args[])
    {
        int ino = 0;

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Jay Ganesh......");

        //Taking Input From User
        System.out.println("Enter One Number : ");
        ino = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(ino);

        //Call To Behaviour of Class
        pobj.DisplayPattern();

        //Deallocating Memory of Object
        sobj = null;
        pobj = null;
    }
}