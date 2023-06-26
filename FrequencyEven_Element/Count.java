/*
    Author : Pakshal Shashikant Jain 
    Date : 26/06/2023
    Program : Accept N numbers from user and return frequency of even numbers.
              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 3 
*/

//Required Libraries
import java.util.*;
import java.lang.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Frequency
{
    //Characteristics of Class
    int isize;
    int arr[];
    int i;

    //Constructor of Class
    Frequency()
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
    }

    //Behaviour of Class To Take Input From User
    void Accept()
    {
        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Elements You Want in array");
        this.isize = sobj.nextInt();

        this.arr = new int[this.isize];

        //Inserting Elements in array
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.printf("Enter Element Number : %d \n",this.i + 1);
            this.arr[this.i] = sobj.nextInt();
        }
    }
    
    //Behaviour of Class To Count Frequecy of Even Elements 
    int count()
    {
        int icnt = 0;

        for(this.i = 0;this.i < this.isize;this.i++)
        {
            if((this.arr[this.i] % 2) == 0)
            {
                icnt = icnt + 1;        
            }
        }

        return icnt;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Count 
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh.....");

        //Creating object of Frequecy Class
        Frequency fobj = new Frequency();

        //Call To Behaviours of Class
        fobj.Accept();
        iret = fobj.count();

        //Printing Frequency Calculated
        System.out.println("Frequecy of Even Number from Entered Elements is : "+iret);

        //Deallocating Memory of Object Created
        fobj = null;
    }
}