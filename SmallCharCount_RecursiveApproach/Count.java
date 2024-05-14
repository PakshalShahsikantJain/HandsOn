/*
    Author : Pakshal Shashiaknt Jain
    Date : 13/05/2024
    Program : Write a recursive program which accept string from user and count number of small characters.
              
              Input : HElloWOrlD
              Output : 5
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Small
{
    //Characterstics of Class
    private int icnt;
    private String str;
    private static int i;

    //Static Member Initialization
    static
    {   
        i = 0;
    }

    //Constructor of Class
    public Small(String svalue)
    {
        this.icnt = 0;
        this.str = svalue;
    }

    //Behaviour of Class To Count Small Characteristics of Class
    int Count()
    {
        char arr[] = {};

        arr = new char[this.str.length()];

        //Creating Character array of Entered String 
        arr = this.str.toCharArray();

        //Logic 
        if(i != arr.length)
        {
            if((arr[i] >= 'a')&&(arr[i] <= 'z'))
            {
                this.icnt++;        
            }

            i++;

            //Recurisve Function Call To Behaviour of Class
            this.Count();
        }

        return this.icnt;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Count
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;
        String str = "";

        System.out.println("Jay Ganesh.....");

        //Creating Object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);
        
        //Taking Input From User
        System.out.println("Enter One String : ");
        str = sobj.nextLine();

        //Creating Object of Small Class 
        Small sobj2 = new Small(str);

        //Call To Behaviour of Class
        iret = sobj2.Count();

        //Printing Count of Small Characters
        System.out.printf("Count of Small Characters in Entered String %s is : %d",str,iret);

        //Deallocating Memory of Object Allocated
        sobj = null;
        sobj2 = null; 
    }
}