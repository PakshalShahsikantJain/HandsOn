/*
    Author : Pakshal Shashikant Jain 
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of first occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 0
              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4  
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CharFirst
{
    //Characteristics of Class
    char arr[];
    String str;
    char ch;

    //Constructor of Class
    CharFirst()
    {
        this.arr = null;
        this.str = "";
        this.ch = ' ';
    }   

    //Behaviour of Class To Take input from  user
    void Accept()
    {
        //Creating object of Scanner Class
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter one String");
        this.str = sobj.nextLine();

        System.out.println("Enter One Character");
        this.ch = sobj.next().charAt(0);

        //Converting String To Character Array
        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Find First Occurance of Entered Character
    int find()
    {
        int i = 0;

        //Logic To Find
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
            return i;
        }
        else
        {
            return -1;
        }
    }
}//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Find
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;
        
        System.out.println("Jay Ganesh.....");

        //Creating object of CharFirst Class To Take Input from user
        CharFirst cobj = new CharFirst();
        //Call To Behaviour of Class
        cobj.Accept();
        iret = cobj.find();

        //Printing First Occurance of Class
        System.out.printf("First occurance of Entered Character %c in Entered String is : %d",cobj.ch,iret);
    }
}