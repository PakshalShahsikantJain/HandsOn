/*
    Author : Pakshal Shashikant Jain 
    Date : 05/08/2023
    Program : Accept Character from user and check whether it is special symbol
              or not (!, @, #, $, %, ^, &, *).

              Input : %
              Output : TRUE

              Input : d
              Output : FALSE 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class SCharacter
{   
    //Characteristics of Class
    char ch;

    //Constructor of Class
    SCharacter()
    {
        this.ch = ' ';
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One Character To Check"); 
        this.ch = sobj.next().charAt(0);
    }

    //Behaviour of Class TO Check 
    boolean check()
    {
        //Logic To Check
        if((this.ch >= '#')&&(this.ch <= '&'))
        {
            return true;
        }
        else if((this.ch == '!')||(this.ch == '@')||(this.ch == '^')||(this.ch == '*'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Check
{
    //Main function
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Jay Ganesh......");

        //Creating objec of SCharacter Class
        SCharacter sobj = new SCharacter();

        //Call To behaviour of Class
        sobj.Accept();
        bret = sobj.check();

        //Handeling Condition According To Output 
        if(bret == true)
        {
            System.out.printf("Entered Character %c is a Special Character",sobj.ch);
        }
        else
        {
            System.out.printf("Entered Character %c is not a Special Character",sobj.ch);
        }

        //Deallocating memory of object
        sobj = null;
    }
}