/*
    Author : Pakshal Shashikant Jain 
    Date : 06/04/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 4
    Output : *
             * *
             * * *
             * * * *
*/

//Required libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Characateristics of Class
    int No = 0;
    int No2 = 0;

    //Constructor of Class
    Pattern()
    {
        this.No = 0;
        this.No2 = 0;
    }

    //Behaviour of Class
    void Accept()
    {   
        //Creating object of Scanner to Take Input From User
        Scanner sobj = new Scanner(System.in);  

        //Taking Input From User
        System.out.println("Enter Number of Rows you Want");
        this.No = sobj.nextInt();

        System.out.println("Enter Number of Columns You Want");
        this.No2 = sobj.nextInt();
    }

    //Behaviour of Class
    void Display()
    {
        int i = 0;
        int j = 0;

        //Logic To Print Pattern Given 
        System.out.println("Printing Below Given Pattern");
        for(i = 1;i <= this.No;i++)
        {
            for(j = 1;j <= this.No2;j++)
            {
                if(i >= j)
                {
                    System.out.print("*\t");
                }
                else 
                {
                    System.out.print(" \t");
                }
            }
            System.out.println();
        }
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////

class Display 
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of Pattern Class
        Pattern pobj = new Pattern();

        //Calls To Behaiour of Class
        pobj.Accept();
        pobj.Display();

        //Deallocating Memory of Object Created
        pobj = null;
    }
}