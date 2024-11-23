/*
    Author : Pakshal Jain
    Date : 19/10/2022
    Program : To Count Frequecy of Even Digits in Entered number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Frequency
{
    //Characteristics of Class
    private int No = 0;
    
    //Constructor of Class
    public Frequency(int no)
    {
        this.No = no;
    }
    //Behaviour of class
    int count()
    {
        int Digit = 0;
        int icnt = 0;

        //Logic
        while(this.No != 0)
        {
            Digit = this.No % 10;
            if(Digit % 2 == 0)
            {
                icnt++;
            }
            this.No = this.No / 10;
        }

        return icnt;
    } 
}

//Main Class
class Count 
{
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        System.out.println("Jay Ganesh...");

        //Creating Object of Scanner Class To Take input
        Scanner sobj = new Scanner(System.in);

        //Taking input From User
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating object of Scanner Class
        Frequency fobj = new Frequency(No);

        //Call To Behaviour of Class
        iret = fobj.count();

        //Printing Count of Frequency of Even Digits
        System.out.println("Frequency of Even Digits is : "+iret);
    }
}