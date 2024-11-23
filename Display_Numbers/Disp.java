/*
    Author : Pakshal Jain
    Date : 11/09/2022
    Program : To Print Numbers From Entered Number Till 1
*/

//Required Imports
import java.lang.*;
import java.util.*;

//Class Declaration
class Display
{
    //Chracterstics of Class
    int No = 0;

    //Parameterised Constructor of Class
    Display(int no)
    {
        this.No = no;
    }

    //Behaviour of class
    void Print()
    {
        int i = 0;

        System.out.println("Printing Numbers From "+this.No+" Till 1");
        
        for(i = this.No;i > 0;i--)
        {
            System.out.print(i+" ");
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Disp
{
    public static void main(String args[])
    {
        int No = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh.....");
        
        System.out.println("Enter Number....");
        No = sobj.nextInt();

        Display dobj = new Display(No);
        dobj.Print();
    }
}