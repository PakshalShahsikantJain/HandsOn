/*
    Author : Pakshal Shashikant Jain 
    Date : 27/06/2023
    Program : Accept N numbers from user and return difference between frequency of
              even number and odd numbers.
              Input : N : 7
                      Elements : 85 66 3 80 93 88 90

              Output : 1 (4 -3)

*/

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class DiffFreq
{
    //Characteristics of Class
    int isize;
    int arr[];
    int i;

    //Constructor of Class
    DiffFreq()
    {
        this.isize = 0;
        this.arr = null; 
        this.i = 0;
    }

    //Behaviour of Class To Take Input From User
    void Accept()
    {
        //Creating object of Scanner Class To Take input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh....");

        //Taking Input from user
        System.out.println("Enter Number of Elements you Want in array : ");
        this.isize = sobj.nextInt();

        //Alloacating memory to array
        this.arr = new int[this.isize];

        //Inserting elements in array
        System.out.println("Enter ELements in array : ");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number : "+(this.i + 1));
            this.arr[this.i] = sobj.nextInt();
        }
    }

    //Behaviour of Class To Calcualate Differnce
    int calculate()
    {
        int icntEven = 0;
        int icntOdd = 0;
        int diff = 0;

        //Logic To Calculate
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            if((this.arr[this.i] % 2) == 0)
            {
                icntEven = icntEven + 1; 
            }
            else 
            {
                icntOdd = icntOdd + 1;
            }
        }

        diff = icntEven - icntOdd;

        return diff;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Diff
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;
        
        System.out.println("Ganapati Bappa Morya..");

        //Creating object of DiffFreq Class
        DiffFreq dobj = new DiffFreq();

        //Call To Behaviours of Class
        dobj.Accept();
        iret = dobj.calculate();

        //Printing Differnec Calculate
        System.out.println("Difference Between Frequency of Even and Odd Elements is : "+iret);
    }
}