/*
    Author : Pakshal Jain
    Date : 27/10/2022
    Program : To Accept Number From User and Print Number Line of That Number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class NumberLine
{
    //Characteristics of Class
    int No = 0;
    
    //Constructor of Class
    NumberLine(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    void display()
    {
        int i = 0;

        //Logic
        System.out.println("Printing Number line of Entered Number");
        for(i = -this.No;i <= this.No;i++)
        {
            System.out.print(i+"\t");
        }
    }
}//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    public static void main(String args[])
    {
        int No = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating Object of NumberLine 
        NumberLine nobj = new NumberLine(No);
        //Call To Display Function
        nobj.display();
    }
}