/*
    Author : Pakshal Shashikant Jain 
    Date : 19/05/2024
    Program : Write application which accept file name from user and read all data from that file
              and display contents on screen.
            
              Input : Demo.txt
              Output : Display all data of file. 
*/

//Required Libraries
import java.lang.*;
import java.util.*;
import java.io.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of Class
class FileIO
{
    //Characteristics of Class
    int fd;
    String fname;

    //Constructor of Class
    FileIO(String svalue)
    {
        this.fname = svalue;
        this.fd = 0;
    }

    //Constructor of Class
    void ReadFile() throws Exception
    {
        int i = 0; 
        long FileSize = 0;

        //Reading File
        FileInputStream fobj = new FileInputStream(this.fname);
        File fobj2 = new File(this.fname);

        System.out.println("Data From File is : ");
        while((i = fobj.read()) != -1)
        {
            System.out.print((char)i);
        }

        //Calculating Size of File
        FileSize = fobj2.length();
        
        //Printing Size of File
        System.out.printf("\nSize of File in bytes is : %d",FileSize);

        fobj.close();

        fobj = null;
        fobj2 = null;
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Read
{
    //Main Function
    public static void main(String args[])
    {
        String name = " ";

        System.out.println("Jay Ganesh....");

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking File Name as Input From User
        System.out.println("Enter File Name : ");
        name = sobj.nextLine();

        //Creating object of FileIO Class
        FileIO fobj = new FileIO(name);
    
        try 
        {
            //Call To Behaviour of Class
            fobj.ReadFile();
        }
        catch (Exception ref)
        {
            System.out.println("An Exception Occured File Performing FileIO Opeartions");
        }

        //Deallcating Memory of Class Object
        fobj = null;
    }
}