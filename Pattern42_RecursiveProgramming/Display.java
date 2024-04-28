/*
    Author : Pakshal Shashikant Jain 
    Date : 28/04/2024
    Program : Write a recursive program which display below pattern.
              Output : * * * * *
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern
{
    //Characteristics of Class 
    int ino = 0;

    //Constructor of Class
    Pattern(int iNo) 
    {
        this.ino = iNo;
    }

    //Behaviour of Class
    void DisplayPattern() 
    {
        if(this.ino == 0)
        {
            return;
        }
        else 
        {
            System.out.print("*\t");
            this.ino--;

            //Recursive Function Call
            this.DisplayPattern();
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function(Entry Point Function)
    public static void main(String args[])
    {
        int ino = 0;

        //Creating Scanner Class To Take Inpur From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh.....");

        //Taking Input From User
        System.out.println("Enter One Number to print that number of '*' on Screen");
        ino = sobj.nextInt();

        //Creating Object of Pattern Class
        Pattern pobj = new Pattern(ino);

        //Call To Behaviour of Pattern Class 
        pobj.DisplayPattern();

        //Deallocation of Memory of Objects Created
        pobj = null;
        sobj = null;
    }
}