/*
    Author : Pakshal Shashikant Jain 
    Date : 28/05/2024
    Program : Write a program which accepts file name and one count from user and read
              that number of characters from starting position.

              Input : Demo.txt 12
              Output : Display first 12 characters from Demo.txt 
*/

/////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;
import java.io.*;

//Start of Class
class FileIO
{
    //Characteristics of Class
    String fname;
    int isize;

    //Constructor of Class
    FileIO(String svalue,int ino)
    {
        this.fname = svalue;
        this.isize = ino;
    }

    //Behaviour of Class To Display N Number of Characters From File 
    void DisplayN() throws Exception
    {
        int i = 0;
        char arr[] = null;

        //Creating Object of File Reader Class To Read Data From File
        FileReader fobj = new FileReader(this.fname);

        //Reading N Number of Characters From File 
        arr = new char[this.isize];
        System.out.println("Data From File is : ");
        i = fobj.read(arr,0,this.isize);

        if(i != -1)
        {
            System.out.print(new String(arr,0,i));
        }

        //Closing File After Reading Data From File
        fobj.close();
    }
}

//////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display 
{
    //Main Function
    public static void main(String args[])
    {
        String str = " ";
        int ino = 0;

        System.out.println("Jay Ganesh......");

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking File Name as Input From User 
        System.out.println("Enter File Name : ");
        str = sobj.nextLine();

        System.out.println("Enter Number of Characaters You Want To Read From File : ");
        ino = sobj.nextInt(); 

        //Creating object of FileIO Class
        FileIO fobj = new FileIO(str,ino);

        try 
        {
            //call To Behaviour of Class
            fobj.DisplayN();
        }
        catch (Exception ref)
        {
            System.out.println("An Exception While Reading File : "+ref);
        }
    }
}