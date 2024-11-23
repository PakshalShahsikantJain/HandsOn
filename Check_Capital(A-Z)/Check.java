/*
    Author : Pakshal Shashikant Jain 
    Date : 21/07/2023
    Prorgam : Accept Character from user and check whether it is capital or not(A-Z).
              Input : F
              Output : TRUE

              Input : d
              Output : FALSE 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraires
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Character
{
    //Characterstics of Class
    char ch;

    //Constructor of Class
    Character()
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
        //Logic 
        if((this.ch >= 'A')&&(this.ch <= 'Z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Check
{
    //Main function
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Jay Ganesh....");
        
        //Creating object of Character Class 
        Character cobj = new Character();

        //Call To behaviours of Class
        cobj.Accept();
        bret = cobj.check();

        //Handeling Conditions According To Output  
        if(bret == true)
        {
            System.out.printf("Entered Character %c is Capital ",cobj.ch);
        }
        else
        {
            System.out.printf("Entered Character %c is Not Capital ",cobj.ch);
        }
    }
}