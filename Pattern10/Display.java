/*
    Author : Pakshal Jain 
    Date : 02/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 3 iCol = 5
    Output : 5 4 3 2 1
             5 4 3 2 1
             5 4 3 2 1 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration 
class Pattern
{
    //Characteristics of Class
    int No = 0;
    int No2 = 0;

    //Constructor of Class
    Pattern(int no,int no2)
    {
        this.No = no;
        this.No2 = no2;
    }

    //Behaviour of Class
    void display()
    {
        int i = 0;
        int j = 0;

        System.out.println("Printing Given Pattern : ");
        for(i = 1;i <= this.No;i++)
        {
            for(j = this.No2;j > 0;j--)
            {
                System.out.printf("%d\t",j);
            }
            System.out.println();
        }        
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

        System.out.println("Enter Number of Columns You Want");
        No2 = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(No,No2);

        //Call To Behaviour of Class
        pobj.display();
    }
}