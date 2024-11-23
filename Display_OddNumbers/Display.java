/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Number From User and Print odd Number Till That Number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class OddNumbers
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    OddNumbers(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    void display()
    {
        int i = 0;

        //Logic
        System.out.println("Printing OddNumber Till Entered Number");
        for(i = 1;i <= this.No;i++)
        {
            if(i % 2 != 0)
            {
                System.out.print(i+"\t");
            }
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;

        System.out.println("Jay Ganesh...");
 
        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter One number");
        No = sobj.nextInt();

        //Creating object of OddNumbers Class
        OddNumbers nobj = new OddNumbers(No);
        //Call To Behaviour of Class
        nobj.display();
    }
}