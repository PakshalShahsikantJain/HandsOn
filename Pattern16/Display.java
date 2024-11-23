/*
    Author : Pakshal Shashikant Jain 
    Date : 15/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 3 iCol = 4
    Output : 1 2 3 4
             5 6 7 8
             9 10 11 12 

*/

//Required libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
        int k = 1;

        //Logic To Print Pattern
        System.out.println("Priting Given Pattern : ");
        for(i = 0;i < this.No;i++)
        {
            for(j = 0;j < this.No2;j++)
            {
                System.out.printf("%d\t",k);
                k = k + 1;
            }
            System.out.println();
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

        System.out.println("Ganapati Bappa Morya...");

        //Taking input From User
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