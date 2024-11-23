/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To accept number from user and print numbers till that number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Pattern
{
    //Characteristics of Class
    int No = 0;
    
    //Constructor of Class
    Pattern(int no)
    {
        //Handeling Condition if Entered Number is Negative
        if(no < 0)
        {
            no = -no;
        }

        this.No = no;
    }
    //Behaviour of Class
    void display()
    {
        int i = 0;

        System.out.println("Printing Numbers Till Entered Number");
        for(i = 1;i <= this.No;i++)
        {
            System.out.print(i+"\t");
        }
    }
}
//Main Class
class Display
{
    //Main function
    public static void main(String args[])
    {
        int No = 0;

        System.out.println("Jay Ganesh...");
        
        //Creating Object of Scanner Class To Take Input From user
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(No);
        //Call To Behaviour of Class
        pobj.display();
    }
}