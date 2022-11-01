/*
    Author : Pakshal jain
    Date : 19/10/2022
    Program : To Count Frequency of Digits Which Are Between 3 and 7 in Entererd Number
*/

//Required Linbraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Frequency
{
    //Characteristics of Class
    int No = 0;
    
    //Constructor of Class
    Frequency(int no)
    {
        this.No = no;
    }

    //Behaviour of Class
    int count()
    {
        int Digit = 0;
        int icnt = 0;

        //Logic 
        while(this.No != 0)
        {
            Digit = this.No % 10;
            if((Digit > 3)&&(Digit < 7))
            {
                icnt++;
            }
            this.No = this.No / 10;
        }

        return icnt;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Count
{
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        //Creating object of Scanner Class To Take Input
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jya Ganesh...");

        System.out.println("Enter one Number...");
        No = sobj.nextInt();

        //Creating object of Frequency Class
        Frequency fobj = new Frequency(No);
        //Call To Behaviour of Class
        iret = fobj.count();

        System.out.println("Frequecy of Digit Which are Between 3 and 7 is "+iret);
    }
}