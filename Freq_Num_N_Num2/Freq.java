/*
    Author : Pakshal Shashikant Jain 
    Date : 05/07/2023
    Program : Accept N numbers from user and accept one another number as NO return frequency of NO form it.
              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 2

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : 0 
*/

//Required libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Frequency 
{
    //Characterstics of Class
    int isize;
    int arr[];
    int i;
    int NO;

    //Constructor of Class
    Frequency()
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
        this.NO = 0;
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take input from user
        Scanner sobj = new Scanner(System.in);  

        //Taking input from user
        System.out.println("Enter Number of Elements You Want in array : ");
        this.isize = sobj.nextInt();

        //Allocating memory To array 
        this.arr = new int[this.isize];

        //Inserting Elements in array 
        System.out.println("Enter Elements in array : ");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.println("Enter Element Number : "+(i + 1));
            this.arr[this.i] = sobj.nextInt();
        }   

        //Taking Another number from user to count Frequency of C
        System.out.println("Enter Number you Want to count To Frequency of : ");
        this.NO = sobj.nextInt();
    }

    //Behaviour of Class To count Frequency 
    int Count()
    {
        int icnt = 0;

        //Logic To Calculate Frequency 
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            if(this.arr[this.i] == this.NO)
            {
                icnt = icnt + 1;
            }
        }

        return icnt;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Freq
{
    //Main function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of Frequency Class
        Frequency fobj = new Frequency();

        //Call to Behaviours of Class
        fobj.Accept();
        iret = fobj.Count();

        //Printing Frequency Calculated
        System.out.println("Frequency of Entered Number in Entered N Numbers is : "+iret);
    }
}
