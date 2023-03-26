/*
    Author : Pakshal Shashikant Jain 
    Date : 22/03/2023
    Program  : To Print Below Given Pattern 
    
    Input : iRow = 4 iCol = 4
    Output : * # # #
             * * # #
             * * * #
             * * * * 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Characteristics of Class
    int No = 0;
    int No2 = 0;

    //Constrcutor of Class
    Pattern()
    {   
        this.No = 0;
        this.No2 = 0;
    }

    //Behaviour of Class
    void Accept()
    {
        //Creting object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Number of Rows You Want....");
        this.No = sobj.nextInt();

        System.out.println("Enter Number of Columns You Want....");
        this.No2 = sobj.nextInt();
    }

    //Behvaiour of Class
    void display()
    {
        int i = 0;
        int j = 0;

        //Logic To Print Given Pattern
        System.out.println("Priting Below Given Pattern : ");
        for(i = 1;i <= this.No;i++)
        {
            for(j = 1;j <= this.No2;j++)
            {
                if((i == j)||(i > j))
                {
                    System.out.print("*\t");
                }
                else 
                {
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display 
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Ganapti Bappa Morya...");

        //Creating object of Pattern Class
        Pattern pobj = new Pattern();
        //Call To Behaviour of Class
        pobj.Accept();
        //Call To Behaviour of Class
        pobj.display();
    }
}