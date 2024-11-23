/*
    Author : Pakshal Jain
    Date : 10/10/2022
    Program : To Check Entered Two Number are Equal or Not
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Find
{
    //Characteristics of Class
    private int No;
    private int No2;

    //Constructor of Class
    Find(int no,int no2)
    {
        this.No = no;
        this.No2 = no2;
    }
    //Behviour of Class
    boolean check()
    {
        if(this.No == this.No2)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Check 
{
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;
        boolean bret = false;
        
        System.out.println("Jay Ganesh...");
        
        //Creating Object of Scanner Class To Take Input
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number..");
        No = sobj.nextInt();

        System.out.println("Enter Second Number...");
        No2 = sobj.nextInt();

        //Creating object of Find Class
        Find fobj = new Find(No,No2);
        //Calling Behviour of Class
        bret = fobj.check();

        if(bret == true)
        {
            System.out.println("Entered Number "+No+" and "+No2+" Are Equal");
        }
        else 
        {
            System.out.println("Entered Number "+No+" and "+No2+" Are Not Equal");
        }
    }
}