/*
    Author : Pakshal Shashikant Jain 
    Date : 04/08/2023
    Program : Accept character from user. If it is capital then display all the
              characters from the input characters till Z. If input character is small
              then print all the characters in reverse order till a. In other cases
              return directly.

              Input : Q
              Output : Q R S T U V W X Y Z

              Input : m
              Output : m l k j i h g f e d c b a

              Input : 8
              Output : 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Alphabets
{
    //Characteristics of Class
    char ch;

    //Constructor of Class
    Alphabets()
    {
        this.ch = '\0';
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One Alphabet To print Alphabets According To Given Conditions");
        this.ch = sobj.next().charAt(0);
    }

    //Behaviour of Class to Display Output
    void Display()
    {
        int i = 0;

        //Logic To Print Alphabets According To Given Conditions 
        if((this.ch >= 'A')&&(this.ch <= 'Z'))
        {
            for(i = (int)this.ch;i <= (int)'Z';i++)
            {
                System.out.printf("%c ",(char)i);
            }
        }
        else if((this.ch >= 'a')&&(this.ch <= 'z'))
        {
            for(i = (int)this.ch;i >= (int)'a';i--)
            {
                System.out.printf("%c ",(char)i);
            }
        }
        else
        {
            return;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating object of Alphabets Class
        Alphabets aobj = new Alphabets();

        //Call To Behaviours of Class
        aobj.Accept();
        aobj.Display();    

        //Deallocating Memory of object Created
        aobj = null;
    }
}