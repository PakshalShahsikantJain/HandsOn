/*
    Author : Pakshal Jain
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string in reverse order.

              Input : "Marvellous Python"
              Output : "nohtyP suollevraM" 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CopyString
{
    //Characateristics of Class
    char src[];
    char dest[];
    String str;

    //Constructor of Class
    CopyString()
    {
        this.src = null;
        this.dest = null;

        this.str = " ";
    }

    //Behaviour of Class To Accept Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        //Creating Character array of Entered Strings
        this.src = new char[this.str.length()];
        this.dest = new char[this.str.length()];

        this.src = this.str.toCharArray();
    }

    //Behaviour of Class To Copy String in Reverse Order
    void StrCpyRev()
    {
        int i = 0;
        int j = 0;

        if((this.src == null)&&(this.dest == null))
        {
            return;
        }   

        //Logic To Reverse String
        for(i = this.src.length - 1;i >= 0;i--)
        {
            this.dest[j] = this.src[i];
            j++;
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Copy
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating objec of CopyString Class
        CopyString cobj = new CopyString();

        //Call To Behaviours of Class
        cobj.Accept();
        cobj.StrCpyRev();

        //Printing Copied String
        System.out.print("String Copied in Reverse Direction is : ");
        System.out.print(cobj.dest);
    }
}