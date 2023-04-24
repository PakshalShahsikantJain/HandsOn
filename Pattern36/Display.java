/*
    Author : Pakshal Shashikant Jain 
    Date : 19/04/2023
    Program : To Print Below Given Pattern 
    
    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4 5
             1 2     5
             1   3   5
             1     4 5
             1 2 3 4 5 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//class Declaration
class Pattern 
{
    //Characteristics of Class
    int No = 0;
    int No2 = 0;

    //Constructor of Class
    Pattern()
    {
        this.No = 0;
        this.No2 = 0;
    }

    //Behaviour of Class To Take Input From User
    void Accept()
    {
        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter NUmber of Rows you Want : ");
        this.No = sobj.nextInt();

        System.out.println("Enter Number of Columns You Want : ");
        this.No2 = sobj.nextInt();
    }

    //Behaviour of Class To Display Given Pattern 
    void Display()
    {
        int i = 0;
        int j = 0;

        //Logic To Print Given Pattern
        System.out.println("Printing Below Given Pattern : ");
        for(i = 1;i <= this.No;i++)
        {
            for(j = 1;j <= this.No2;j++)
            {
                if((i == j)||(i == 1)||(j == 1)||(i == this.No)||(j == this.No2))
                {
                    System.out.printf("%d\t",j);
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh...");

        //Creating object of Pattern Class
        Pattern pobj = new Pattern();

        //Call To Behaviour of Class
        pobj.Accept();
        pobj.Display();

        pobj = null;
    }
}