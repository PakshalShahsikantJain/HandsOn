/*
    Author : Pakshal Shashikant Jain 
    Date : 09/08/2023
    Program : Write a program which accept string from user and check whether
              it contains vowels in it or not.

             Input : "marvellous"
             Output : TRUE

             Input : "Demo"
             Output : TRUE

             Input : "xyz"
             Output : FALSE 
 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Vowels
{
    //Characteristics of Class
    char arr[];
    String str;

    //Constructor of Class (Default Constructor)
    Vowels()
    {
        this.arr = null;
        this.str = " ";
    }

    //Behaviour of Class To Take Input from user
    void Accept()   
    {
        //Creating object of Scnner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);
        
        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        //Allocating Memory and Intializing Value To Array
        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Check Entered String Vowels or not
    boolean check()
    {
        int i = 0;

        //Logic To Check
        for(i = 0;i < this.arr.length - 1;i++)
        {
            if((this.arr[i] == 'a')||(this.arr[i] == 'e')||(this.arr[i] == 'i')||(this.arr[i] == 'o')||(this.arr[i] == 'u')||(this.arr[i] == 'A')||(this.arr[i] == 'E')||(this.arr[i] == 'I')||(this.arr[i] == 'O')||(this.arr[i] == 'U'))
            {
                break;
            }
        }
        
        if((this.arr[i] == 'a')||(this.arr[i] == 'e')||(this.arr[i] == 'i')||(this.arr[i] == 'o')||(this.arr[i] == 'u')||(this.arr[i] == 'A')||(this.arr[i] == 'E')||(this.arr[i] == 'I')||(this.arr[i] == 'O')||(this.arr[i] == 'U'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Check
{
    //Main Function
    public static void main(String args[])
    {
        boolean bret = false;
        System.out.println("Jay Ganesh.....");

        //Creating object of Vowels Class
        Vowels vobj = new Vowels();

        //Call To Behaviours of Class
        vobj.Accept();
        bret = vobj.check();

        //Handendling Conditions According To Output 
        if(bret == true)
        {
            System.out.println("Entered String Contains Vowels");
        }
        else
        {
            System.out.println("Entered String Does Not Contains Vowels");
        }
    }
}
