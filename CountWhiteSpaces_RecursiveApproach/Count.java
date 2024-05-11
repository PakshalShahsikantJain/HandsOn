/*
    Author : Pakshal Shashikant Jain 
    Date : 9/5/2024
    Program : Write a recursive program which accept string from user and count white
              spaces.

              Input : HE llo WOr lD
              Output : 3  
*/

//Required Libraries
import java.lang.*;
import java.util.*;

class StringCountSpace 
{
    //Characteristics of class
    int icnt;
    String str;
    static int i;

    //Memory Allocation of Static Member of Class
    static
    {
        i = 0;
    }

    //Constructor of Class
    StringCountSpace(String svalue)
    {
        this.icnt = 0;
        this.str = svalue;
    }

    //Behaviour of Class To Count White Spaces in String
    int WhiteSpaces()
    {
        char arr[] = new char[this.str.length()];
        arr = this.str.toCharArray();

        if(i != arr.length)
        {
            if(arr[i] == ' ')
            {
                icnt++;
            }
            i++;

            //Recursive Function Call
            this.WhiteSpaces();
        }

        return icnt;
    }
}

//Main Class
class Count 
{
    //Main Function
    public static void main(String args[])
    {
        String str = "";
        int iret = 0;

        //Taking Input From user
        Scanner sobj = new Scanner(System.in);
        System.out.println("Jay Ganesh...");

        System.out.println("Enter One String : ");
        str = sobj.nextLine();

        //Creating object of StringCountSpace Class
        StringCountSpace sobj2 = new StringCountSpace(str);

        //Call To Behaviour of Class
        iret = sobj2.WhiteSpaces();

        //Printing Count of White Spaces
        System.out.printf("Count of White Spaces in Entered string '%s' is : %d",str,iret);

        sobj = null;
        sobj2 = null;
    }
}