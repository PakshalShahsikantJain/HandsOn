/*
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Accept division of student from user and depends on the division
              display exam timing. There are 4 divisions in school as A,B,C,D. Exam
              of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
              (Application should be case insensitive)
            
              Input : C
              Output : Your exam at 9.20 AM
            
              Input : d
              Output : Your exam at 10.30 AM
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Division
{
    //Characteristics of Class
    char ch;
    int ascii;

    //Constructor of Class
    Division()
    {
        this.ch = '\0';
        this.ascii = 0; 
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter Your Division");
        this.ch = sobj.next().charAt(0);
    }

    //Behaviour of Class To Display Exam Timing
    void Display()
    {
        if((this.ch >= 'a')&&(this.ch <= 'z'))
        {
            this.ascii = (int)this.ch - 32;
            this.ch = (char)this.ascii;
        }

        //Logic 
        switch(this.ch)
        {
            case 'A' : 
            {
                System.out.println("Your Exam is at 7 AM");
                break;
            }
            case 'B' :
            {
                System.out.println("Your Exam is at 8:30 AM");
                break;
            }
            case 'C' :
            {
                System.out.println("Your Exam is at 9:20 AM");
                break;
            }
            case 'D' :
            {
                System.out.println("Your Exam is at 10:30 AM");
                break;
            }
            default :
            {
                System.out.println("Invalid Division");
            }
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class 
class School
{
    //Main function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating object of Division Class 
        Division dobj = new Division();

        //Call To Behaviours of Class
        dobj.Accept();
        dobj.Display();
    }
}