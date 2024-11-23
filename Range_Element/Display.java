/*
    Author : Pakshal Shashikant Jain 
    Date : 12/07/2023
    Program : Accept N numbers from user and accept Range, Display all elements from
              that range.
              
              Input : N : 6
                      Start: 60
                      End : 90
                      Elements : 85 66 3 76 93 88
              Output : 66 76 88

              Input : N : 6
                      Start: 30
                      End : 50
                      Elements : 85 66 3 76 93 88
              Output : 
*/

//Required Libraires
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Range
{
    //Characteristics of Class
    int isize;
    int arr[];
    int i;
    int start;
    int end;

    //Constructor of Class
    Range() 
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
        this.start = 0;
        this.end = 0;
    }

    //Behaviour of Class To Take Input From user
    void Accept()
    {
        //Creating Object of Scanner Class To Take Input From user
        Scanner sobj = new Scanner(System.in);

        //Taking Input From user
        System.out.println("Enter Number of Elements You Want in array");
        this.isize = sobj.nextInt();

        //Allocating Memory To array
        this.arr = new int[this.isize];

        //Inserting Elements in array 
        System.out.println("Enter Elements in array");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number "+(i + 1));
            this.arr[this.i] = sobj.nextInt();
        }

        //Taking Starting Number of Range from user
        System.out.println("Enter Starting Number");
        this.start = sobj.nextInt();

        //Taking Ending Number of Range From user
        System.out.println("Enter Ending Number");
        this.end = sobj.nextInt();
    }

    //Behaviour of Class To Display Elements Between Entered Range
    int[] Display()
    {
        int brr[] = null;

        //Allocating Memory To array 
        brr = new int[this.isize];

        //logic 
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            if((this.arr[this.i] >= this.start)&&(this.arr[this.i] <= this.end))
            {
                brr[this.i] = arr[this.i]; 
            }
        }

        return brr;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main function
    public static void main(String args[])
    {
        int iret[] = null;
        int i = 0;

        System.out.println("Jay Ganesh...");

        //Creating Object of Range Class
        Range robj = new Range();

        //Allocating Memory To iret array 
        iret = new int[robj.isize];

        //Call To Behaviours of Class
        robj.Accept();
        iret = robj.Display();
        
        //Printing Elements Which are in Entered Range
        for(i = 0;i < robj.isize;i++)
        {
            if(iret[i] != 0)
            {
                System.out.printf("%d\t",iret[i]);
            }
        }

        //Deallocating Memory of Object Created
        robj = null;
    }
}