/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the difference between largest
              and smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 90 (93 -3) 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Difference
{
    //Characteristics of Class
    int isize;
    int arr[];
    int i;

    //Constructor of Class
    Difference()
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh.....");
        
        //Taking input from user
        System.out.println("Enter Number of Elements you Want in array");
        this.isize = sobj.nextInt();

        if(this.isize < 0)
        {
            this.isize = -this.isize;
        }

        //Allocating Memory To array 
        arr = new int[this.isize];

        //Inserting Elements in array 
        System.out.println("Enter Elements in array");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number " + (this.i + 1));
            this.arr[this.i] = sobj.nextInt();
        }
    }

    //Behaviour of Class To Calculate Difference
    int diff()
    {
        int imax = 0;
        int imin = 0;
        int diff = 0;

        //Logic To find Difference
        imax = this.arr[0];
        imin = this.arr[0];
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            if(this.arr[this.i] > imax)
            {
                imax = this.arr[this.i];
            }
            else if(this.arr[this.i] < imin)
            {
                imin = this.arr[this.i];
            }
        }

        diff = imax - imin;

        return diff;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Diff
{
    //Main function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Ganapati Bappa Morya Mangal Murti Morya...");

        //Creating object of Differnce Class
        Difference dobj = new Difference();

        //Call To behaviours of Class
        dobj.Accept();
        iret = dobj.diff();

        //Printing Difference Calculated
        System.out.println("Difference Between Max and Min Elements is " + iret);       
    }
}