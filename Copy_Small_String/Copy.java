/*
    Author : Pakshal Shashikant Jain
    Date : 25/08/2023
    Program : Write a program which accept string from user and copy small
              characters of that string into another string.

              Input : "Marvellous multi OS"
              Output : "arvellous multi"
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

    //Behaviour of Class To Take Input from user
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

        //Creating Character Array of Enterd String
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Copy Small Characters of Entered String 
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
            if(this.arr[i] == ' ')
            {
                this.brr[i] = ' ';
            }
            
            if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
            {
                this.brr[i] = this.arr[i];
            }

            i++;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Copy
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of CopyString Class
        CopyString cobj = new CopyString();

        //Call To Behaviour of Class
        cobj.Accept();
        cobj.StrCpySmall();

        //Printing Copied Small Characters From Entered String
        System.out.print("Small Letters Copied From Entered String into Another String : ");
        System.out.print(cobj.brr);
    }
}