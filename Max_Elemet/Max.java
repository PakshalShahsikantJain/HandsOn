/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the largest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 93 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Maximum
{
    //Characteristics of Class
    int isize;
    int arr[];
    int i;

    //Constructor of Class
    Maximum()
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter Number of Elements You Want in array");
        this.isize = sobj.nextInt();

        //Handeling Conditions
        if(this.isize < 0)
        {
            this.isize = -this.isize;
        }

        //Allocating Memory To Array 
        arr = new int[this.isize];

        //Inserting Elements in array 
        System.out.println("Enter Element in array ");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number : "+(i + 1));
            this.arr[this.i] = sobj.nextInt();
        }
    }
    
    //Behaviour of Class To find Max Element
    int MaxElem()   
    {
        int max = 0;

        max = this.arr[0];
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            if(this.arr[this.i] > max)
            {
                max = this.arr[this.i];
            } 
        }

        return max;
    }
}//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Max
{
    //Main function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh.....");

        //Creating object of Maximum Class    
        Maximum mobj = new Maximum();

        //Call To Behaviours of Class
        mobj.Accept();
        iret = mobj.MaxElem();

        //Printing Max Element From Entered Numbers
        System.out.printf("Maximum number from Entered N Number is : %d",iret);
    }
}