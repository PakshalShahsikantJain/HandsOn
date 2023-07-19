/*
    Author : Pakshal Shashikant Jain 
    Date : 18/07/2021
    Program : Accept N numbers from user and display summation of digits of each number.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 17 17 3 13 17 21 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Digits
{
    //Characteristics of Class
    int isize;
    int arr[];
    int i;

    //Contructor of Class
    Digits()
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter Number of Elements You Want in array");
        this.isize = sobj.nextInt();

        //Allocating memory To array
        arr = new int[this.isize];

        //Inserting Elements in array
        System.out.println("Enter Elements in array");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number "+(this.i + 1));
            this.arr[this.i] = sobj.nextInt();
        }
    }

    //Behaviour of Class To Find Summation of Digits of Entered Each Elememts
    void Sum()
    {
        int isum = 0;
        int iDigits = 0;
        int No = 0;

        //Logic To Calculate
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            No = this.arr[this.i];

            while(No != 0)
            {
                iDigits = No % 10;
                isum = isum + iDigits;
                No = No / 10; 
            }

            System.out.printf("%d\t",isum);
            isum = 0;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Summation
{
    //Main function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh......");

        //Creating obeject of Scanner Class To Take Digits
        Digits dobj = new Digits();

        //Call To Behaviours of Class
        dobj.Accept();
        dobj.Sum();

        //Deallocating Memory of object Created
        dobj = null;
    }
}