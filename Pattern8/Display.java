/*
    Author : Pakshal Jain 
    Date : 19/02/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 3
    Output : * * *
             * * *
             * * *
             * * * 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Characteristics of Class
    int Row = 0;
    int Col = 0;

    //Parameterised Constructor of Class
    Pattern(int no,int no2)
    {
        this.Row = no;
        this.Col = no2;
    } 

    //Behaviour of Class
    void display()
    {
        int i = 0;
        int j = 0;

        //Logic To Print Pattern
        for(i = 1;i <= this.Row;i++)
        {
            for(j = 1;j <= this.Col;j++)
            {
                System.out.print("*\t");
            }
            System.out.printf("\n");
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class 
class Display
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh....");

        //Taking Input From User
        System.out.println("Enter Number of Rows You Want...");
        No = sobj.nextInt();

        System.out.println("Enter Number of Columns You Want...");
        No2 = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(No,No2);
        //Call To Behaviour of Class
        pobj.display();
    }
}