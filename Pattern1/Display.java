/*
    Author : Pakshal Jain
    Date : 14/09/2022
    Program : To Print * Entered Number of Times
*/

//Required imports
import java.lang.*;
import java.util.*;

//Class Declration
class Pattern
{
    //Characteristic of Class
    private int No = 0;

    //Constructor of Class(Parameterised)
    public Pattern(int no)  
    {
        this.No = no;
    }
    //Behavoiur of Class
    void display()
    {
        int i = 0;

        System.out.println("Printing * "+this.No+" times");
        for(i = 0;i < this.No;i++)
        {
            System.out.print("*\t");
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Display
{
    public static void main(String args[])
    {
        int No = 0;

        System.out.println("Ganapati Bappa Morya Mangal Murti Morya...");
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter One Number : ");
        No = sobj.nextInt();

        //Creating Object of Class
        Pattern pobj = new Pattern(No);
        //Call to Behviour of Class
        pobj.display();
    }
}