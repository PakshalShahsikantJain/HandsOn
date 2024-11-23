/*
    Author : Pakshal Jain
    Date : 20/10/2022
    Program : To Calculate Difference Between Summation of Even and Odd Digits
*/

//Required Libraries
import java.lang.*;
import java.util.*;

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
    int difference()
    {
        int Digits = 0;
        int Diff = 0;
        int Sum = 0;
        int Sum2 = 0;

        //Logic To Calculate Difference 
        while(this.No != 0)
        {
            Digits = this.No % 10;
            if(Digits % 2 == 0)
            {
                Sum = Sum + Digits;
            }
            else if(Digits % 2 != 0)
            {
                Sum2 = Sum2 + Digits;
            }
            this.No = this.No / 10;
        }

        Diff = Sum - Sum2;

        return Diff;
    }
}

//Main Class
class Diff 
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
        //Call To Behaviour of Function
        iret = cobj.difference();

        //Printing Difference Calcualted
        System.out.println("Difference Between Summation of Even and Odd Digits is : "+iret);
    }
}