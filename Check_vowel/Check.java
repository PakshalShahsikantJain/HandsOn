/*
    Author : Pakshal Jain
    Date : 28/09/2022
    Program : To Check Entered Number is Vowel or Not 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Decalaration
class Find
{   
    //Characteristics of Class
    char ch = ' ';
    //Constructor of Class(paracmeterised)
    Find(char c)
    {
        this.ch = c;
    } 
    //Behaviour of Class
    Boolean check()
    {
        //Logic To Check Entered Character is Vowel or Not
        if((this.ch == 'a')||(this.ch == 'e')||(this.ch == 'i')||(this.ch == 'e')||(this.ch == 'u'))
        {
            return true;
        }
        else if((this.ch == 'A')||(this.ch == 'E')||(this.ch == 'I')||(this.ch == 'O')||(this.ch == 'U'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Check
{
    public static void main(String args[])
    {
        char ch = ' ';
        Boolean bret = false;
        
        //Creating object of Scanner Method
        Scanner sobj = new Scanner(System.in);

        System.out.println("Ganapti Bappa Morya..");
        System.out.println("Enter One Character");
        ch = sobj.next().charAt(0);

        //Creacting Object of find Class
        Find  fobj = new Find(ch);
        //Calling Behaviour of Class
        bret = fobj.check();

        if(bret == true)
        {
            System.out.println("Entered Character "+ ch +" is a Vowel");
        }
        else 
        {
            System.out.println("Entered Character "+ ch +" is Not a Vowel");
        }
    }
}