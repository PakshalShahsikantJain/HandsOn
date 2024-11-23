/*
    Author : Pakshal Shashikant Jain 
    Date : 08/05/2024
    Program : Write a recursive program which accept number from user and return its
              factorial.
              
              Input : 5
              Output : 120 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Factorial
{
    //Characteristics of Class
    int ino;
    int imult;

    //Constructor of Class
    Factorial(int value)
    {
        this.ino = value;
        this.imult = 1;
    }

    //Behaviour of Class To Calculate Factorial
    int NumFact()
    {
        if(this.ino != 0)
        {
            this.imult = this.imult * this.ino;
            this.ino--;
            this.NumFact();
        }

        return this.imult;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Fact 
{
    //Main Function
    public static void main(String args[])
    {
        int ino = 0;
        int iret = 0;

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh.....");

        //Taking Input From user
        System.out.println("Enter One Number : ");
        ino = sobj.nextInt();

        //Creating Object of Factoriial Class
        Factorial fobj = new Factorial(ino);
        
        //Call To Behaviour of Class
        iret = fobj.NumFact();

        //Printing Factorial Calculated
        System.out.printf("Factorial of Number is : %d",iret);
    }
}