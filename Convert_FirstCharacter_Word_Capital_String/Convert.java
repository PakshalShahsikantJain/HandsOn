/*
    Author : Pakshal Shashikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and replace each
              occurrence of first character of each word into capital case.
    
              Input : "marvellous infosystems by Piyush khairnar"
              Output : "Marvellous Infosystems By Piyush Khairnar"
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringConvert
{
    //Characteristics of Class
    char arr[];
    String str;

    //Constructor of Class
    StringConvert()
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
        System.out.println("Enter one String");
        this.str = sobj.nextLine();

        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Copy String After Converting Case of First Character of Word of Entered String 
    void StrCap()
    {
        int i = 0;
        int ascii = 0;

        //Logic To Copy String After Converting String
        if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
        {
            ascii = (int)this.arr[i] - 32;
            this.arr[i] = (char)ascii;
        }

        while(i != this.arr.length)
        {
            if(this.arr[i] == ' ')
            {
                while((this.arr[i] == ' ')&&(i != this.arr.length))
                {
                    i++;
                }

                if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
                {
                    ascii = (int)this.arr[i] - 32;
                    this.arr[i] = (char)ascii;
                }
            }
            i++;
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Convert
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of StringConvert Class
        StringConvert sobj = new StringConvert();
        //Call To behaviours of Class
        sobj.Accept();
        sobj.StrCap();

        //Printing Modified String
        System.out.print(sobj.arr);
    }
}