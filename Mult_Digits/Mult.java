/*
    Auhtor : Pakshal Jain 
    Date : 20/10/2022
    Program : To Calculate Multiplication of Digits of Entered Number
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
    int calcu()
    {
        int Digit = 0;
        int Mult = 1;

        //Logic
        while(No != 0)
        {
            Digit = this.No % 10;
            if(Digit == 0)
            {
                Digit = 1;
            }
            Mult = Mult * Digit;
            this.No = this.No / 10;
        }

        return Mult;
    }
}

//Main Class
class Mult
{
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        System.out.println("Jay Ganesh....");
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating Object of Calculate Class
        Calculate cobj = new Calculate(No);
        iret = cobj.calcu();

        //Printing Multiplication of Digits
        System.out.println("Multiplication of Digits of Entered Number is : "+iret);
    }
}