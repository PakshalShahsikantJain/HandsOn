/*
    Author : Pakshal Shashikant Jain 
    Date : 11/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              return index of last occurrence of that NO.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 3

              Input : N : 6
                      NO: 93
                      Elements : 85 66 3 66 93 88
              Output : 4
            
              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : -1 
*/

//Reuired Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Occurance 
{
    //Characteristics of Class
    int NO;
    int arr[];
    int isize;
    int i;

    //Constructor of Class
    Occurance()
    {
        this.isize = 0;
        this.arr = null;
        this.i = 0;
        this.NO = 0;
    }

    //Behaviour of Class To Take Input From user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input From user
        Scanner sobj = new Scanner(System.in);

        //Taking Input From user
        System.out.println("Enter Number of Elements You Want in array ");
        this.isize = sobj.nextInt();

        //Allocating Memory To array 
        this.arr = new int[this.isize];

        //Inserting Elements in array 
        System.out.println("Enter Elements in array");
        for(this.i = 0;this.i < this.isize;this.i++)
        {
            System.out.printf("Enter Element Number %d \n",i + 1);
            this.arr[this.i] = sobj.nextInt();
        }

        //Taking another number from user To Find Last Occurance
        System.out.println("Enter Number You Want To Find Last Occurance of : ");
        this.NO = sobj.nextInt();
    }

    //Behaviour of Class To Find Last Occurance
    int lastocc()
    {
        //Logic 
        for(this.i = this.isize - 1;this.i > 0;this.i--)
        {
            if(this.arr[this.i] == this.NO)
            {
                break;
            }
        }

        //Handeling Conditions
        if(this.arr[this.i] == this.NO)
        {
            return this.i;
        }
        else
        {
            return -1;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Find
{
    //Main Function
    public static void main(String args[]) 
    {
        int iret = 0;

        System.out.println("Jay Ganesh.....");

        //Creating object of Occurance Class 
        Occurance obj = new Occurance();

        //Call To Behaviour of Class
        obj.Accept();
        iret = obj.lastocc();

        //Printing Last Occurance of Entered Number
        System.out.printf("Last Occurance of %d number is At index Number %d",obj.NO,iret);

        //Deallocating Memory of Object 
        obj = null;
    }
}