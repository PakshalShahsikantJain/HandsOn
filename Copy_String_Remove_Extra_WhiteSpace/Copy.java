/*
    Author : Pakshal Shshikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and copy the
              contents into another string by removing extra white spaces.
                
              Input : "Marvellous        multi          OS"
              Output : "Marvellous multi OS"

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringCopy
{
    //Characteristics of Class
    String str;
    char arr[];
    char brr[];

    //Constructor of Class
    StringCopy()
    {
        this.str = " ";
        this.arr = null;
        this.brr = null;
    }

    //Behaviour of Class to Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        this.arr = new char[this.str.length()];
        this.brr = new char[this.str.length()];
    
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Copy String After Removing White Spaces
    void StrCpyX()
    {
        int i = 0;
        int j = 0;

        if((this.arr == null)&&(this.brr == null))
        {
            return;
        }

        //Logic To Copy String According To Given Condition
        while(i != this.arr.length)
        {
            if(this.arr[i] == ' ')
            {
                while((this.arr[i] == ' ')&&(i != this.arr.length))
                {
                    i++;
                }

                this.brr[j] = ' ';
                j++;
            }

            this.brr[j] = this.arr[i];
            j++;
            i++;
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Copy
{
    //Main function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of StringCopy Class
        StringCopy sobj = new StringCopy();
        //Taking Input from user
        sobj.Accept();
        sobj.StrCpyX();

        //Printing Copied String
        System.out.println("Copied String After Removing White Space is : ");
        System.out.print(sobj.brr);
    }
}