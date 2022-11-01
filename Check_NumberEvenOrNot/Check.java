/*
    Author : Pakshal Jain
    Date : 18/09/2022
    Program : To Check Whether Entered Number is Even or Not
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Find
{
    //Caharacteristics of Class
    int No = 0;

    //Constructor of Class(Parameterised)
    Find(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    Boolean check()
    {
        if(this.No % 2 == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Check
{
    public static void main(String args[])
    {
        int No = 0;
        Boolean bret = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh.....");

        System.out.println("Enter One Number.....");
        No = sobj.nextInt();

        //Creating Object of Class
        Find fobj = new Find(No);
        //Calling Behaviour of Class
        bret = fobj.check();

        if(bret == true)
        {
            System.out.println("Entered Number is Even...");
        }
        else 
        {
            System.out.println("Entered Number is Odd.....");
        }
    }
}