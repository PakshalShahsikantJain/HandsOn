/*
    Author : Pakshal Jain
    Date : 24/11/2022
    Program : To Calculate Summation of Even number in Entered Range
*/

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Calculate 
{
    //Chracteristics of Class
    int No = 0;
    int No2 = 0;

    //Constructor of Class
    Calculate(int no,int no2)
    {
        this.No = no;
        this.No2 = no2;
    }

    //Behaviour of Class
    int Summation()
    {
        int i = 0;
        int Sum = 0;

        //logic
        for(i = this.No;i <= this.No2;i++)
        {
            if(i % 2 == 0)
            {
                Sum = Sum + i;
            }
        }

        return Sum;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Range
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;
        int iret = 0;

        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh...");

        //Taking Input From User
        System.out.println("Enter Starting Number");
        No = sobj.nextInt();

        System.out.println("Enter Ending Number");
        No2 = sobj.nextInt();

        //Handeling Condition if Entered Numbers are less Than 0
        if((No < 0)||(No2 < 0)) 
        {
            System.out.println("Invalid Range");
            return;
        }
        //Handeling Condition if Starting NUmber is Greater Than Ending Number
        else if(No > No2)
        {
            System.out.println("Invalid Range");
            return;
        }

        //Creating object of Calculate Class
        Calculate cobj = new Calculate(No,No2);

        //Calling Behaviour of Class
        iret = cobj.Summation();

        //Printing obtained output
        System.out.println("Summation of Numbers in Entered Range is : "+iret);
    }
}