/*
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Check whether that character is present in string or not.
              Input : "Marvellous Multi OS"
                       e
              Output : TRUE
              
              Input : "Marvellous Multi OS"
                       W
              Output : FALSE 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Character 
{
    //Characteristics of Class
    String str;
    char arr[];
    char ch;

    //Constructor of Class
    Character()
    {
        this.str = " ";
        this.arr = null;
        this.ch = ' ';
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from User
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        System.out.println("Enter Character To Check");
        this.ch = sobj.next().charAt(0);

        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Check Entered Character is Present or not in Entered String
    boolean CharCheck()
    {
        int i = 0;

        //Logic To Check
        while(i != this.arr.length - 1)
        {
            if(this.arr[i] == this.ch)
            {
                break;
            }

            i++;
        }

        if(this.arr[i] == this.ch)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Check
{
    //Main Function
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Ganapati Bappa Morya...");

        //Creating object of Character Class
        Character cobj = new Character();

        //Call To Behaviour of Class
        cobj.Accept();
        bret = cobj.CharCheck();

        //Handeling Condition is bret is True
        if(bret == true)
        {   
            System.out.printf("Entered Character %c is present in String",cobj.ch);
        }
        else  //Handeling Condition if bret is False
        {
            System.out.printf("Entered Character %c is Not Present in String",cobj.ch);
        }
    }
}