/*
    Author : Pakshal Shashikant Jain 
    Date : 07/06/2023
    Program :  Accept N numbers from user and return difference between summation
               of even elements and summation of odd elements.
               Input : N : 6
               Elements : 85 66 3 80 93 88
               Output : 53 (234 - 181) 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class EvenOdd
{
    //Characteristics of Class
    private int isize;
    private int arr[];   

    //Constructor of Class
    EvenOdd()
    {
        this.isize = 0;
    }

    //Behaviour of Class To Take input From From User
    void Accept()
    {
        int i = 0;

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Number of Elements You Want in Array");
        isize = sobj.nextInt();

        this.arr = new int[this.isize];

        System.out.println("Enter ELements in Array....");
        for(i = 0;i < this.isize;i++)
        {
            System.out.printf("Enter Element Number %d \n",i + 1);
            this.arr[i] = sobj.nextInt();
        }
    }

   //Behaviour of Class To Calcualte Difference 
    int Diff()
    {
        int i = 0;
        int SumEven = 0;    
        int SumOdd = 0;
        int diff = 0;

        //Logic To Calculate Difference
        for(i = 0;i < isize;i++)
        {
            if((this.arr[i] % 2) == 0)
            {   
                SumEven = SumEven + this.arr[i];
            }
            else 
            {
                SumOdd = SumOdd + this.arr[i];
            }
        }

        diff = SumEven - SumOdd;

        return diff;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Diff
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of EvenOdd Class
        EvenOdd eobj = new EvenOdd();

        //Call To Behaviours if Class
        eobj.Accept();
        iret = eobj.Diff();

        //Printing Difference Calculated
        System.out.printf("Difference Between Smmation of Even and Odd Elements is : %d",iret);

        //Deallcating Memory Of Object
        eobj = null;
    }
}