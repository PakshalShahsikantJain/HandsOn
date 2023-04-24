/*
    Author : Pakshal Shashikant Jain 
    Date : 20/04/2023
    Program : Design application for hotel. According to the management
              team of hotel they are giving discount on total bill amount of
              customer.
              If bill bill amount is less than 500 then there is no discount , if
              bill amount is less than 1500 and more than 500 they give 10%
              discount.
              And if the bill amount is more than 1500 then they give 15%
              discount.
              Our application should accept total bill amount and depends on
              the discount policy we have to return the amount after applying
              discount.

              Input : 1200 Output : 1080
              Input : 290 Output : 290
              Input : 3700 Output : 3145 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Hotel 
{
    //Characateristics of Class
    int No = 0;

    //Constructor of Class Defalut (Constructor) 
    Hotel()
    {
        this.No = 0;
    }

    //Behaviour of Class To Take input From User
    int Accept()
    {
        //Creating object of Scanner Class
        Scanner sobj = new Scanner(System.in);
        
        //Taking input From User
        System.out.println("Enter Your Bill Amount");
        this.No = sobj.nextInt();

        return this.No;
    }

    //Behaviour of Class To Apply Discount on Entered Bill 
    int Discount()
    {
        int Discount = 0;
        int Final = 0;

        //Logic To Apply Discount
        if(this.No < 500)
        {
            return this.No;
        }
        else if((this.No >= 500)&&(this.No <= 1500))
        {
            Discount = (this.No * 10) / 100;
            Final = this.No - Discount;

            return Final; 
        } 
        else if(this.No > 1500)
        {
            Discount = (this.No * 15) / 100;
            Final = this.No - Discount;

            return Final;
        }
        return 0;
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Calculate
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;
        int iret2 = 0;

        System.out.println("Ganapati Bappa Morya..");

        System.out.println("---------------Welcome To TCS Hotel----------------------");
        
        //Creating object of Hotel Class
        Hotel hobj = new Hotel();

        //Call To Behaviours of Class
        iret = hobj.Accept();
        iret2 = hobj.Discount();

        //Printing Output According To Given Conditions 
        if(iret < 500)
        {
            System.out.printf("Your Final Bill Amount According To Our Hotel Policy is : %d",iret2);
        }
        else if((iret >= 500)&&(iret <= 1500))
        {
            System.out.printf("Your Final Bill Amount After Getting Discount of 10%% is : %d",iret2);
        }
        else if(iret > 1500)
        {
            System.out.printf("Your Final Bill Amount After Getting Discount of 15%% is : %d",iret2);
        }

        //Deallocating Memory of object
        hobj = null;
    }
}