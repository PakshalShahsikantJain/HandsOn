/*
    Author : Pakshal Shashikant Jain
    Date : 05/10/2023
    Program : Input : "Marvellous"
              Output : 
              M
              M a
              M a r
              M a r v
              M a r v e
              M a r v e l
              M a r v e l l
              M a r v e l l o
              M a r v e l l o u
              M a r v e l l o u s

              Input : "PPA"
              Output : 
              P
              P P
              P P A 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringPattern
{
    //Characteristics of Class
    char arr[];
    String str;

    //Constructor of Class
    StringPattern()
    {
        this.arr = null;
        this.str = " ";
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);  

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        //Creating Character Array of Entered String
        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Display Given Pattern
    void Display()
    {
        int i = 0;
        int j = 0;

        if(this.arr == null)
        {
            return;
        }

        //Logic To Print Given Pattern
        for(i = 0;i < this.arr.length;i++)
        {
            for(j = 0;j < this.arr.length;j++)
            {
                if(i >= j)
                {
                    System.out.printf("%c\t",this.arr[j]);
                }
            }
            System.out.println();
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganehs....");

        //Creating object of StringPattern Class
        StringPattern sobj = new StringPattern();

        //Call To Behaviours of Class
        sobj.Accept();
        sobj.Display();

        sobj = null;
    }
}