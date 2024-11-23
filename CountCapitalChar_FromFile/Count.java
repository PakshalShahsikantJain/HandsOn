/*
    Author : Pakshal Shashikant Jain 
    Date : 24/05/2024
    Program : Write a program which accepts file name from user and count number of
              capital characters from that file.

              Input : Demo.txt
              Output : Number of capital characters are 23
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;
import java.io.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of Class
class FileIO 
{   
    //Characteristics of Class
    String fname;
    int fd;

    //Constructor of Class
    FileIO(String svalue) 
    {
        this.fd = 0;
        this.fname = svalue;
    }

    //Behaviour of Class To Count Capital Characters From File 
    int CountCapital() throws Exception
    {
        //Creating object of FileReader Class To Open File in Read Mode 
        FileReader fobj = new FileReader(this.fname);
        int i = 0;
        int icnt = 0;

        //Reading Data From File
        while((i = fobj.read()) != -1)
        {
            //Counting Number of Capital Characters From File 
            if(((char)i >= 'A')&&((char)i <= 'Z'))
            {
                icnt++;
            }
        }

        //Returning Count of Capital Characters 
        return icnt;
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Count 
{
    //Main Function
    public static void main(String args[])
    {
        String fname = " ";
        int iret = 0;

        System.out.println("Jay Ganesh.....");

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking File Name as Input From User
        System.out.println("Enter File Name");
        fname = sobj.nextLine();

        //Creating object of FileIO Class
        FileIO fobj = new FileIO(fname);

        try 
        {
            //Call To Behaviour of Class
            iret = fobj.CountCapital();

            //Printing Count of Capital Characters 
            System.out.printf("Count of Capital Characters From File is : %d",iret);
        }
        catch (Exception ref)
        {
            System.out.println("An Error Occured While Performing Operations"+ref);
        }
    }
}