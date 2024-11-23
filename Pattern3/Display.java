/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To accept number from user and print that number of $ & * on screen
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Pattern
{
    //Characteristics of Class
    int No = 0;
    
    //Constructor of Class
    Pattern(int no)
    {
        this.No = no;
    }

    //Behaviour of Class
    void display()
    {
        int i = 0;

        System.out.println("Displaying Below Pattern : ");
        for(i = 0;i < this.No;i++)
        {
            System.out.print("$\t*\t");
        }
    }
}

//Main Class
class Display 
{
    public static void main(String args[])
    {
        int No = 0;

        System.out.println("Jay Ganesh....");
        //Creating object of Scanner To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter One Number Till You Want To Display Pattern");
        No = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(No);
        //Call To Behaviou of Class
        pobj.display();
    }
}