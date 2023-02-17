/*
    Author : Pakshal Jain 
    Date : 17/02/2023
    Program : To Print Given Below Pattern 

    Input : 4
    Output : # 1 * # 2 * # 3 * # 4 *
*/

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////

//Class Declarartion
class Pattern 
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Pattern(int no)
    {
        this.No = no;
    }

    //Behaviour of Class
    void display()
    {
        int i = 0;

        //Logic
        for(i = 1;i <= this.No;i++)
        {
            System.out.printf("#  %d  *  ",i);
        }
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        
        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);
        System.out.println("Jay Ganesh....");

        //Taking Input From User
        System.out.println("Enter Number Till You Want To Print");
        No = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(No);
        //Call To Behaviour of Class
        pobj.display();
    }
}