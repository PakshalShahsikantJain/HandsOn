/*
    Author : Pakshal Shashikant Jain 
    Date : 06/04/2023
    Program : To print Below Given Pattern

    Input : iRow = 4 iCol = 4
    Output : * * * *
             * * *
             * *
             *
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Characteristic of Class
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
        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking input from User
        System.out.println("Enter Number of Rows You Want");
        this.No = sobj.nextInt();

        System.out.println("Enter Number of Columns You Want");
        this.No2 = sobj.nextInt();
    }

    //Behaviour of Class
    void display()
    {
        int i = 0;
        int j = 0;

        //Logic To Print Given Pattern 
        System.out.println("Printing Below Given Pattern : ");
        for(i = this.No;i > 0;i--)
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display 
{
    //Main Function
    public static void main(String arsg[])
    {
        System.out.println("Jay ganesh....");

        //Creating object of Pattern Class
        Pattern pobj = new Pattern();

        //Call To Behaviour of Class
        pobj.Accept();
        pobj.display();
    }
}