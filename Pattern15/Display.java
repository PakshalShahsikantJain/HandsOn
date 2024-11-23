/*
    Author : Pakshal Jain 
    Date : 14/03/2023
    Input : iRow = 3 iCol = 5
    Output : A A A A A
             B B B B B
             C C C C C
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

        //Logic 
        System.out.println("Printing Given Pattern : ");
        for(i = 0;i < this.No;i++)
        {
            for(j = 0;j < this.No2;j++)
            {
                System.out.printf("%c\t",i + 65);
            }
            System.out.println();
        }
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Display
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;
        
        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh....");

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