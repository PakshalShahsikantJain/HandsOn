/*
    Author : Pakshal Shashikant Jain 
    Date : 19/07/2023
    Prorgam : Accept Character from user and check whether it is alphabet or not
              (A-Z a-z).
              Input : F
              Output : TRUE
                
              Input : &
              Output : FALSE
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Character
{
    //Chracteristics of Class
    char ch;

    //Constructor of Class
    Character()
    {
        this.ch = ' ';
    }

    //Behaviour of Class To Take input from User
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter Character You Want");
        this.ch = sobj.next().charAt(0);
    }

    //Behaviour of Class To Check Entered Character is Alphabet or Not
    boolean check()
    {
        //Logic
        if((this.ch >= 'A')&&(this.ch <= 'Z')||(this.ch >= 'a')&&(this.ch <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

        //Handeling Conditions According to Conditions
        if(bret == true)
        {
            System.out.printf("Entered Character %c is an Alphabet",cobj.ch);
        }
        else
        {
            System.out.printf("Entered Character %c is Not an Alphabet",cobj.ch);
        }
    }
}