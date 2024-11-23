/*
    Author : Pakshal Jain
    Date : 13/12/2022
    Program : To Display Below Pattern

    Input : 5
    Output : * * * * * # # # # #

    Input : 6
    Output : * * * * * * # # # # # # #
    
    Input : -5
    Output : * * * * * # # # # #
    
    Input : 2
    Output : * * # #

*/

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern
{
    //Characteristics of Class
    private int No = 0;

    //Constructor of Class
    public Pattern(int no)
    {
        //Handeling Condition if Entered Number is Zero
        if(no < 0)
        {
            no = -no;
        }

        this.No = no;
    }

    //Behaviour of Class
    void Display()
    {
        int i = 0;

        //Logic To Print Above Given Pattern
        System.out.println("Printing Above Given Pattern");
        for(i = 0;i < this.No;i++)
        {
            System.out.print("*\t");
        }

        for(i = 0;i < this.No;i++)
        {
            System.out.print("#\t");
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class Declaration
class Display
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;

        //Creating Object of Scanner class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay ganesh...");

        //Taking Input From User
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating Object of Pattern Class
        Pattern pobj = new Pattern(No);
        //Call To Behaviour of Class
        pobj.Display();
    }
}