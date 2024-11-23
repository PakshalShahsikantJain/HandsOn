/*
    Author : Pakshal Jain
    Date : 20/09/2022
    Program : Accept number from user and print even factors of that number.
*/

//Requried Imports
import java.lang.*;
import java.util.*;

//Class Declaration
class EvenFact
{
    //Characteristics of Class
    private int No = 0;

    //Constructor of Class(Parameterised)
    public EvenFact(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    void display()
    {
        int i = 0;
        System.out.println("Printing Even Factors of "+this.No);
        for(i = 1;i <= this.No;i++)
        {
            if((this.No % i == 0)&&(i % 2 == 0))
            {
                System.out.print(i+"\t");
            }
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

class Display
{
    public static void main(String args[])
    {
        int No = 0;

        System.out.println("Jay Ganesh....");

        System.out.println("Enter One Number..");
        Scanner sobj = new Scanner(System.in);
        No = sobj.nextInt();

        //Creating Object of Class
        EvenFact eobj = new EvenFact(No);
        //Calling Behaviour of Class
        eobj.display();
    }
}