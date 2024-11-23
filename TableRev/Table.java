/*
    Author : Pakshal Jain
    Date : 25/10/2022
    Program : To Display Table of Entered Number in reverse order
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Display
{
    //Characteristics of Class
    int No = 0;
    int No2 = 0;

    //Constructor of Class
    Display(int no,int no2)
    {
        this.No = no;
        this.No2 = no2;
    }
    //Behaviour of Class
    void Value()
    {
        int i = 0;
        int table = 0;

        System.out.println("Displaying Table in Reverse Order");
        for(i = this.No2;i > 0;i--)
        {
            table = No * i;
            System.out.print(table+"\t");
        }

    }
}

//Main Class
class Table 
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;

        //Creating object of Scanner Class To Take Input From user
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh...");

        //Taking Input From user
        System.out.println("Enter One Number To Display Table of");
        No = sobj.nextInt();

        System.out.println("Enter Number Till You Want The value of Table");
        No2 = sobj.nextInt();

        //Creating object of Display Class
        Display dobj = new Display(No,No2);
        //Call To Behaviour of Class
        dobj.Value();
    }
}