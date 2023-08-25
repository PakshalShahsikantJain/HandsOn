/*
    Author : Pakshal Shashikant Jain
    Date : 23/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strcpy() function)
              
              Input : "Marvellous Multi OS"
              Output : "Marvellous Multi OS" in another string 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyString
{
    //Characteristics of Class
    String str;
    char arr[];
    char brr[];

    //Constructor of Class
    CopyString()
    {
        this.str = " ";
        this.arr = null;
        this.brr = null;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        //Allocating Memory To Array 
        this.arr = new char[this.str.length()];
        this.brr = new char[this.str.length()];
        
        //Converting Character Array of Entered String 
        this.arr = this.str.toCharArray();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void StrCpyX()
    {
        int i = 0;

        if((this.arr == null)&&(this.arr == null))
        {
            return;
        }

        //Logic To Copy Contents of Entered String into Another String 
        while(i != this.arr.length)
        {
            this.brr[i] = this.arr[i];
            i++;
        }
    }
}//End of Class 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Copy
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating object of CopyString Class
        CopyString cobj = new CopyString();
        
        //Call TO Behaviours of Class
        cobj.Accept();
        cobj.StrCpyX();

        //Printing Copied String
        System.out.print("Contents of Second String After Copying Entered String is : ");
        System.out.print(cobj.brr);
    }
}