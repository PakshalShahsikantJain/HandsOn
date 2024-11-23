/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Radius From User and Calculate Area of Circle
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Calculate 
{
    //Characteristics of Class
    float No = 0.0f;
    
    //Constructor of Class
    Calculate(float no)
    {
        this.No = no;
    }
    //Behaviour of Class
    double CircleArea()
    {
        double area = 0.0f;

        area = 3.14 * this.No * this.No;

        return area;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Area
{
    public static void main(String args[])
    {
        float No = 0.0f;
        double fret = 0.0f;

        System.out.println("Jay Ganesh...");

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);
        
        //Taking Input From user
        System.out.println("Enter Radius of Circle...");
        No = sobj.nextFloat();

        //Creating object of Calculate Class 
        Calculate cobj = new Calculate(No);
        //Call To Behaviour of Class
        fret = cobj.CircleArea();

        System.out.println("Area of Circle of is : "+fret);
    }
}