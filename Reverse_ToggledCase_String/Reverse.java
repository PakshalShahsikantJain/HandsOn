/*
    Author : Pakshal Shashikant Jain 
    Date : 18/09/2023
    Program : Accept sing from user and reverse the contents of that string by
              toggling the case.

              Input : "aCBdef"
              Output : "FEDcbA" 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class StringRevTog
{
    //Characteristics of Class
    char arr[];
    String str;

    //Constructor of Class
    StringRevTog()
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
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }

    //Behaiour of Class To  Reverse The String
    void StrRevTog()
    {
        int First = 0;
        int Last = 0;
        char temp = ' ';

        //Logic To Reverse String After Toggling Case
        while(Last != this.arr.length)
        {
            Last++;
        }
        
        Last--;

        while(First <= Last)
        {
            int ascii = 0;

            if((this.arr[First] >= 'A')&&(this.arr[First] <= 'Z'))
            {
                ascii = (int)this.arr[First] + 32;
                this.arr[First] = (char)ascii;
            }
            else if((this.arr[First] >= 'a')&&(this.arr[First] <= 'z'))
            {
                ascii = (int)this.arr[First] - (char)32;
                this.arr[First] = (char)ascii; 
            }
            
            if(Last != First)
            {
                if((this.arr[Last] >= 'A')&&(this.arr[Last] <= 'Z'))
                {
                    ascii = (int)this.arr[Last] + 32;
                    this.arr[Last] = (char)ascii;
                }
                else if((this.arr[Last] >= 'a')&&(this.arr[Last] <= 'z'))
                {
                    ascii = (int)this.arr[Last] - 32;
                    this.arr[Last] = (char)ascii;
                }
            }

            temp = this.arr[First];
            this.arr[First] = this.arr[Last];
            this.arr[Last] = temp;

            First++;
            Last--;
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Reverse
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating object of StringRevTog Class
        StringRevTog sobj = new StringRevTog();

        //Call To Behaviours of Class
        sobj.Accept();
        sobj.StrRevTog();

        //Printing Reversed String
        System.out.println("Reversed String After Toggling Case is : ");
        System.out.println(sobj.arr);
    }
}