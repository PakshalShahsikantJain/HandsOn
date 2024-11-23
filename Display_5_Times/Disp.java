/*
    Author : Pakshal Jain
    Date : 10/09/2022
    Program : To Print Marvellous Entered Number of Times
*/

//Importing Required Imports
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Display
{
    int No = 0;

    Display(int no)
    {
        this.No = no;
    }

    void print()
    {
        int i = 0;

        System.out.println("Printing Marvellous "+this.No+" times");
        for(i = 0;i < this.No;i++)
        {
            System.out.println("Marvellous");
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Disp
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int No = 0;

        System.out.println("Ganpati Bappa Morya Puchayvarshi Lavkar ya.....");
        
        System.out.println("Enter One Number....");
        No = sobj.nextInt();

        Display dobj = new Display(No);
        dobj.print();
    }
}