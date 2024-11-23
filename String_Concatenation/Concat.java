/*
    Author : Pakshal Shashikant Jain 
    Date : 27/08/2023
    Program : Write a program which 2 strings from user and concat second string
              after first string. (Implement strcat() function).

              Input : "Marvellous Infosystems"
                      "Logic Building"

              Output : "Marvellous Infosystems Logic Building" 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class ConcatString 
{
    //Characteristics of Class
    String str;
    String str2;

    //Constructor of Class
    ConcatString()
    {
        this.str = " ";
        this.str2 = " ";
    }

    //Behaviour of Class to Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);
        
        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        System.out.println("Enter Second String");
        this.str2 = sobj.nextLine();
    }

    //Behaviour of Class To To Concatenate Two String
    void StringConcatenation()
    {
        this.str = this.str+" "+this.str2;
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Concat
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh.....");

        //Creating object of ConcatString
        ConcatString cobj = new ConcatString();

        //Call To Behaviour of Class
        cobj.Accept();
        cobj.StringConcatenation();

        //Printing String Concatenated
        System.out.print(cobj.str);
    }
}