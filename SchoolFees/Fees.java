/*
    Author : Pakshal Shashikant Jain 
    Date : 04/06/2023
    Program : Design application for school management system.
              As school is primary there are 4 standards from 1 to 4.
              School fees of each standard is different.
              For first standard fees are 8900, for second standard 12790, for
              third standard 21000 and for fourth standard fees are 23450.
              We have to accept standard from user and display the
              corresponding fees. 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class School
{
    //Characateritsics of Class
    int No = 0;

    //Constructor of Class
    School() 
    {
        this.No = 0;
    }

    //Behaviour of Class
    void Accept()
    {
        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking input From User
        System.out.println("Enter Your Standard");

        this.No = sobj.nextInt();
    }

    //Behaviour of Class
    int Fee()
    {
        int fee = 0;

        //Logic To Print Fees According To Standard
        switch(this.No)
        {
            case 1 :
                fee = 8900;
                return fee;
            case 2 :
                fee = 12790;
                return fee;
            case 3 :
                fee = 21000;
                return fee;
            case 4 :
                fee = 23450;
                return fee;
            default :
                System.out.println("Invalid Input");
                System.exit(0);
        }

        return 0;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Fees
{
    //Main Function
    public static void main(String args[])
    {    
        int iret = 0;

        System.out.println("Ganapati Bappa Morya...");

        //Creating object of School Class
        School sobj = new School();

        //Call To Behaviours of Class
        sobj.Accept();

        iret = sobj.Fee();

        //Printing Fees According To Standard
        System.out.println("Your Fees is : "+iret);
    }
}