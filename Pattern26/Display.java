/*
	Author : Pakshal Shashikant Jain 
	Date : 02/04/2023
	Program : To Print Below Given Pattern

	Input : iRow = 6 iCol = 5 
	Output : 1 2 3 4
             1 * * 4
             1 * * 4
             1 2 3 4 
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
        //Creating Object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Number of Rows You Want...");
        this.No = sobj.nextInt();

        System.out.println("Enter Number of Columns You Want...");
        this.No2 = sobj.nextInt();
    }

    //Behaviour of Class To Display Given Pattern
    void display()
    {
        int i = 0;
        int j = 0;  

        //Logic To Print Given Pattern 
        System.out.println("Printing Below Given Pattern : ");
        for(i = 1;i <= this.No;i++)
        {
            for(j = 1;j <= this.No2;j++)
            {
                if((i == 1)||(j == 1)||(i == this.No)||(j == this.No2))
                {
                    System.out.printf("%d\t",j);
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

//Main Class
class Display 
{
    //Main Function
    public static void main(String args[])
    {      
        System.out.println("Jay Ganesh.....");

        //Creating object of Pattern Class
        Pattern pobj = new Pattern();

        //Call To Behaviours of Class
        pobj.Accept();
        pobj.display();

        //Deacllocating Memory of Object Created
        pobj = null;
    }
}