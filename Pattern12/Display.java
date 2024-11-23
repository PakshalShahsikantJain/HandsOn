/*
    Author : Pakshal Shashikant Jain 
    Date : 03/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 3 iCol = 4
    Output : 1 1 1 1
             2 2 2 2
             3 3 3 3
             4 4 4 4 

*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Pattern 
{
    //Chararteristics of Class
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

        //Logic To Print Pattern
        System.out.println("Printing Given Pattern : ");
        for(i = 1;i <= this.No;i++)
        {
            for(j = 1;j <= this.No2;j++)
            {
                System.out.printf("%d\t",i);
            }
            System.out.println();
        }
    }
}

//Main Class
class Display 
{
    //Main Function
    public static void main(String argsp[])
    {
        int No = 0;
        int No2 = 0;

        //Creating object of Scanner Class To Take input From User
        Scanner sobj = new Scanner(System.in);
        System.out.println("Jay Ganesh....");
        
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