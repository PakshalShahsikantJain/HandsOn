/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the Smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 3 
*/

//Required Libraires
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Minimum
{
    //Characaterstics of Class
    int i;
    int isize;
    int arr[];

    //Constructor of Class
    Minimum()
    {
        this.i = 0;
        this.isize = 0;
        this.arr = null;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter Number of Elements You Want in array ");
        this.isize = sobj.nextInt();

        //Handeing Conditions if isize is less Than Zero
        if(this.isize < 0)
        {
            this.isize = -this.isize;
        }

        //Allocating Memory To Array 
        this.arr = new int[this.isize];

        if(this.arr == null)
        {
            System.out.println("Unable To Allocate Memory To array ");

            return;
        }

        //Inserting Elements in array 
        System.out.println("Enter Elements in array");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number "+(this.i + 1));
            this.arr[this.i] = sobj.nextInt();
        }
    }

    //Behaviour of Class To Find Minimum Number from Entered N Numbers
    int mini()
    {
        int imin = 0;

        //Logic
        imin = this.arr[0];
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            if(this.arr[this.i] < imin)
            {
                imin = this.arr[this.i];
            }
        }

        return imin;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Min
{
    //Main function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh.....");

        //Creating object of Minimum Class
        Minimum mobj = new Minimum();

        //Call To behaviours of Class
        mobj.Accept();
        iret = mobj.mini();
        
        //Printing Mininum Element Found in Entered N Elements
        System.out.println("Printing Minimum Number from Entered N Numbers : "+iret);
    }
}