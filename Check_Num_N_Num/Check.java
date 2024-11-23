/*
    Author : Pakshal Shashikant Jain 
    Date : 06/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              check whether NO is present or not.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : TRUE

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : FALSE 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Frequency 
{
    //Characteristics of Class
    int isize;
    int arr[];
    int NO;
    int i;

    //Constructor of Class
    Frequency()
    {
        this.i = 0;
        this.isize = 0;
        this.NO = 0;
        this.arr = null;
    }

    //Behaviour of Class To Take Input From user
    void Accept()
    {
        //Creating Object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);  

        //Taking Input From User
        System.out.println("Enter Number of Elements You Want in array : ");
        this.isize = sobj.nextInt();

        //Allocating Memory To Array
        this.arr = new int[this.isize];

        //Inserting Elements in Array 
        System.out.println("Enter Elements in Array : ");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number : "+(this.i + 1));
            this.arr[this.i] = sobj.nextInt();
        }

        //Taking Another Number from user To Check if it is Present or not
        System.out.println("Enter Number To Check if it is Present or Not in Entered N Numbers : ");
        this.NO = sobj.nextInt();
    }

    //Behaviour of Class To Check
    boolean check()
    {
        //Logic 
        for(this.i = 0;this.i < this.isize - 1;this.i++)
        {
            if(this.arr[this.i] == this.NO)
            {
                break;
            }
        }

        //Handeling Condition
        if(this.arr[this.i] == this.NO)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Check
{
    ///Main Function
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Jay ganesh...");

        //Creating object of Frequency Class 
        Frequency fobj = new Frequency();
        //Call To Behaviours of Class
        fobj.Accept();
        bret = fobj.check();

        //Handeling Condition if Return Value is True
        if(bret == true)
        {
            System.out.printf("Number %d is Present in Entered N Numbers",fobj.NO);
        }
        //Handeling Condition if Return Value is False
        else
        {
            System.out.printf("Number %d is Not Present in Entered N Numbers",fobj.NO);
        }

        //Deallocating Memory of Object Created
        fobj = null;
    }
}