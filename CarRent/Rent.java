/*
    Author : Pakshal Shashikant Jain 
    Date : 05/06/2023
    Program : We have to design application for tourist company.
              Tourist company provides cars on rent.
              Depends on the running of car they apply rent.
              
              If running is less than 100 kilometres then they charge 25
              rupees per kilometre .
              
              And if running is more than 100 kilometres then they apply 15
              rupees per kilometre after 100 kilometres.
    
              We have to accept number of kilometres from user and return
              the estimated rent.
            
              Input : 73 Output : 1825
              Input : 132 Output : 2980
              Input : 189 Output : 3835  
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Car
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Car() 
    {
        this.No = 0;
    }

    //Behaviour of Class To Accept Input From User
    void Accept()
    {
        //Creating object of Scanner Class To Take input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Running of Car in KM");
        this.No = sobj.nextInt();
    }

    //Behaviour of Class To Calculate Rent According To Running
    int CarRent()
    {
        int rent = 0;

        //Handeling Condition if Entered Running is in Negative Value
        if(this.No < 0)
        {
            this.No = -this.No;
        }

        //Logic To Calculate Run
        if(this.No <= 100)
        {
            rent = this.No * 25;

            return rent;
        }
        else 
        {
            rent = this.No * 15;

            return rent;
        }
    }
}

//Main Class
class Rent 
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0; 
        int iret = 0;

        System.out.println("Jay Ganesh....");

        System.out.println("-------Marvellous Car Rental Services-----------");

        //Creating object of Car Class
        Car cobj = new Car();

        //Call To Behaviours of Class
        cobj.Accept();
        iret = cobj.CarRent();

        //Printing Car Rent Calcualted
        System.out.printf("You Have To Pay Car Rent of %d INR",iret);
    }
}