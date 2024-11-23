/*
    Author : Pakshal Jain
    Date : 22/11/2022
    Program : To Calculate Summation of Numbers in Entered Range
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Calculate
{
    //Characteristics of Class
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

        for(i = this.No;i <= this.No2;i++)
        {
            Sum = Sum + i;
        }

        return Sum;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Range
{   
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;
        int iret = 0;

        System.out.println("Jay Ganesh....");
        
        //Creating Object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Starting Number");
        No = sobj.nextInt();

        System.out.println("Enter Ending Number");
        No2 = sobj.nextInt();

        //Handeling Condition if Entered Number is Negative
        if((No < 0)||(No2 < 0))
        {
            System.out.println("Invalid Range");
            return;
        }
        //Handeling Condition if Entered Starting Number is Greater Than 0
        else if(No > No2) 
        {
            System.out.println("Invalid Range");
            return;
        }

        //Creating object of Calculate Class
        Calculate cobj = new Calculate(No,No2);
        //Call To Behaviour of Class
        iret = cobj.Summation();

        //Printing Obtained Result
        System.out.println("Summation of Numbers in Entered Range is : "+iret);
    }
}