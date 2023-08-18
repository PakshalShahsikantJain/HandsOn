/*
    Author : Pakshal Shashikant Jain 
    Date : 13/08/2023
    Program : Write a program which accept string from user and toggle the case.
              
              Input : "Marvellous Multi OS"
              Output : mARVELLOUS mULTI os
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Modify
{
    //Characteristics of Class
    char arr[];
    String str;

    //Constructor of Class
    Modify()
    {
        this.arr = null;
        this.str = " ";
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class 
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        //Converting String to character array 
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Modify String 
    void modify()
    {
        int i = 0;
        int ascii = 0;

        if(this.arr == null)
        {
            return;
        }

        //Logic
        while(i != this.arr.length)
        {
            if((this.arr[i] >= 'A')&&(this.arr[i] <= 'Z'))
            {   
                ascii = (int)this.arr[i] + 32;

                this.arr[i] = (char)ascii;        
            }
            else if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
            {
                ascii = (int)this.arr[i] - 32;
                this.arr[i] = (char)ascii;
            }

            i++;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Toggle 
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of Modify Class
        Modify mobj = new Modify();

        //Call To Behaviour of Class
        mobj.Accept();
        mobj.modify();

        //Printing Modified String 
        System.out.println("Modified String is : ");
        System.out.println(mobj.arr);
    }
}