/*
    Author : Pakshal Shashikant Jain
    Date : 29/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by converting all capital
              characters into small case.

              Input : "Marvellous Python 2"
              Output : "marvellous python 2" 
*/


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyString
{
    //Characteristics of Class
    char arr[];
    char brr[];
    String str;

    //Constructor of Class
    CopyString() 
    {
        this.arr = null;
        this.brr = null;
        this.str = " ";
    }

    //Behaviour of Class TO Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        //Allocating Memory to array 
        this.arr = new char[this.str.length()];
        this.brr = new char[this.str.length()];

        //Creting character array of Entered String 
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Copy String After Converting Given Case
    void StrCpySmall()
    {
        int i = 0;

        if((this.arr == null)&&(this.brr == null))
        {
            return;
        }

        //Logic To Copy String
        while(i != this.arr.length)
        {
            int ascii = 0;

            if((this.arr[i] >= 'A')&&(this.arr[i] <= 'Z'))
            {
                ascii = this.arr[i] + 32;
                this.arr[i] = (char)ascii;
            }

            this.brr[i] = this.arr[i];
            i++;
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Copy
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating object of CopyString Class
        CopyString cobj = new CopyString();

        //Call To Behaviour of Class
        cobj.Accept();
        cobj.StrCpySmall();

        //Printing Modified String
        System.out.print("Modified String Copied is : ");
        System.out.print(cobj.brr);
    }
}