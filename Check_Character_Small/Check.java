/*
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Accept Character from user and check whether it is small case or
              not (a-z).

              Input : g
              Output : TRUE

              Input : D
              Output : FALSE 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Character 
{
    //Characteristics of Class
    char ch;

    //Constructor of Class
    Character()
    {
        this.ch = '\0';
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating objec of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter Character To Check");
        this.ch = sobj.next().charAt(0);
    }

    //Behaviour of Class To Check Entered Character is Small Case Character or not
    boolean check()
    {
        //Logic TO Check
        if((this.ch >= 'a')&&(this.ch <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Check
{
    //Main function
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Jay Ganesh.....");

        //Creating object of Character Class
        Character cobj = new Character();

        //Call To Behaviours of CLass
        cobj.Accept();
        bret = cobj.check();

        //Handeling conditions according to output
        if(bret == true)
        {
            System.out.printf("Entered Character %c is Small Case Character ",cobj.ch);
        }
        else
        {
            System.out.printf("Entered Character %c is Not A Small Case Character ",cobj.ch);
        }
    }
}