/*
    Author : Pakshal Shashikant Jain 
    Date : 16/05/2024
    Program : Write application which accept file name from user and open that file in read mode.

              Input : Demo.txt
              Output : File opened successfully. 
*/

//Required Libraries
import java.lang.*;
import java.util.*;
import java.io.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FileIO
{
    //Characteristics of Class
    String name;

    //Constructor of Class
    FileIO(String svalue)
    {
        this.name = svalue;
    }

    //Behaviour of Class To Open File in Read Mode
    void OpenRead() throws Exception
    {
        int i = 0;

        //Opening File In Read Mode
        FileReader fin = new FileReader(this.name);

        while((i = fin.read()) != -1)
        {
            System.out.print((char)i);
        }

        fin.close();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class File
{
    //Main Function
    public static void main(String args[])
    {
        String str = "";

        System.out.println("Jay Ganesh....");

        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter File Name : ");
        str = sobj.nextLine();

        //Creatng Object of FileIO Class
        FileIO fobj = new FileIO(str);

        //Handling Exceptions 
        try 
        {
            //Call To Behaviour of Class
            fobj.OpenRead();
        }
        catch (Exception ref)
        {
            System.out.println("Inside Catch Block..");
        }
    }
}
