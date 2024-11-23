/*
    Author : Pakshal Shashikant Jain 
    Date : 12/06/2023

    Program : Accept N numbers from user and display all such elements which are even and divisible by 5.
              Input : N : 6
              Elements : 85 66 3 80 93 88
              Output : 80 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class EvenDiv
{
    //Characteristics of Class
    int isize;
    int arr[];

    //Constrcutor of Class
    EvenDiv()
    {
        this.isize = 0;
        this.arr = new int[this.isize];
    }

    //Behaviour of Class To Take Input From User
    void Accept()
    {
        int i = 0;

        //Creating object of Scacnner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Number of Rows You Want....");
        this.isize = sobj.nextInt();

        //Handeling Condition if Value Entered By user in negavtive
        if(this.isize < 0)
        {
            this.isize = -this.isize;
        }

        //Allocating memory To Array 
        this.arr = new int[this.isize];

        //Taking input From User
        System.out.println("Enter Elements in Array : ");
        for(i = 0;i < this.isize;i++)
        {
            System.out.println("Enter Element Number "+(i + 1));
            this.arr[i] = sobj.nextInt();
        }
    }

    //Behaviour of Class To Display Elements According To Given Condition
    void Display()  
    {
        int i = 0;

        //Printing Elements Which are Even And Divisible By 5 
        System.out.println("Printing Elements Which are Even And Divisible By 5");
        for(i = 0;i < this.isize;i++)
        {
            if(((this.arr[i] % 2) == 0)&&((this.arr[i] % 5) == 0))
            {
                System.out.printf("%d\t",this.arr[i]);
            }
        }
    }
}

//Main Class
class Display 
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Ganapati Bappa Morya...");

        //Creating object of EvenDiv Class
        EvenDiv eobj = new EvenDiv();

        //Calls To Behaviour of Class
        eobj.Accept();
        eobj.Display();

        //Deallocating Memory of Object
        eobj = null;
    }
}