/*
    Author : Pakshal Jain
    Date :10/03/2022
    Program : To Print Factors of Entered Number in Reverse/Decending order
*/

//Requtred Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
class Rev
{   
    //Characteristics of Class
    int No = 0;
    //Constructor of Class
    public Rev(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    void fact()
    {
        int i = 0;

        System.out.println("Factors of Entered number in Decending order is :");
        for(i = this.No - 1;i > 0;i--)
        {
            if(this.No % i == 0)
            {
                System.out.print(i+"\t");
            }
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Fact
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int No = 0;

        System.out.println("Jay Ganesh...");

        //Taing input from user using Scanner Class/Method   
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating object of Reverse Class
        Rev robj = new Rev(No);
        //Calling Behaviour of Class
        robj.fact();
    }   
}