/*
    Author : Pakshal Jain
    Date : 21/10/2022
    Program : To accept number from user and if number is less than 50 then print small, 
              if it is greater than 50 and less than 100 then print medium, 
              if it is greater than 100 then print large
*/

//Required Libraries
import java.util.*;
import java.lang.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Number 
{
    //Characteristics of Class
    int No = 0;

    //Construtor of Class
    Number(int no)
    {
        this.No = no;
    }

    //Behaviour of Class
    void Output()
    {
        if(this.No < 50)
        {
            System.out.println("Small");
        }
        else if((this.No >= 50)&&(this.No <= 100))
        {
            System.out.println("Medium");
        }
        else if(this.No > 100)
        {
            System.out.println("Large");
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Ass8Q1
{
    public static void main(String args[])
    {
        int No = 0;

        //Creating Object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh....");

        //Taking Input From User
        System.out.println("Enter One Number...");
        No = sobj.nextInt();

        //Creating Object Number Class
        Number nobj = new Number(No);
        //Call To Behaviour of Class
        nobj.Output();
    }
}