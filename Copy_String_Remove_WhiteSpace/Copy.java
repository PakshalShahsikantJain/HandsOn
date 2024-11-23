
/*
    Author : Pakshal Jain 
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by removing all white
              spaces.

              Input : "Marvel lous Pyth on"
              Output : "MarvellousPython"
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

    //Behaviour of Class To Take Input from  user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");     
        this.str = sobj.nextLine();

        //Allocating Memory To Array
        this.src = new char[this.str.length()];
        this.dest = new char[this.str.length()];

        //Converting String To Character Array
        this.src = this.str.toCharArray();
    }

    //Behaviour of Class To Copy String After Removing White Spaces
    void StrCpyX()
    {
        int i = 0;

        //Handeling Conditions if Array's Are null
        if((this.src == null)&&(this.dest == null))
        {
            return;
        }

        //Logic To Copy String 
        while(i != this.src.length)
        {
            if(this.src[i] != ' ')
            {
                this.dest[i] = this.src[i];
            }

            i++;
        }
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Copy
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating object of CopyString Class
        CopyString cobj = new CopyString();
        //Call To Behaviours of Class
        cobj.Accept();
        cobj.StrCpyX();

        //Printing Copied String 
        System.out.print("String Copied After Removing White Spaces is : ");
        System.out.print(cobj.dest);
    }
}