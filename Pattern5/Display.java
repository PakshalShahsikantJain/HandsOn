/*  
    Author : Pakshal Jain
    Date : 19/03/2023
    Program : Accept number from user and display below pattern.

    Input : 5
    Output : 5 # 4 # 3 # 2 # 1 # 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

        System.out.println("Printing Given Pattern\n");
        for(i = this.No;i > 0;i--)
        {
            System.out.printf("%d\t#\t",i);
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh....");

        //Taking input From User
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating object of Pattern Class
        Pattern pobj = new Pattern(No);

        //Call To Behaviour of Class
        pobj.display();
    }
}