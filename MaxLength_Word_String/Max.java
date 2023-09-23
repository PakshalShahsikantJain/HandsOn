/*
    Author : Pakshal Shashikant Jain
    Date : 23/09/2023
    Program : Write a program which accept string from user and return length of
              largest word.

              Input : "Marvellous Multi OS Infosystems"
              Output : 11
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringWord
{
    //Characteristics of Class
    String str;
    char arr[]; 

    //Constructor of Class
    StringWord()
    {
        this.str = " ";
        this.arr = null;
    }

    //Behaviour of Class TO Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String..");
        this.str = sobj.nextLine();

        //Creating Character array of Entred String
        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaviour  of Class to Find Length of Largest Word
    int MaxWord()
    {
        int iMax = 0;
        int icnt = 0;
        int i = 0;

        //Logic To Find
        while(i != this.arr.length)
        {
            if(this.arr[i] == ' ')
            {
                while((this.arr[i] == ' ')&&(i != this.arr.length))
                {
                    i++;
                }
                icnt = 0;
            }
            else
            {
                icnt++;
                if(icnt > iMax)
                {
                    iMax = icnt;
                }
                i++;
            }
        }

        return iMax;
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Max
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of StringWord Class
        StringWord sobj = new StringWord();

        //Call To Behaviour of Class
        sobj.Accept();
        iret = sobj.MaxWord();

        //Printing Length of Largest Word
        System.out.println("Length of Largest Word is : "+iret);
    }
}