/*
    Author : Pakshal Jain
    Date : 04/11/2022
    Program : To Accept Range From User and Print Number Between That Range
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Range
{
    //Characteristics of Class
    int No = 0;
    int No2 = 0;

    //Constructor of Class
    Range(int no,int no2)
    {
        //Handeling Condition if Staring Number is Greater Than Ending Number
        if(no > no2)
        {
            System.out.println("Invalid Range");

            return;
        }
        this.No = no;
        this.No2 = no2;
    }
    //Behaviour of Class
    void display()
    {
        int i = 0;

        //Logic
        System.out.println("Printing Numbers Between Entered Range..");
        for(i = this.No;i <= this.No2;i++)
        {
            System.out.print(i+"\t");
        }
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);
        
        //Taking Input From user
        System.out.println("Enter Starting Number");
        No = sobj.nextInt();

        System.out.println("Enter Ending Number");
        No2 = sobj.nextInt();

        //Creating object of Range Class
        Range robj = new Range(No,No2);
        //Call To Behaviour of Class
        robj.display();
    }
}