/*
    Author : Pakshal Shashikant Jain 
    Date : 24/06/2023
    Program : Accept N numbers from user and display all such elements which are
              multiples of 11.

              Input : N : 6
                      Elements : 85 66 3 55 93 88
                
              Output : 66 55 88 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Number 
{
    //Characteristics of Class
    int isize;
    int arr[];
    int i;

    //Constructor of Class
    Number()
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
    }

    //Behaviour of Class To Take input From User
    void Accept()
    {
        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);
        
        //Taking input From User
        System.out.println("Enter Number of Elements You Want in array");
        this.isize = sobj.nextInt();

        //Allocating memory to array 
        arr = new int[this.isize];

        //Inserting elements in array
        System.out.println("Enter Elements in array : ");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.printf("Enter Element Number %d \n",this.i + 1);
            this.arr[this.i] = sobj.nextInt();
        }
    }

    //Behaviour of Class To Display Output
    void display()
    {
        System.out.println("Elements Which are Multiples of 11 are : ");
        
        //Logic
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            if((this.arr[this.i] % 11) == 0)
            {
                System.out.printf("%d\t",this.arr[this.i]);
            }
        }

        //Deallocating Memory of array 
        this.arr = null;
    }
}

//////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating Memory of Object Created
        Number nobj = new Number();
        nobj.Accept();
        nobj.display();

        //Deallocating memory of object Created
        nobj = null;
    }
}