/*
    Author : Pakshal Jain
    Date : 18/09/2022
    Program : To Print Hello if Entered Number is Less 10 or else Print Demo
*/

//Required Imports
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Print
{
    //Chracteristics
    private int No = 0;

    //Constructor of Class
    public Print(int no)
    {
        this.No = no;
    }

    //Behaviour of Class
    void display()
    {
        if(this.No < 10)
        {
            System.out.println("Hello");
        }
        else
        {
            System.out.println("Demo");
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////

class Display
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int no = 0;
 
        System.out.println("Jay Ganesh....");

        System.out.println("Enter One Number....");
        no = sobj.nextInt();
        //Creating Object of Class
        Print pobj = new Print(no);
        pobj.display();
    }
}