/*
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u
                       M a r v e l l o
                       M a r v e l l
                       M a r v e l
                       M a r v e
                       M a r v
                       M a r
                       M a
                       M

              Input : "PPA"
              Output : P P A
                       P P
                       P 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringPattern
{
    //Characteristics of Class
    String str;
    char arr[];

    //Constructor of Class
    StringPattern()
    {
        this.str = " ";
        this.arr = null;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Display Given Pattern 
    void Pattern()
    {
        int i = 0;
        int j = 0;

        if(this.arr == null)
        {
            return;
        }

        //Logic To Print Given Pattern
        for(i = this.arr.length - 1;i >= 0;i--)
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of StringPattern Class 
        StringPattern sobj = new StringPattern();
 
        //Call To Behaviours of Class
        sobj.Accept();
        sobj.Pattern();
    }
}