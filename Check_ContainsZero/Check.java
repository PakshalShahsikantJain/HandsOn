/*
    Author : Pakshal Jain
    Date : 16/10/2022
    Program : To Check Entered Number Constains Zero or Not
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Find
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Find(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    boolean check()
    {
        int Digit = 0;

        //Logic To Check
        while(this.No != 0)
        {
            Digit = this.No % 10;
            if(Digit == 0)
            {
                break;
            }
            this.No = this.No / 10;
        }

        //Handeling Condition if Entered Number Constains Zero
        if(Digit == 0)
        {
            return true;
        }
        //Handeling Condition if Entered Number Does Not Constains Zero
        else
        {
            return false;
        }
    }
}
class Check
{
    public static void main(String args[])
    {
        int No = 0;
        boolean bret = false;

        System.out.println("Ganapati Bappa Morya");
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating object of Find Class
        Find fobj = new Find(No);
        //Calling Behaviour of Find Class
        bret = fobj.check();

        //Handeling Condition if Return Value is True
        if(bret == true)
        {
            System.out.println("Entered Number Contains Zero");
        }
        //Handeling Condition if Return Value is False
        else
        {
            System.out.println("Entered Number Does Not Constains Zero");
        }
    }
}