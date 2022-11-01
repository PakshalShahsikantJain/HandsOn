/*
    Author : Pakshal Jain
    Date : 17/09/2022
    Program : To Print Entered Number of * on Screen
*/

//Importing Required Pakcages
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern
{
    //Chracteristics of Class
    private int No = 0;

    //Constructor of Class
    Pattern(int no)
    {
        this.No = no;
    }

    //Behaviour of Class
    void  Display()
    {
        while(this.No > 0)
        {
            System.out.print("*\t");
            this.No--;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Display
{
    public static void main(String args[])
    {
        System.out.println("Ganapti Bappa Morya.....");
        Scanner sobj = new Scanner(System.in);

        int No = 0;
        System.out.println("Enter One Number....");
        No = sobj.nextInt();

        Pattern pobj = new Pattern(No);
        pobj.Display();
    } 
}