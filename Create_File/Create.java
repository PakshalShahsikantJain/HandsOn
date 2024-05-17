/*
    Author : Pakshal Shashikant Jain 
    Date : 17/05/2024
    Program : Write application which accept file name from user and create that file.
              
              Input : Demo.txt
              Output : File created successfully. 
*/

//Required Libraries
import java.lang.*;
import java.util.*;
import java.io.File;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of Class
class FileIO
{
    //Characteristics of Class
    String fname;

    //Constructor of Class
    FileIO(String fvalue)
    {
        this.fname = fvalue;
    }

    //Behaviour of Class
    void CreateFile() throws Exception
    {
        //Creating File
        File fobj = new File(this.fname);

        if(fobj.createNewFile()) 
        {
            System.out.println("File Created Successfully");
        }
        else 
        {
            System.out.println("Unable To Create File");
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Create
{
    //Main Function
    public static void main(String args[])
    {
        String fname = " ";

        System.out.println("Jay Ganesh....");

        //Creating Object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter File Name You Want To Create");
        fname = sobj.nextLine();

        //Creating Object of FileIO Class
        FileIO fobj2 = new FileIO(fname);

        try 
        {
            //Call To Behaviour of Class
            fobj2.CreateFile();
        }
        catch (Exception ref)
        {
            System.out.println("An Error Occured While Performing Operation");
        }

        //Deallocating Memory of Objects Created
        sobj = null;
        fobj2 = null;       
    }
}