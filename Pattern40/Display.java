/*
    Author : Pakshal Shashikant Jain
    Date : 05/10/2023
    Program : Input : "Marvellous"
              Output : M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
        
        //Creating Character array of Entere String
        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class TO Display Given Pattern
    void Pattern()
    {
        int i = 0;
        int j = 0;
        int ascii = 0;

        if(this.arr == null)
        {
            return;
        }

        //Logic To Print Given Pattern
        System.out.println("Printing Given Pattern");
        for(i = 0;i < this.arr.length;i++)
        {
            for(j = 0;j < this.arr.length;j++)
            {
                if((this.arr[j] >= 'a')&&(this.arr[j] <= 'z'))
                {
                    ascii = (int)this.arr[j] - 32;
                    this.arr[j] = (char)ascii;
                }

                System.out.printf("%c\t",this.arr[j]);
            }
            System.out.println();
        }
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of StringPatter Class 
        StringPattern sobj = new StringPattern();

        //Call To Behaviours of Class
        sobj.Accept();
        sobj.Pattern();

        //Deallocating Memory of Object Created
        sobj = null;
    }
}