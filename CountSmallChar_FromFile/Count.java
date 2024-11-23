/*
    Author : Pakshal Shashikant Jain 
    Date : 25/05/2024
    Program : Write a program which accepts file name from user and count number of
              small characters from that file.

              Input : Demo.txt
              Output : Number of small characters are 21
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;
import java.io.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of Class
class FileIO
{
    //Characteristics of Class
    String fname;

    //Constructor of Class
    FileIO(String svalue)
    {
        this.fname = svalue;
    }

    //Behaviour of Class To Count Small Characters
    int CountSmall() throws Exception 
    {
        int iret = 0;
        int icnt = 0;
        int i = 0;

        //Creating object of FileReader Class
        FileReader fobj = new FileReader(this.fname);

        //Reading Data From File in Chunks of Bytes
        System.out.println("Data From File is : ");
        while((iret = fobj.read()) != -1)
        {
            System.out.print((char)iret);

            //Counting Small Characters From File
            if(((char)iret >= 'a')&&((char)iret <= 'z'))
            {
                icnt++;
            }
        }

        //Closing File
        fobj.close();

        return icnt;
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

        //Creating object of FileIO Class
        FileIO fobj = new FileIO(str);

        try
        {
            //Call To Behaviour of Class
            iret = fobj.CountSmall();

            //Printing Count of Capital Characters
            System.out.printf("\nCount of Small Characters From File is : %d",iret);
        }
        catch (Exception ref) 
        {
            System.out.println("An Error Occured While Performing Operations :"+ref);
        }
    }
}