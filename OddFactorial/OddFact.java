/*
    Author : Pakshal Jain 
    Date : 14/01/2023
    Program : To Caluclate OddFactorial of Entered Number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class OddFactorial
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class Parameterise Constructor
    OddFactorial(int no)
    {
        if(no < 0)
        {
            no = -no;
        }

        this.No = no;
    }

    //Behaviour of Class
    int Calculate()
    {
        int Fact = 1;
        int i = 0;

        //Logic To Calculate ODD Factorial of Entered Number
        for(i = this.No;i > 0;i--)
        {
            if(i % 2 != 0)
            {
                Fact = Fact * i;
            }
        }

        return Fact;
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Object of Class
class OddFact
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh....");

        //Taking Input From User
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creatig object of OddFactorial Class
        OddFactorial obj = new OddFactorial(No);

        //Call To Behaviour of Class
        iret = obj.Calculate();

        //Printing Obtained Output
        System.out.println("Odd Factorial of Entered Number is : "+iret);
    }   
}