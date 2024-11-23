/*
    Author : Pakshal Shashikant Jain 
    Date : 08/08/2023
    Program : Write a program which accept string from user and count number of
              small characters.

              Input : "Marvellous"
              Output : 9  
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class SmallLetter
{
    //Characteristics of Class
    String str;
    char arr[];

    //Constructor of Class
    SmallLetter()
    {
        this.str = " ";
        this.arr = null;
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter String");
        this.str = sobj.nextLine();

        //Allocating memory to array
        this.arr = new char[this.str.length()];

        this.arr = this.str.toCharArray();
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Behaviour of Class To Count Small Letter From Entered String 
    int count()
    {
        int i = 0;
        int icnt = 0;

        //Logic To Count 
        for(i = 0;i < this.arr.length;i++)
        {
            if((this.arr[i] >= 'a')&&(this.arr[i] <= 'z'))
            {
                icnt++;
            }
        }

        return icnt;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Count
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Ganapati Bappa Morya Mangal Murti Morya....");

        //Creating object of SmallLetter Class
        SmallLetter sobj = new SmallLetter();

        //Call To Behaviour of Class
        sobj.Accept();
        iret = sobj.count();

        //Printing Count of Small Letter Calculated
        System.out.printf("Count of Small Letter in Entered String (%s) is : %d",sobj.str,iret);

        //Deallocating Memory of Object Created
        sobj = null;
    }
}