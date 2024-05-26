/*
    Author : Pakshal Shashikant Jain 
    Date : 26/05/2024
    Program : Write a program which accepts file name from user and count number of
              white spaces from that file.

              Input : Demo.txt
              Output : Number of white spaces are 13 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;
import java.io.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of Class
class FileIO
{
    //Characteristics of Class
    String fname;

    //Constructor of Class
    FileIO(String svalue)
    {
        fname = svalue;
    }

    //Behaviour of Class To Count White Spaces
    int CountWhiteSpace() throws Exception
    {
        int i = 0;
        int icnt = 0;

        //Creating object of FileReader Class 
        FileReader fobj = new FileReader(this.fname);
        
        //Reading Data From File in chunks of bytes and Storing it in Local Variable 
        System.out.println("Data From File is : ");
        while((i = fobj.read()) != -1)
        {
            System.out.print((char)i);

            //Counting Number of Bytes
            if((char)i == ' ')
            {
                icnt++;
            }
        }
        
        //Closing File
        fobj.close();
        return icnt;
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class 
class Count 
{
    //Main Function
    public static void main(String args[])
    {
        String str = " ";
        int iret = 0;

        System.out.println("Jay Ganesh......");

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking File Name as Input From User
        System.out.println("Enter File Name : ");
        str = sobj.nextLine();

        //Creating Object of FileIO Class 
        FileIO fobj = new FileIO(str);
    
        try 
        {
            //Call To Behaviour of Class
            iret = fobj.CountWhiteSpace();
            System.out.println("\nCount of WhiteSpaces From File is : "+iret);
        }
        catch (Exception ref)
        {
            System.out.println("An Error Occured While Performing Operations : "+ref);
        }       
    }
}