/*
    Author : Pakshal Shashikant Jain 
    Date : 11/08/2023
    Program : Write a program which accept string from user and display it inn
              reverse order.

              Input : "MarvellouS"
              Output : "SuollevraM"
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StrRev
{
    //Characteristics of Class
    String str;
    char arr[];

    //Constructor of Class
    StrRev() 
    {
        this.str = " ";
        this.arr = null ;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        this.arr = new char[this.str.length()];

        this.arr = this.str.toCharArray();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Behaviour of Class To Reverse String  
    void reverse()
    {
        int i = 0;  
        int start = 0;
        int end = 0;
        char temp = ' ';

        if(this.arr == null)
        {
            return;
        }

        //Logic To Reverse String 
        while(end != this.arr.length - 1)
        {
            end++;
        }

        while(start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Reverse
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.......");

        //Creating object of StrRev Class 
        StrRev sobj = new StrRev();

        //Call To Behaviour of Class
        sobj.Accept();
        sobj.reverse(); 

        //Printing Reversed String
        System.out.print("Reversed String is :");
        System.out.print(sobj.arr);
    }
}