/*
    Author : Pakshal Jain
    Date : 09/10/2022
    Program : To Accept one Number from user and Check Wheter Entered number is Greater than 100 or not
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
class Find
{
    //Characteristics of Class
    private int No = 0;
    
    //Constructor of Class
    Find(int no)
    {
        this.No = no;
    }
    //Bheviour of Class
    boolean check() 
    {
        if(this.No > 100)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}//End of Class

//Main Class
class Check
{
    public static void main(String args[])
    {
        int No = 0;
        boolean bret = false;

        System.out.println("Jay Ganesh....");

        //Creating Object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter one Number");
        No = sobj.nextInt();

        //Creating object of Find Class
        Find fobj = new Find(No);
        //Calling Behviour of Class
        bret = fobj.check();

        if(bret == true)
        {
            System.out.println("Entered Number "+ No +" is Greatere Than 100");
        }
        else 
        {
            System.out.println("Entered Number "+ No +" is Smaller Than 100");
        }
    }
}