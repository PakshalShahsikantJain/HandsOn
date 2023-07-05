/*
    Author : Pakshal Shashikant Jain 
    Date : 04/07/2023
    Program : Accept N numbers from user and return frequency of 11 form it.
              Input : N : 6
                      Elements : 85 66 3 15 93 88
              Output : 0

              Input : N : 6
                      Elements : 85 11 3 15 11 111
              Output : 2
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Num
{
    //Characteristics of Class
    int i;
    int isize;
    int arr[];

    //Constructor of Class
    Num()
    {
        this.i = 0;
        this.isize = 0;
        this.arr = null;
    }

    //Behaviour of Class To Take Input From user
    void Accept()
    {
        //Creating object of Scanner Class To Take input From user
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Number of Elements you Want in array : ");
        this.isize = sobj.nextInt();

        //Allocating Memory To array 
        this.arr = new int[this.isize];

        //Inserting Elements in array
        System.out.println("Enter Elements in array : ");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Elements Number : "+(i + 1));
            this.arr[this.i] = sobj.nextInt();
        }
    }

    //Behaviour of Class To Count Frequency 
    int  count()
    {
        int icnt = 0;

        for(this.i = 0;this.i < this.isize;this.i++)
        {
            if(this.arr[this.i] == 11)
            {
                icnt = icnt + 1;
            }
        }

        return icnt;
    }
} 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Frequency 
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh.....");

        //Creating object Num Class
        Num nobj = new Num();

        //Calls To Behaviour of Class
        nobj.Accept();
        iret = nobj.count();    

        //Printing Frequency Calculated
        System.out.println("Frequency of 11 in Entered Number is : "+iret);
    }
}