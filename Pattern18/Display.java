/*
    Author : Pakshal Shashikant Jain
    Date : 16/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 4
    Output : 2 4 6 8 10
             1 3 5 7 9
             2 4 6 8 10
             1 3 5 7 9 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Characteristic of Class
    int No = 0;
    int No2 = 0;

    //Constructor of Class
    Pattern(int no,int no2)
    {
        this.No = no;
        this.No2 = no2;
    }

    //Behaviour of Class
    void Display()
    {
        int i = 0;
        int j = 0;
        int k = 1;
        int l = 1;
        int no = 0;

        //Logic To Print Pattern
        System.out.println("Printing Below Given Pattern : ");
        for(i = 0;i < this.No;i++)
        {
            for(j = 0;j < this.No2;j++)
            {
                if(i % 2 == 0)
                {
                    no = k * 2;
                    System.out.printf("%d\t",no);
                    k = k + 1;
                }
                else 
                {
                    System.out.printf("%d\t",l);
                    l = l + 2;
                }
            }
            k = 1;
            l = 1;
            System.out.println();
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display 
{
    //Main Function of Class
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;

        //Creating Object of Scanner Class To Take Input From user
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh.....");

        //Taking input From User
        System.out.println("Enter Number of Rows You Want");
        No = sobj.nextInt();

        System.out.println("Enter Number of Columns You Want");
        No2 = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(No,No2);

        //Call To Behaviour of Class
        pobj.Display();

        //Deallocatin memory of object
        pobj = null;
    }
}