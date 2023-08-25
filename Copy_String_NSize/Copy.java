/*
    Author : Pakshal Shashikant Jain
    Date : 24/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strncpy() function)
              
              Input : "Marvellous Multi OS"
                       10
              Output : Marvellous
              
              Note : If third parameter is greater than the size of source string then
              copy whole string into destination. 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyString
{
    //Characteristics of Class
    char arr[];
    char brr[];
    String str;
    int isize;

    //Constructor of Class
    CopyString()
    {
        this.arr = null;
        this.brr = null;
        this.str = " ";
        this.isize = 0;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        System.out.println("Enter One Number Till You Want To Copy String");
        this.isize = sobj.nextInt();

        //Allocating Memory To array Dynamically 
        this.arr = new char[this.str.length()];
        this.brr = new char[this.isize];

        //Creating Character Array of Entered String
        this.arr = this.str.toCharArray();
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Behaviour of Class To Copy Contents of Entered String into Another String Till Entered Size
    void StrNCpyX()
    {
        int i = 0;

        if((this.arr == null)&&(this.brr == null))
        {
            return;
        }

        //Logic To Copy Contents of String 
        while((i != this.arr.length)&&(this.isize != 0))
        {
            this.brr[i] = this.arr[i];
            i++;
            this.isize--;
        }
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Copy
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of CopyString class
        CopyString cobj = new CopyString();

        //Call To Behaviours of Class
        cobj.Accept();
        cobj.StrNCpyX();

        //Printing Copied String 
        System.out.print("Copied String is : ");
        System.out.print(cobj.brr);
    }
}