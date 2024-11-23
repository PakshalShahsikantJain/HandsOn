/*
    Author : Pakshal Shashikant Jain 
    Date : 14/5/2024
    Program :  Write a recursive program which accept number from user and return its
               reverse number.

               Input : 523
               Output : 325  
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

class RevNum
{
    //Characterstics of Class
    int ino = 0;
    int rno = 0;

    //Constructor of Class
    RevNum(int ivalue)
    {
        this.ino = ivalue;
        this.rno = 0;
    }

    //Behaviour of Class To Reversed Number
    int Reverse()
    {
        int Digit = 0;

        //Logic To Reverse
        if(this.ino != 0)
        {
            Digit = this.ino % 10;
            this.rno = (this.rno * 10) + Digit;
            this.ino = this.ino / 10;

            this.Reverse();
        }

        return this.rno;
    }
}

/////////////////////////////////////////////////////////////////////////////

//Main Class
class Rev
{
    //Main Function
    public static void main(String args[])
    {
        int ino = 0;
        int iret = 0;

        System.out.println("Jay Ganesh...");

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);
        
        //Taking Input From User
        System.out.println("Enter One Number : ");
        ino = sobj.nextInt();

        //Creating object RevNum Class
        RevNum robj = new RevNum(ino);

        //Call To Behaviour of Class
        iret = robj.Reverse();

        //Printing Reversed Number
        System.out.printf("Reversed Number of Number %d is : %d",ino,iret);

        //Deallocating Memory of Class Object
        robj = null;
    }
}