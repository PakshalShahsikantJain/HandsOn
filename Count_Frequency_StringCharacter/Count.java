/*
    Author : Pakshal Shashikant Jain 
    Date : 19/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return frequency of that character.
             
              Input : "Marvellous Multi OS"
                       M
              Output : 2

              Input : "Marvellous Multi OS"
                       W
              Output : 0 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
        //Creating objec of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        System.out.println("Enter Character");
        this.ch = sobj.next().charAt(0);

        //Creating Character Array of Entered String 
        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Count Frequency of Entered Character in Entered String
    int Count()
    {
        int i = 0;
        int icnt = 0;

        if(this.arr == null)
        {
            return -1;
        }

        //Logic To Count 
        while(i != this.arr.length)
        {
            if(this.arr[i] == this.ch)
            {
                icnt++;
            }

            i++;
        }

        return icnt;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Count
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of Character Class
        Character cobj = new Character();

        //Call To Behaviour of Class
        cobj.Accept();
        iret = cobj.Count();

        //Printing Count Calculated
        System.out.printf("Count of Entered Character %c in String is : %d",cobj.ch,iret);
    }
}