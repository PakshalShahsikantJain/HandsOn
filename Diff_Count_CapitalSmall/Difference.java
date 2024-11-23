/*
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and return
              difference between frequency of small characters and frequency of
              capital characters.

              Input : "MarvellouS"
              Output : 6 (8-2) 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Diff
{
    //Characteristics of Class
    char arr[];
    String str;

    //Constructor of Class
    Diff()
    {
        this.arr = null;
        this.str = " ";
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One String....");
        this.str = sobj.nextLine();

        //Allocating Memory to array 
        this.arr = new char[this.str.length()];
        //Initializing Value to array 
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Calculate Difference
    int Calculate()
    {
        int i = 0;
        int diff = 0;
        int icnt = 0;
        int icnt2 = 0;

        //Logic To Calculate Difference
        for(i = 0;i < this.arr.length;i++)
        {
            if((this.arr[i] >= 'A')&&(this.arr[i] <= 'Z'))
            {
                icnt++;
            }
            else if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
            {
                icnt2++;
            }
        }

        diff = icnt2 - icnt;

        return diff;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Difference
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh.....");

        //Creating object of Difference Class
        Diff dobj = new Diff();

        //Call To Behaviour of Class
        dobj.Accept();
        iret = dobj.Calculate();

        //Printing Difference Calculated
        System.out.printf("Difference Between Frequency of Small and Capital Letters is : %d",iret);
    }
}