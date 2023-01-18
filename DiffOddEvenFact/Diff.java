/*
    Author : Pakshal Jain
    Date : 17/01/2023
    Program : To Calculate Difference Between Even and Odd Factorial of Entered Number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Difference 
{
    //Characteristics of Class
    private int No = 0;

    //Constructor of Class Parameterised 
    Difference(int no)
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
        int EvenFact = 1;
        int OddFact = 1;
        int Diff = 0;
        int i = 0;

        //Logic To Calculate Difference
        for(i = this.No;i > 0;i--)
        {
            if(i % 2 != 0)
            {
                OddFact = OddFact * i;
            }
            else 
            {
                EvenFact = EvenFact * i;
            }
        }

        Diff = EvenFact - OddFact;

        return Diff;
    }
}//End of Class

////////////////////////////////////////////////////////////////////////////

//Main Class
class Diff
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh...");

        //Taking Input From User
        System.out.println("Enter Any Number You Want : ");
        No = sobj.nextInt(); 

        //Creating object of Difference Class
        Difference dobj = new Difference(No);   

        //Call To Behaviour of Class
        iret = dobj.Calculate();

        //Printing Obtained Result
        System.out.println("Difference Between Even And Odd Factorial is : "+iret);
    }
}