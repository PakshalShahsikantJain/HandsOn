/*
    Auhthor : Pakshal jain
    Date : 01/10/2022
    Program : To Calculate Multiplication of Factors of Entered number
*/

//Requried Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Fact_Multi
{
    //Caharacteristics of Class
    int No = 0;

    //Constructor of Class
    Fact_Multi(int no)
    {
        this.No = no;
    }
    //Behaviour of CLass
    int mult()
    {
        int i = 0;
        int Mult = 1;

        //Logic of Class
        for(i = 1;i < No;i++)
        {
            if(this.No % i == 0)
            {
                Mult = Mult * i;
            }
        }

        return Mult;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

class Multi 
{
    public static void main(String args[])
    {
        //Creating Object of Scanner Class To Take Input
        Scanner sobj = new Scanner(System.in);
        int No = 0;
        int iret = 0;

        System.out.println("Jay Ganesh....");
        System.out.println("Enter One Number...");
        No = sobj.nextInt();

        //Creating object of Class
        Fact_Multi fobj = new Fact_Multi(No);
        //Calling Behaviour of Class
        iret = fobj.mult();

        System.out.println("Multiplication of Factor of Entered Number is : "+iret);       
    }
}