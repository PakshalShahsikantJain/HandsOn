/*
    Author : Pakshal Shashikant Jain 
    Date : 22/03/2023
    Program : To Print Below Given Pattern
    Input : iRow = 5 iCol = 5
    Output : 1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
            -1 -2 -3 -4 -5
             1  2  3  4  5
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

    //Behaviour of Class
    void Accept()
    {
        //Creating object of Scanner class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking input From User
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

        //Logic To Print Below Given Pattern
        System.out.println("Priting Below Given Pattern : ");
        for(i = 0;i < this.No;i++)
        {
            for(j = 1;j <= this.No2;j++)
            {
                if(i % 2 == 0)
                {
                    System.out.printf(" %d\t",j);
                }
                else if(i % 2 != 0)
                {
                    System.out.printf("%d\t",(-j));
                } 
            }
            System.out.println();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of Pattern Class
        Pattern obj = new Pattern();

        //Call to Behaviour of Class
        obj.Accept();
        obj.display();

        //Deallocation Memory of object created
        obj = null;
    }
}