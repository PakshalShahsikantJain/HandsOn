/*
    Author : Pakshal Shashikant Jain 
    Date : 24/07/2023
    Program : Accept Character from user and check whether it is digit or not
              (0-9).

              Input : 7 
              Output : TRUE

              Input : d
              Output : FALSE 
*/

//Required Librarires
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Character 
{
    //Characterstics of Class
    char ch;

    //Constructor of Class
    Character()
    {
        this.ch = '\0'; 
    }

    //Behaviour of Class To Take Input from user 
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One Character");
        this.ch = sobj.next().charAt(0);
    }

    //Behaviour of Class To Check Entered Character is Digit or not
    boolean check()
    {
        //Logic 
        if((this.ch >= '0')&&(this.ch <= '9'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Check
{
    //Main function
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Jay Ganesh.....");

        //Creating object of Character Class
        Character cobj = new Character();
    
        //Call To Behaviour of Class
        cobj.Accept();
        bret = cobj.check();    
        
        //Handeling Conditions According To Output
        if(bret == true)
        {
            System.out.printf("Entered Character %c is A Digit",cobj.ch);
        }
        else
        {
            System.out.printf("Entered Character %c is Not A Digit",cobj.ch);
        }
    }
}