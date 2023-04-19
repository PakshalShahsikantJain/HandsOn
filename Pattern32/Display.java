/*
    Author : Pakshal Shashikant Jain 
    Date : 09/04/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 4
    Output : * * * #
             * * # *
             * # * *
             # * * *
*/

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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


    //Behaviour of Class To Take Input From User
    void Accept()
    {
        //Creating object of Scanner class To Take input From User
        Scanner sobj = new Scanner(System.in);

        //Taking input From user
        System.out.println("Enter Number of Rows You Want...");
        this.No = sobj.nextInt();

        System.out.println("Enter Number of Columns You Want...");
        this.No2 = sobj.nextInt();
    }

    //Behaviour of Class To Display Given Pattern 
    void Display()
    {
        int i = 0;
        int j = 0;  

        //Logic To Print Given Pattern 
        System.out.println("Printing Below Given Pattern : ");
        for(i = this.No;i > 0;i--)
        {
            for(j = 1;j <= No2;j++)
            {
                if(i == j)
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display 
{
    //Main Function
    public static  void main(String args[])
    {     
        System.out.println("Jay Ganesh...");

        //Creating object of Pattern Class
        Pattern pobj = new Pattern();

        //Calls To Behaviour of Class
        pobj.Accept();
        pobj.Display();
    }
}