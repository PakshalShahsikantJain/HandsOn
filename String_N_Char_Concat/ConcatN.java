/*
    Author : Pakshal Shashikant Jain 
    Date : 13/09/2023
    Program : Write a program which accepts 2 strings from user and concat N
              characters of second string after first string.Value of N should be
              accepted from user. (Implement strncat() function).

              Note : If third parameter is greater than the size of second string then
              concat whole string after first string.

              Input : "Marvellous Infosystems"
                      "Logic Building"
                       5
              Output : "Marvellous Infosystems Logic"
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class string 
{
    //Characteristics of Class
    String str;
    String str2;
    char arr[];
    char brr[];
    char crr[];
    int iCnt;

    //Constructor of Class
    string()
    {
        this.str = "";
        this.str2 = "";
        this.arr = null;
        this.brr = null;
        this.iCnt = 0;
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter First String");
        this.str = sobj.nextLine();

        System.out.println("Enter Second String");
        this.str2 = sobj.nextLine();

        System.out.println("Enter Size Till You Want To Concat Second String in First String");
        this.iCnt = sobj.nextInt();

        //Allocating Memory To Array
        this.arr = new char[this.str.length()];
        this.brr = new char[this.str2.length()];
        this.crr = new char[50];

        //Creating Character array of Strings
        this.arr = this.str.toCharArray();
        this.brr = this.str2.toCharArray();
    }

    //Behaviour of Class To Concat Second String in First String Till Entered Size
    void StrNCatX()
    {
        int i = 0;
        int j = 0;

        //Logic To Concatenate
        while(i != this.arr.length)
        {
            this.crr[i] = this.arr[i];
            i++;
        }

        this.crr[i] = ' ';
        i++;

        while((j != this.brr.length)&&(this.iCnt != 0))
        {
            this.crr[i] = this.brr[j];
            i++;
            j++;
            this.iCnt--;
        }
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class ConcatN
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of string class 
        string sobj = new string();
        //Call To Behaviours of Class
        sobj.Accept();
        sobj.StrNCatX();

        //Printing Concatenated String
        System.out.print("String After Concatenation is : ");
        System.out.println(sobj.crr);
    }
}