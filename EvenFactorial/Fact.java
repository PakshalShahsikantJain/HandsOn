/*
    Author : Pakshal Jain
    Date : 17/12/2022
    Program : To Calculate Even Factorial of Entered Number
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class EvenFactorial
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    public EvenFactorial(int no)
    {
        //Handeling Condition if Entered Number is Negative
        if(no < 0)
        {
            no = -no;
        }
        this.No = no;
    }

    //Behaviour of Class
    int calculate()
    {
        int Fact = 1;
        int i = 0;

        //Logic to calculate Even Factorial of Number
        for(i = this.No;i > 0;i--)
        {
            if(i % 2 == 0)
            {
                Fact = Fact * i;
            }
        }

        return Fact;
    }
}//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Fact
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        //Creating object of Scanner class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh...");

        //Taking input From user
        System.out.println("Enter One Number to Calculate Factorial of");
        No = sobj.nextInt();

        //Creating object of EvenFactorial
        EvenFactorial eobj = new EvenFactorial(No);

        //Call To Behaviour of Class
        iret = eobj.calculate();

        //Printing obtained output
        System.out.println("Even Factorial of Entered Number is : "+iret);
    }
}