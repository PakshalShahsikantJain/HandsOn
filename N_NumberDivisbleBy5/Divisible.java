/*
    Author : Pakshal Shashikant Jain
    Date : 07/06/2023
    Program : Accept N numbers from user and display all such elements which are
              divisible by 5.
              
              Input : N : 6
              Elements : 85 66 3 80 93 88
              Output : 85 80 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Number 
{
    //Characteristics of Class
    int isize;
    int arr[];

    //Constructor of Class
    Number() 
    {
        this.isize = 0;
        this.arr = new int[this.isize];
    }

    //Behaviour of  Class To Take Input From User
    void Accept()
    {
        int i = 0;

        //Creating object of Scanne Class To Take Input From User
        Scanner sobj = new Scanner(System.in);
        
        //Taking input From User
        System.out.println("Enter Number of Elements You Want in Array");
        this.isize = sobj.nextInt();

        this.arr = new int[isize];
        
        //Inserting Element in Array 
        System.out.println("Enter Elements in Array : ");
        for(i = 0;i < this.isize;i++)
        {
            System.out.printf("Enter ELement Number %d\n",i + 1);
            this.arr[i] = sobj.nextInt();
        }
    }

    //Behaviour of Class To Display Element Divisible By 5
    void Display()
    {
        int i = 0;

        //Logic To Display Elements 
        System.out.println("Elements Divisible By 5 Are : ");
        for(i = 0;i < this.isize;i++)
        {
            if((this.arr[i] % 5) == 0)
            {
                System.out.printf("%d\t",this.arr[i]);
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Divisible 
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating object of Number Class
        Number nobj = new Number();

        //Call To Behaviours of Class
        nobj.Accept();
        nobj.Display();

        nobj = null;
    }
}