/*
    Author : Pakshal Jain
    Date : 20/09/2022
    Progream : Accept one number from user and print that number of even numbers on screen
*/

//Requied Libraried
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declartion
class Disp 
{
    //Chracteistics of Class
    private int No = 0;
    //Constructor of Class
    public Disp(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    void display()
    {
        int i = 0;
        System.out.println("Printing "+this.No+" Even Numbers : ");
        for(i = 1;i <= this.No;i++)
        {
            System.out.print(i * 2+"\t");
        }
    }
}//End Of Class Disply

//////////////////////////////////////////////////////////////////////////////////////////////////

class Display
{
    public static void main(String args[])
    {
        int No = 0;

        System.out.println("Ganapti Bappa Morya");

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Any Number You Want");        
        No = sobj.nextInt();
        
        //Creating object of Disp Class
        Disp dobj = new Disp(No);
        //Call To Behaviour of Class
        dobj.display();
    }
}