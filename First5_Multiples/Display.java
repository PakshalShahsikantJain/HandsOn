/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept number From user and Print First Five Multiples of That Number
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Multiples 
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Multiples(int no)
    {
        this.No = no;
    }

    //Behaviour of Class
    void display()
    {
        int i = 0;
        int Mult = 0;

        //Logic
        System.out.println("Printing First Five Multiples of Entered Number");
        for(i = 1; i <= 5;i++)
        {
            Mult = this.No * i;
            System.out.print(Mult+"\t");
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;

        System.out.println("Ganapti Bappa Morya....");
        
        //Creaiting object of Scanner Class To Take input From user
        Scanner sobj = new Scanner(System.in);
        //Taking Input From user
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating Object of Multiples Class
        Multiples mobj = new Multiples(No);
        //Call To Bheviout of Class
        mobj.display();
    }
}