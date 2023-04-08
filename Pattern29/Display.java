/*
    Author : Pakshal Shashikant Jain 
    Date : 07/04/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 5 iCol = 5
    Output : $ * * * *
             # $ * * *
             # # $ * *
             # # # $ *
             # # # # $
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
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
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number of Rows You Want...");
        this.No = sobj.nextInt();

        System.out.println("Enter Number of Columns You Want..");
        this.No2 = sobj.nextInt();
        
    }

    //Behaviour of Class To Display Given Pattern
    void display()
    {
        int i = 0;
        int j = 0;

        System.out.println("Printing Below Given Pattern : ");
        for(i = 1;i <= this.No;i++)
        {
            for(j = 1;j <= this.No2;j++)
            {
                if(i == j)
                {
                    System.out.print("$\t");
                }
                else if(i > j)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}//End of Class

//main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh...");

        //Creatin object of Pattern Class
        Pattern pobj = new Pattern();

        //call To Behaviour of Class
        pobj.Accept();
        pobj.display();
    }
}