/*
    Author : Pakshal Jain
    Date : 15/10/2022
    Program : To Print Digits of Entered Number in Reverse order
*/

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Digits
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Digits(int no)
    {
        this.No = no;
    }

    //Behviour of Class
    void displayRev()
    {
        int digit = 0;

        System.out.println("Printing Digits of Entered Number in Reverse Order");
        //Logic To Print Digits in reverse Order
        while(this.No != 0)
        {
            digit = this.No % 10;
            System.out.println(digit);
            this.No = this.No / 10;
        }
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    public static void main(String args[])
    {
        int No = 0;

        System.out.println("Jay Ganesh....");
        //Creating Object of Scanner Class To Take Input
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Any Two or More Than Two Digit Number....");
        No = sobj.nextInt();

        //Creating object of Digits Classs
        Digits dobj = new Digits(No);

        //Calling Behaviour of Class
        dobj.displayRev();
    }
}//End of Main Class