/*  
    Author : Pakshal Shashikant Jain 
    Date : 15/08/2023
    Program : Write a program which accept string from user and display only
              digits from that string.

              Input : "marve89llous121"
              Output : 89121
              Input : "Demo"
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StrDigits
{
    //Characteristisc of Class
    char arr[];
    String str;

    //Constructor of Class
    StrDigits()
    {
        this.arr = null;
        this.str = " ";
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating objec of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Behaviour of Class To Display Digits Present in String
    void display()
    {
        int i = 0;

        //Logic To Print Digits 
        System.out.println("Printing Digits Present in String");
        while(i != this.arr.length)
        {
            if((this.arr[i] >= '0')&&(this.arr[i] <= '9'))
            {
                System.out.printf("%c",this.arr[i]);
            }
            i++;
        }
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display 
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating object of StrDigits Class 
        StrDigits sobj = new StrDigits();

        //Call To Behaviour of Class
        sobj.Accept();
        sobj.display();
    }
}