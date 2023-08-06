/*
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Accept character from user and display its ASCII value in decimal,
              octal and hexadecimal format.
              
              Input : A
              Output : Decimal 65
                       Octal 0101
                       Hexadecimal 0X41
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class AsciiValue 
{
    //Characteristics of Class
    char ch;

    //Constructor of Class
    AsciiValue()
    {
        this.ch = '\0';
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One Character");
        this.ch = sobj.next().charAt(0);
    }

    //Behaviour of Class To Display Ascii Values
    void display()
    {
        System.out.printf("Decimal Value : %d\n",(int)this.ch);
        System.out.printf("Hexadecimal Value : %#X\n",(int)this.ch);
        System.out.printf("Octal Value : %#o\n",(int)this.ch);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class 
class Display
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh......");

        //Creating object of AsciiValue Class 
        AsciiValue aobj = new AsciiValue();

        //Call To Behaviour of Class
        aobj.Accept();
        aobj.display();

        aobj = null;
    }
}