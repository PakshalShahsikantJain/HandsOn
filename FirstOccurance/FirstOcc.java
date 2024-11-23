/*
    Author : Pakshal Shashikant Jain 
    Date : 07/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
                return index of first occurrence of that NO.

    Input : N : 6
            NO: 66
            Elements : 85 66 3 66 93 88
    Output : 1

    Input : N : 6
            NO: 12
            Elements : 85 11 3 15 11 111
    Output : 0 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Occurance
{
    //Characteristics of Class
    int isize;
    int arr[];
    int i;
    int NO;

    //Constructor of Class
    Occurance()
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
        this.NO = 0; 
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter Number of Elements You Want in Array : ");
        this.isize = sobj.nextInt();

        //Allocating Memory To array 
        this.arr = new int[this.isize];

        //Inserting Elements in array 
        System.out.println("Enter Elements in array : ");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number : "+(i + 1));
            this.arr[this.i] = sobj.nextInt();
        }

        //Entering another number to find occurance of in Entered N numbers
        System.out.println("Enter any Number You Want To Find First occurance of");
        this.NO = sobj.nextInt();
    }

    //Behaviour of Class to find Occurance
    int find()
    {
        //Logic 
        for(this.i = 0;this.i < this.isize - 1;this.i++)
        {
            if(this.arr[i] == this.NO)
            {
                break;
            }
        }

        if(this.arr[i] == this.NO)
        {
            return this.i;
        }
        else
        {
            return -1;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class FirstOcc
{
    //Main function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of Occurance Class
        Occurance obj = new Occurance();

        //Call To Behaviours of Class
        obj.Accept();
        iret = obj.find();

        System.out.printf("First Occurance of %d is at index number : %d",obj.NO,iret);
    }
}