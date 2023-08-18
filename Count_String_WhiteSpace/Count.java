/*
    Author : Pakshal Shashikant Jain 
    Date : 16/08/2023
    Program : Write a program which accept string from user and count number of
              white spaces
    
              Input : "MarvellouS"
              Output : 0
    
              Input : "MarvellouS Infosystems"
              Output : 1
            
              Input : "MarvellouS Infosystems by Piyush Manohar Khairnnar"
              Output : 5
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StrWhiteCount
{
    //Characteristics of Class
    String str = " ";
    char arr[];

    //Constructor of Class
    StrWhiteCount()
    {
        this.str = " ";
        this.arr = null;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class 
        Scanner sobj = new Scanner(System.in);

        //Take Input from user
        System.out.println("Enter String");
        this.str = sobj.nextLine();

        //Converting String To Character Array 
        this.arr = new char[this.str.length()];

        this.arr = this.str.toCharArray();
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Behaviour of Class To Count WhiteSpaces from Entered String
    int Count()
    {
        int i = 0;
        int icnt = 0;

        //Logic To Count 
        while(i != this.arr.length)
        {
            if(this.arr[i] == ' ')
            {
                icnt++;
            }

            i++;
        }

        return icnt;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Count 
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of StrWhiteCount 
        StrWhiteCount cobj = new StrWhiteCount();

        //Call To Behaviour of Class
        cobj.Accept();
        iret = cobj.Count();

        //Printing Count Of White Spaces 
        System.out.println("Count of White Spaces in Entered String is : "+iret);

        //Deallocating Memory of Object Created
        cobj = null;
    }
}