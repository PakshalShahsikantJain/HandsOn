/*
    Author : Pakshal Shashikant Jain 
    Date : 12/08/2023
    Program : Write a program which accept string from user and convert it into
              lower case.

              Input : "Marvellous Multi OS"
              Output : marvellous multi os 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Conversion
{
    //Characteristisc of Class
    char arr[];
    String str;

    //Constructor of Class
    Conversion()
    {
        this.arr = null;
        this.str = " ";
    }

    //Bheaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from users
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        this.arr = new char[this.str.length()];

        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Convert String
    void convert()
    {
        int i = 0;
        int ascii = 0;

        if(this.arr == null)
        {
            return;
        }

        //Logic To Convert Case of String 
        while(i != this.arr.length) 
        {
            if((this.arr[i] >= 'A')&&(this.arr[i] <= 'Z'))
            {
                ascii = (int)this.arr[i] + 32;

                this.arr[i] = (char)ascii;
            }

            i++;
        }
    }
}//End of Class

//Main Class
class Convert
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of Conversion Class
        Conversion cobj = new Conversion();

        //Call To Behaviour of Class
        cobj.Accept();
        cobj.convert(); 

        //Printing Converted String 
        System.out.print("Converted String is : ");
        System.out.print(cobj.arr);
    }
}