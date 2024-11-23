/*
    Author : Pakshal Jain
    Date : 23/10/2022
    Program : To Calculate Factorial of Entered Number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Calculate 
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Calculate(int no)
    {
        this.No = no;
    }

    //Behaviour of Class
    int factorial() 
    {
        int i = 0;
        int fact = 1;

        //Handeling Condition if Entered Number is Negative
        if(this.No < 0)
        {
            this.No = -this.No;
        }

        for(i = this.No;i > 0;i--)
        {
            fact =  fact * i;   
        }

        return fact;
    }
}

//////////////////////////////////////////////////////////////////////////////

//Main Class
class Fact
{
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh...");
        
        //Taking Input From User
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating object of Calculate Class
        Calculate cobj = new Calculate(No);

        //Call To object of Behaviour of Function
        iret = cobj.factorial();

        System.out.println("Factorial of Entered Number : "+iret);
    }
}