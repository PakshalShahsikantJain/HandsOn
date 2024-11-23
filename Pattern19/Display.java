/*
    Author : Pakshal Shashikant Jain 
    Date : 18/03/2023
    Program : To Print Below Given Pattern
    
    Input : iRow = 5 iCol = 5
    Output : a b c d e
             1 2 3 4 5
             a b c d e
             1 2 3 4 5
             a b c d e
*/

//Required libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declration
class Pattern 
{
    //Characteristics of Class
    int No = 0;
    int No2 = 0;

    //Constructor of Class
    public Pattern(int no,int no2)
    {
        this.No = no;
        this.No2 = no2;
    }

    //Function To Display Pattern
    void display()
    {
        int i = 0;
        int j = 0;

        //Logic To Print Pattern
        System.out.println("Printing Below Given Pattern..");
        for(i = 0;i < this.No;i++)
        {
            for(j = 0;j < this.No2;j++)
            {
                if(i % 2 == 0)
                {
                    System.out.printf("%c\t",j + 97);
                }
                else 
                {
                    System.out.printf("%d\t",j + 1);
                }
            }
            System.out.println();
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;

        //Creating object of Scanner class To Take input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh.....");

        //Taking Input From User
        System.out.println("Enter Number of Rows You Want....");
        No = sobj.nextInt();

        System.out.println("Enter Number of Columns You Want...");
        No2 = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(No,No2);

        //Call To Behaviour of Class
        pobj.display();
    }
}