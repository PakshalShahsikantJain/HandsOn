/*
    Author : Pakshal Shashikant Jain 
    Date : 27/05/2024
    Program : Write a program which accepts file name and one character from user and
              count number of occurrences of that characters from that file.

              Input : Demo.txt ‘M’
              Output : Frequency of M is 7 
*/

/////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;
import java.io.*;

//////////////////////////////////////////////////////////////////////////////

//Start of Class
class FileIO 
{
    //Characteristics of Class
    String str;
    char ch;

    //Constructor of Class
    FileIO(String svalue,char cvalue)
    {
        this.str = svalue;
        this.ch = cvalue;
    }

    //Behaviour of Class To Count Frequency of Entered Character
    int CountChar() throws Exception
    {
        int i = 0;
        int icnt = 0;
        
        //Creating object of File Reader Class
        FileReader fobj = new FileReader(this.str);

        //Reading Data From File and Counting Frequecncy of Entered Character
        System.out.println("Data From File is : ");
        while((i = fobj.read()) != -1)
        {
            System.out.print((char)i);

            //Counting Frequency of Entered Character
            if((char)i == ch)
            {
                icnt++;
            }
        }

        //Returning Count of Entered Character
        return icnt;
    }
}

///////////////////////////////////////////////////////////////////////////////

//Main Class
class Count
{
    //Main Function
    public static void main(String args[])
    {
        String str = " ";
        char ch = ' ';
        int icnt = 0;
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating Object of Scanner Class To Take Input From User 
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter File Name");
        str = sobj.nextLine();

        System.out.println("Enter Character : ");
        ch = sobj.next().charAt(0);

        //Creting object of FileIO Class
        FileIO fobj = new FileIO(str,ch);

        try 
        {
            //Call To Behaviour of Class
            iret = fobj.CountChar();
            System.out.println("\nCount of Entered Character From File is : "+iret);
        }
        catch(Exception ref)
        {
            System.out.println("An Error Occured While Performing Operations : "+ref);
        }
    }
}