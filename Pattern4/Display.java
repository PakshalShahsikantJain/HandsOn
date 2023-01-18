/*  
    Author : Pakshal Jain
    Date : 18/01/2023
    Program : Accept number from user and display below pattern.
    
    Input : 5
    Output : A B C D E
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Pattern
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Pattern(int no)
    {
        this.No = no;
    }

    //Behaviour of Class
    void display()
    {
        int i = 0;
        int Sum = 0;

        //Logic To Print To Given Pattern
        for(i = 0;i < this.No;i++)
        {
            Sum = i + 65;
            System.out.printf("%c\t",Sum);
        }
    }
}//End of Class

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay ganesh....");

        //Taking Input From User
        System.out.println("Enter Number Till You Want To Print Pattern...");
        No = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(No);

        //Call To Behaviour of Class
        pobj.display();
    }
}