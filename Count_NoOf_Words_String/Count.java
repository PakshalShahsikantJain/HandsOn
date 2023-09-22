/*
    Author : Pakshal Shashikant Jain
    Date : 22/09/2023
    Program : Write a program which accept string from user count number of
              words from string
              
              Input : "Marvellous Multi OS"
              Output : 3
              
              Input : "              Marvellous                  Multi           OS             Pune"
              Output : 4 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class StringWord
{
    //Characteristics of Class
    char arr[];
    String str;

    //Constructor of Class
    StringWord()
    {
        this.arr = null;
        this.str = " ";
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        //Creating Character Array of Entered String
        this.arr = new char[this.str.length()];

        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Count Number of Words Present in String
    int WordCount()
    {
        int icnt = 1;
        int i = 0;

        if(this.arr == null)
        {
            return -1;
        }

        //Logic To Count
        if(this.arr[i] == ' ')
        {
            while(this.arr[i] == ' ')
            {
                i++;
            }
        }

        while(i != (this.arr.length - 1))
        {
            if(this.arr[i] == ' ')
            {
                while((this.arr[i] == ' ')&&(i != this.arr.length))
                {
                    i++;
                }
                icnt++;
            }
            i++;
        }

        return icnt;
    }
}//End of Class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Count
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh......");

        //Creating object of StringWord Class
        StringWord sobj = new StringWord();

        //Call To Behaviours of Class
        sobj.Accept();
        iret = sobj.WordCount();

        //Printing Count of Word Present in String
        System.out.println("Count of Word is : "+iret);
    }
}