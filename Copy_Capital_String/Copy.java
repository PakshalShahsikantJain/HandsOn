/*
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy capital
              characters of that string into another string.
            
              Input : "Marvellous Multi OS"
              Output : "MMOS"
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

    //Behaviour of Class to Take Input from user
    void Accept()  
    {
        //Creating object of Scanner Class to Take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        this.arr = new char[this.str.length()];
        this.brr = new char[this.str.length()];

        this.arr = this.str.toCharArray();
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Behaviour of Class To Copy Capital letters from Entered String into anoter String
    void StrCpyCap()
    {
        int i = 0;

        if((this.arr == null)&&(this.brr == null))
        {
            return;
        }

        //Logic To Copy
        while(i != this.arr.length)
        {
            if((this.arr[i] >= 'A')&&(this.arr[i] <= 'Z'))
            {
                this.brr[i] = this.arr[i];
            }

            i++;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Copy
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of CopyString class 
        CopyString cobj = new CopyString();

        //Call To Behaviour of Class
        cobj.Accept();
        cobj.StrCpyCap();

        //Printing String Copied
        System.out.print("Capital Letters Copied From Entered String into Another String is : ");
        System.out.print(cobj.brr);
    }
}