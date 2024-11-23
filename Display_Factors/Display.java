/*
    Author : Pakshal jain
    Date : 24/09/2022
    Program : To Display Factors of Entered Number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Disp
{   
    //Characteristics of Class
    private int No = 0;

    //Constructor of Class
    public Disp(int no)
    {
        if(no < 0)
        {
            no = -no;
        }

        this.No = no;
    }
    //Behaviour of Class
    void display()
    {
        int i = 0;

        System.out.println("Factors of Entered Number is as Follows....");
        for(i = 1;i <= this.No;i++)
        {
            if(this.No % i == 0)
            {
                System.out.print(i+"\t");
            }
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Display
{
    public static void main(String args[])
    {
        int No = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Jay Ganesh.....");
        
        System.out.println("Enter One Number...");
        No = sobj.nextInt();

        //Creating object of Class
        Disp dobj = new Disp(No);
        //Calling Behciour of Class
        dobj.display();
    }
}