/*
    Author : Pakshal Shashikant Jain 
    Date : 30/06/2023
    Program : Accept N numbers from user check whether that numbers contains 11 in it or not.
              Input : N : 6
                      Elements : 85 66 11 80 93 88
              Output : 11 is present

              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 11 is absent
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Num
{
    //Characteristics of Class
    int isize;
    int arr[];
    int i;

    //Constructor of Class
    Num()
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
    }

    //Behaviour of Class
    void Accept()
    {
        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Number of Elements you Want in array ");
        this.isize = sobj.nextInt();    

        //Allocating Memory to array 
        this.arr = new int[this.isize];

        //Inserting Elememts in array 
        System.out.println("Enter Elements in array ");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number : "+(this.i + 1));
            this.arr[this.i] = sobj.nextInt();
        }
    }

    //Behaviour of  Class To Check 11 is Number is Present or Not
    boolean check()
    {
        //Logic 
        for(this.i = 0;this.i < this.isize - 1;this.i++)
        {
            if(this.arr[this.i] == 11)
            {
                break;
            }
        }

        if(this.arr[this.i] == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Check
{
    //Main Function
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Jay Ganesh...");

        //Creating object of Num Classs
        Num nobj  = new Num();
        nobj.Accept();

        //Creating object of Check Class
        bret = nobj.check();

        //Handeling Conditions 
        if(bret == true)
        {
            System.out.println("11 is Present in Entered Array");
        }
        else 
        {
            System.out.println("11 is not Present in Entered Array");
        }
    }   
}