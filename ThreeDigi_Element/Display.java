/*
    Author : Pakshal Shashikant Jain 
    Date : 18/07/2023
    Program : Accept N numbers from user and display all such numbers which contains
              3 digits in it.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 665 953 858
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Digits
{
    //Characteristics of Class
    int isize;
    int arr[];
    int i;

    //Constructor of Class
    Digits()
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter Number of Elements You Want in array : ");
        this.isize = sobj.nextInt();

        //Allocating memory To Array 
        this.arr = new int[this.isize];

        //Inserting elements in array 
        System.out.println("Enter Elements in array :");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number : "+(this.i + 1));
            this.arr[this.i] = sobj.nextInt();
        }
    }

    //Behaviour of Class To Display All Such ELements Which contains 3 Digits in it
    void display()
    {
        int digits = 0;
        int no = 0;
        int icnt = 0;

        //Logic To Print
        System.out.println("Printing Such Elements which contains 3 Digits in it");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            no = this.arr[this.i];

            while(no != 0)
            {
                digits = no % 10;
                icnt = icnt + 1;
                no = no / 10;
            }    

            if(icnt == 3)
            {
                System.out.print(this.arr[this.i]+"\t");
            }
            icnt = 0;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display 
{
    //Main function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh......");

        //Creating object of Digits Class
        Digits dobj = new Digits();

        //Call To behaviours of Class
        dobj.Accept();
        dobj.display();

        //Deallocating Memory of Array 
        dobj = null;
    }
}