/*
    Author : Pakshal Shashikant Jain 
    Date : 15/07/2023
    Program : Accept N numbers from user and return product of all odd elements.
              Input : N : 6
                      Elements : 15 66 3 70 10 88
                      Output : 45
              Input : N : 6
                      Elements : 44 66 72 70 10 88
                      Output : 0
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class OddElem
{
    //Characterisitsc of Class
    int isize;
    int arr[];
    int i;

    //Constructor of Class
    OddElem()
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
    }

    //Behaviour of Class To Take Input From user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input From user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter Number of Elements You Want in arary");
        this.isize = sobj.nextInt();

        //Handeling Condition if Size is Less Than 0
        if(this.isize < 0)
        {
            this.isize = -this.isize;
        }

        //Allocating Memory To array 
        arr = new int[this.isize];  

        //Inserting Elements in array 
        System.out.println("Enter Elements in array");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number "+(i + 1));
            this.arr[this.i] = sobj.nextInt();
        }
    }

    //Behaviour of Class to Calculate Product
    int product()
    {
        int imult = 1;

        //Logic 
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            if((this.arr[i] % 2) != 0)
            {
                imult = imult * this.arr[i];
            }
        } 

        if(imult ==  1)
        {
            imult = 0;
        }

        return imult;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Product
{
    //Main Function
    public static void main(String args[])
    {
        int i = 0;
        int iret = 0;

        System.out.println("Jay Ganesh.....");
        
        //Creating object of Object Class
        OddElem obj = new OddElem();

        //Call To Behaviours of Class
        obj.Accept();
        iret = obj.product();

        //Printing Product of Odd Elements 
        System.out.println("Product of odd Elements in Entered Odd Number is : "+iret);
    }
}