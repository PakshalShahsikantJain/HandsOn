/*
    Author : Pakshal Shashikant Jain 
    Date : 04/03/2023
    Program : To Print Below Fiven Pattern 
    Input : iRow = 4 iCol = 4
    Output : A B C D
             A B C D
             A B C D
             A B C D 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Pattern 
{
    //Characterstics of Class
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
        System.out.println("Printing Given pattern");
        for(i = 0;i < this.No;i++)
        {
            for(j = 0;j < this.No2;j++)
            {
                System.out.printf("%c\t",j + 65);
            }
            System.out.println();
        }
    }
}

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