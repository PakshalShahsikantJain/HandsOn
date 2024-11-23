/*
    Author : Pakshal Jain
    Date : 30/10/2022
    Program : To Convert Entered SqFt To SqM
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////

//Class Declaration
class SqftToSqM
{
    //Characterstics of Class
    float Value = 0.0f;

    //Constructor of Class
    SqftToSqM(float value)
    {
        this.Value = value;
    }

    //Behaviour of Class
    double convert()
    {
        double ans = 0.0f;

        ans = this.Value * 0.0929;

        return ans;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Convert
{
    public static void main(String args[])
    {
        float No = 0;
        double dret = 0.0f;

        //Cretaing Object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh...");

        System.out.println("Enter Square Feet To Convert in meter...");
        
        No = sobj.nextFloat();

        //Creating object of Sqft Class To
        SqftToSqM obj = new SqftToSqM(No);
        
        //Call to behaviour of class
        dret = obj.convert();

        System.out.println("Sqft Converted To SqM is : "+dret);
    }
}