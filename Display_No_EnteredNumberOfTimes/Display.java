/*
    Author : Pakshal Jain
    Date : 18/09/2022
    Program : To display first number in second number of times
*/

//Required Imports/Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Print
{
    //Characteristics of Class
    private int No = 0;
    private int No2 = 0;

    //Constructor of Class(Parameterised)
    public Print(int no,int no2)
    {
        this.No = no;
        this.No2 = no2;
    }
    //Behaviour of Class
    void display()
    {
        int i = 0;

        if(this.No2 < 0)
        {
            this.No2 = -this.No2;
        }

        for(i = 0;i < this.No2;i++)
        {
            System.out.print(this.No+"\t");
        }
    }
}

class Display
{
    public static void main(String args[])
    {   
        //Creating Object Of Scanner Class To Take Inputs
        Scanner sobj = new Scanner(System.in);
        int No = 0;
        int No2 = 0;

        System.out.println("Jay Ganesh........");
        System.out.println("Enter Number To Print");
        No = sobj.nextInt();

        System.out.println("Enter NUmber to iterate....");
        No2 = sobj.nextInt();

        //Creting Object of Class
        Print pobj = new Print(No,No2);
        //Calling Behaviour of Class
        pobj.display();
    }
}