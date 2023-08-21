/*
    Author : Pakshal Shashikant Jain 
    Date : 21/08/2023
    Program : Write a program which accept string from user reverse that string
              in place.

              Input : "abcd"
              Output : "dcba"

              Input : "abba"
              Output : "abba" 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class StringReverse
{
    //Characteristics of Class
    char arr[];
    String str;

    //Constructor of Class
    StringReverse()
    {
        this.arr = null;
        this.str = " ";
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Reverse String
    void Reverse()
    {
        int istart = 0;
        int iend = 0;
        char temp = ' ';

        //Logic to Reverse the String
        while(iend != this.arr.length)
        {
            iend++;
        }

        iend--;

        while(istart < iend)
        {
            temp = this.arr[istart];
            this.arr[istart] = this.arr[iend];
            this.arr[iend] = temp;

            istart++;
            iend--;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Reverse
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of StringReverse Classs
        StringReverse sobj = new StringReverse();
        sobj.Accept();
        sobj.Reverse();

        //Printing Modified String
        System.out.print("Modified String is : ");
        System.out.print(sobj.arr);
    }
}