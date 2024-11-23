/*
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Write a program which accept string from user and count number of
              capital characters.

              Input : “Marvellous Multi OS”
              Output : 4 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class CapitalLetter 
{
    //Characteristics of Class
    String str;

    //Constructor of Class
    CapitalLetter()
    {
        this.str = " ";
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter String");
        this.str = sobj.nextLine();
    }

    //Behaviour of Class To Count CapitalLetters
    int count()
    {
        int i = 0;
        int icnt = 0;
        char arr[] = null;

        //Logic 
        arr = new char[this.str.length()];
        
        arr = this.str.toCharArray();

        for(i = 0;i < arr.length;i++)
        {
            if((arr[i] >= 'A')&&(arr[i] <= 'Z'))
            {
                icnt = icnt + 1;
            }
        }

        return icnt;
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Count
{
    //Main function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh.....");

        //Creating object of CapitalLetter Class 
        CapitalLetter cobj = new CapitalLetter();
        
        //Call To Behaviour of Class
        cobj.Accept();
        iret = cobj.count();

        //Printing Count Calculated
        System.out.printf("Count of Capital Letter is : %d",iret);

        //Deallocating memory of object Created
        iret = null
    }
}