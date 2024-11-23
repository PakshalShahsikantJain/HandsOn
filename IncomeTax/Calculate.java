/*
    Author : Pakshal Shashikant Jain 
    Date : 02/06/2023
    Program : Design application for income tax department to calculate tax
              amount. According to the income tax department there is no
              income tax for the income less than 5 lakhs.

              If income is in between 5 to 10 lakhs then there will be 10% tax.
              If income is in between 10 to 20 lakhs then there will be 20%
              tax.

              And for more than 20 lakhs there will be 30% tax.
              We have t0o accept gross income from user and return the tax
              amount. 

*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration 
class IncomeTax
{
    //Characateristics of Class
    int No = 0;

    //Constructor of Class
    IncomeTax(int no)
    {
        this.No = no;
    }

    //Behaviour of Class
    float TaxCalc()
    {
        float ans = 0.0f;

        //Handeling Condition if Entered Amount is Less Than 5L
        if(this.No < 500000)
        {
            return ans;
        }  

        //Handeling Condition if Entered Amount is in Between 5L and 10L
        else if((this.No >= 500000)&&(this.No < 1000000))
        {
            ans = (this.No * 10) / 100;
            return ans;
        }

        //Handeling Condition if Entered Amount is in Between 10L To 20L 
        else if((this.No >= 1000000)&&(this.No <= 2000000))
        {
            ans = (this.No * 20) / 100;

            return ans;
        }

        //Handeling Condition if Entered Amount is Greater Than 30L
        else 
        {
            ans = (this.No * 30) / 100;

            return ans;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Calculate
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        float fret = 0.0f;

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh.....");

        //Taking Gross Icome Input From User
        System.out.println("Enter Your Gross Income..");
        No = sobj.nextInt();

        //Creating object of IncomeTax Class
        IncomeTax iobj = new IncomeTax(No);

        //Call To Behaviour of Class
        fret = iobj.TaxCalc();

        //Printing Taxable Amount Calculated 
        System.out.printf("You Have To Pay Taxble Amount of %.1f\n",fret);
    }
}