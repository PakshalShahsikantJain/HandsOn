/*
    Author : Pakshal Shashikant Jain 
    Date : 20/05/2024
    Program : Write application which accept file name from user and one string from user. Write
              that string at the end of file.

              Input : Demo.txt
                      Hello World

              Output : Write Hello World at the end of Demo.txt file 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;
import java.io.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Starting of Class
class FileIO 
{
    //Characteristics of Class
    int fd;
    String fname;
    String data;

    //Constructor of Class
    FileIO(String svalue,String value)
    {
        this.fd = 0;
        this.fname = svalue;
        this.data = value; 
    }

    //Behaviour of Class To Append Data At The End of File
    void Append() throws Exception
    {
        //Creating Object of FileWriter Class To Open File and Write Data into it
        FileWriter fobj = new FileWriter(this.fname,true);   // true Means Open File in Append Mode

        if(fobj == null)
        {
            System.out.println("Unable To Open File");
            return;
        }
        else
        {
            System.out.println("File Successfully Opened");
        }

        //Write Data into File
        fobj.write(this.data);
        System.out.println("Data Successfully Written into the File");

        //Closing File
        fobj.close();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class 
class Append
{
    //Main Function
    public static void main(String args[])
    {
        String str = " ";
        String data = " ";

        System.out.println("Jay Ganesh.......");

        //Creating Object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking File Name as Input From User
        System.out.println("Enter File Name");
        str = sobj.nextLine();

        System.out.println("Enter Data You Want To Write in File");
        data = sobj.nextLine();

        //Creating Object of FileIO Class
        FileIO fobj = new FileIO(str,data);

        try 
        {
            //Call To Behaviour of Class
            fobj.Append();
        }
        catch (Exception ref)
        {
            System.out.println("An Exception Occured While Performing Operations");
        }

        //Deallocating Memory of Object Class
        fobj = null;
    }
}