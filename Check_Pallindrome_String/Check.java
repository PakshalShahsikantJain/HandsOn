/*
    Author : Pakshal Shashikant Jain 
    Date : 21/09/2023
    Program : Accept string from user and check whether the string is palindrome    
              or not without considering its case.

              Input : "1abccBA1"
              Output : TRUE
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Delcaration
class StringPallindrome
{
    //Characteristics of Class
    char arr[];
    String str;

    //Constructor of Class
    StringPallindrome()
    {
        this.arr = null;
        this.str = " ";
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter one String");
        this.str = sobj.nextLine();

        //Creating Character array of String
        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class
    boolean StrPallindrome()
    {
        int first = 0;
        int last = 0;
        int ascii = 0;

        if(this.arr == null)
        {
            return false;
        }

        //Logic To Check
        while(last != this.arr.length)
        {
            last++;
        }

        last--;

        while(first <= last)
        {
            if((this.arr[first] >= 'A')&&(this.arr[first] <= 'Z'))
            {
                ascii = (int)this.arr[first] + 32;
                this.arr[first] = (char)ascii;
            }

            if(last != first)
            {
                if((this.arr[last] >= 'A')&&(this.arr[last] <= 'Z'))
                {
                    ascii = (int)this.arr[last] + 32;
                    this.arr[last] = (char)ascii;
                }
            }

            if(this.arr[first] != this.arr[last])
            {
                break;
            }

            first++;
            last--;
        }

        if(this.arr[first] != this.arr[last])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Check
{
    //Main Function
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Jay Ganesh.....");
        
        //Creating object of StrinPallindrome Class
        StringPallindrome sobj = new StringPallindrome();
        sobj.Accept();

        //Call To Behaviours of Class
        bret = sobj.StrPallindrome();

        //Handeling Condition if bret is TRUE
        if(bret == true)
        {
            System.out.println("String is Pallindrome");
        }
        else
        {
            System.out.println("String is not Pallindrome");
        }
    }
}