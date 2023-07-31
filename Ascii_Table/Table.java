/*
    Author : Pakshal Shashikant Jain 
    Date : 31/07/2023
    Program : Write a program which displays ASCII table. Table contains symbol,
              Decimal, Hexadecimal and Octal representation of every member from
              0 to 255
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Ascii
{
    //Characteristics of Class
    int i = 0;

    //Constructor of Class
    Ascii()
    {
        this.i = 0;
    }

    //Behaviour of class To Display Ascii Table
    void Display()
    {
        //Logic 
        System.out.println("Decimal \tHexadecimal \tOctal \tSymbol");
        for(this.i = 0;this.i <= 255;this.i++)
        {
            System.out.printf("%d \t\t %x \t\t %o \t %c\n",this.i,this.i,this.i,this.i);
            System.out.println();
        }
    }
}//End Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Table 
{
    //Main function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating object Ascii Class 
        Ascii aobj = new Ascii();

        //Call To Behaviour of Class
        aobj.Display();
    }
}