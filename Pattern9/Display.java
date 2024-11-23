/*
    Author : Pakshal Jain 
    Date : 19/02/2023
    Program : To Print Below Give Patter

    Input : iRow = 4 iCol = 3
    Output :    1 2 3
                1 2 3
                1 2 3
                1 2 3 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Pattern 
class Pattern
{
    //Characteristics of Class
    int Row = 0;
    int Col = 0;

    //Constructor of Class
    Pattern(int No,int No2)
    {
        this.Row = No;
        this.Col = No2;
    }

    //Behaviour of Class
    void display()
    {
        int i = 0;
        int j = 0;

        //Logic To Print Given Pattern
        for(i = 1;i <= this.Row;i++)
        {
            for(j = 1; j <= this.Col;j++)
            {
                System.out.printf("%d\t",j);
            }
            System.out.println();
            j = 0;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

        System.out.println("Jay Ganesh...");

        //Taking Input From User
        System.out.println("Enter Number of Rows You Want");
        No = sobj.nextInt();

        System.out.println("Enter Number of Cols You Want");
        No2 = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(No,No2);
        //Call To Behaviour of Class
        pobj.display();
    }
}