/*
    Author : Pakshal Shashikant Jain 
    Date : 23/06/2023
    Program : Accept N numbers from user and display all such elements which are
              divisible by 3 and 5.
              
              Input :  N : 6
                       Elements : 85 66 3 15 93 88
              
              Output : 15 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Number 
{
    //Characterstics of Class
    int isize;
    int arr[];
    int i;

    //Constructor of Class
    Number() 
    {
        this.i = 0;
        this.isize = 0;
        this.arr = null;
    }

    //Behaviour of Class To Take input From User
    void accept()
    {
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter Number of Elements You Want in array");
        this.isize = sobj.nextInt();

        //Allocating memory to array
        this.arr = new int[this.isize];

        //Insterting elements in array
        System.out.println("Enter Elements in array");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.printf("Enter Element Number %d\n",(this.i + 1));
            this.arr[this.i] = sobj.nextInt();
        }
    }
    
    //Behaviour of Class To Display Elements which are Divisible by 3 and 5 
    void display()
    {
        System.out.println("Elements Divisible By 3 and 5 are : ");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            if(((this.arr[this.i] % 3) == 0)&&((this.arr[this.i] % 5) == 0))
            {
                System.out.printf("%d",this.arr[this.i]);
            }
        }

        this.arr = null;
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of Number Class   
        Number nobj = new Number();

        //Call To Behaviours of Class
        nobj.accept();
        nobj.display();

        //Deallocating memory of object Created
        nobj = null;
    }
}











