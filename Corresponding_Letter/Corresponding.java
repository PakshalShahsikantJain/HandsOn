/*
    Author : Pakshal Shashikant Jain 
    Date : 31/07/2023
    Program : Accept character from user. If character is small display its
              corresponding capital character, and if it small then display its
              corresponding capital. In other cases display as it is.

              Input : Q
              Output : q

              Input : m
              Output : M

              Input : 4        
              Output : 4

              Input : %
              Output : % 
*/

////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Correspond
{
    //Characteristics of Class
    char CH;
    int ascii;

    //Constructor of Class
    Correspond(char ch)
    {
        this.CH = ch;
        this.ascii = 0;
    }

    //Behaviour of Class To Convert Character 
    char Convert()
    {
        //Logic To Convert 
        if((this.CH >= 'a')&&(this.CH <= 'z'))
        {
            this.ascii = (int)this.CH - 32;

            return (char)this.ascii;
        }
        else if((this.CH >= 'A')&&(this.CH <= 'Z'))
        {
            this.ascii = (int)this.CH + 32;

            return (char)this.ascii;
        }
        else
        {
            return this.CH;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class 
class Corresponding 
{
    public static void main(String args[])
    {
        char ch = ' ';
        char cret = ' ';

        System.out.println("Ganapati Bappa Morya....");

        //Creating object of Scanner Class To Take input from user        
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One Character : ");
        ch = sobj.next().charAt(0);

        //Creating object of Correspond Class 
        Correspond cobj = new Correspond(ch);
        
        //Call To Behaviour of Class
        cret = cobj.Convert();

        //Handeling Conditions According To Output 
        if((ch >= 'a')&&(ch <= 'z'))
        {
            System.out.printf("Corresponding Capital Letter of Entered Small Letter %c is : %c",ch,cret);
        }
        else if((ch >= 'A')&&(ch <= 'Z'))
        {
            System.out.printf("Corresponding Small Letter of Entered Capital Letter %c is : %c",ch,cret);
        }
        else
        {
            System.out.printf("There is No Correspoding Letter for Entered Character %c",ch);
        }
    }
}