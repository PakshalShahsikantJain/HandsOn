/*
    Author: Pakshal Shashikant Jain
    Date: 09/11/2024
    Program: Program to check given strings are Anagram or not
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class to check entered strings are anagram string or not
class Anagram
{
    //Characteristics of class
    char arr[];
    char brr[];

    //Constructor of class
    Anagram(String str,String str2) 
    {
        this.arr = str.toCharArray();
        this.brr = str2.toCharArray();
    }

    /*
        Function name: ChkAnagram
        parameters: -
        return value: TRUE/FALSE
        purpose: To Check entered two strings are anagram or not 
    */
    boolean ChkAnagram() 
    {
        int i = 0;
        int j = 0;
        int icnt = 0;
        int ascii = 0;

        //Logic to check
        for(i = 0;i < this.arr.length;i++)
        {
            icnt = 0;
            for(j = 0;j < this.brr.length;j++)
            {
                if((this.arr[i] >= 'A')&&(this.arr[i] <= 'Z'))
                {
                    ascii = (int)this.arr[i] + 32;
                    this.arr[i] = (char)ascii;
                }
                else if((this.brr[j] >= 'A')&&(this.brr[j] <= 'Z'))
                {
                    ascii = (int)this.brr[j] + 32;
                    this.brr[j] = (char)ascii;
                }

                if(this.arr[i] == this.brr[j])
                {
                    icnt++;
                }
            }

            if(icnt < 1)
            {
                break;
            }
        }

        if(icnt < 1)
        {
            return false;
        }
        else 
        {
            return true;
        }
    }
}//End of class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main class
class Check
{
    //Main function
    public static void main(String args[])
    {
        String str = " ";
        String str2 = " ";
        boolean bret = false;

        System.out.println("Jay Ganesh....");

        //Creating object of Scanner class to take input from user  
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter first string");
        str = sobj.nextLine();

        System.out.println("Enter Second string");
        str2 = sobj.nextLine();

        // System.out.println(str);
        // System.out.println(str2);

        //Creating object of Anagram class
        Anagram aobj = new Anagram(str,str2);

        //Call to behaviour of class
        bret = aobj.ChkAnagram();

        if(bret == true)
        {
            System.out.println("Entered strings are anagram");
        }
        else 
        {
            System.out.println("Entered strings are not anagram");
        }
    }
}