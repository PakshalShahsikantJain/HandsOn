/*
    Author : Pakshal Jain
    Date : 11/12/2022
    Program : To Display Entered Range in Reverse Number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Rev
{
    //Characteristics of Class
    int No = 0;
    int No2 = 0;

    //Constructro of Class
    public Rev(int no,int no2)
    {
        this.No = no;
        this.No2 = no2;
    }

    //Beahaviour of Class
    void Display()
    {
        int i = 0;

        System.out.println("Printing Numbers in Reverse Order");
        for(i = this.No2;i >= this.No;i--)
        {
            System.out.print(i+"\t");
        }
    }
}

//Main Class
class Range
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;

        System.out.println("Jay Ganesh...");

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Starting Number");
        No = sobj.nextInt();

        System.out.println("Enter Ending Number");
        No2 = sobj.nextInt();

        if((No < 0)||(No > No2))
        {
            System.out.println("Invalid Range");
            return;
        }
        
        //Creating object of Rev Class
        Rev robj = new Rev(No,No2);
        //Call To Behaviour of Class        
        robj.Display();       
    }
}