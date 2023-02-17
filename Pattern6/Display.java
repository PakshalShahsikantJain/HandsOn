/*
    Author : Pakshal Jain 
    Date : 16/02/2023
    Program : To Print Below Pattern 

    Input : 5
    Output : 1 * 2 * 3 * 4 * 5 * 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Pattern(int no)
    {
        this.No = no;
    }

    //Behaviour of Classs
    void display()
    {
        int i = 0;

        for(i = 1;i <= this.No;i++)
        {
            System.out.printf("%d\t*\t",i);
        }
    }
}

//////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh...");

        //Taking Input From User
        System.out.println("Enter Number Till You Want Print");
        No = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(No);
 
        //Call To Behaviour of Class
        pobj.display();
    }
}