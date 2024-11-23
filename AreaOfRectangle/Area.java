/*
    Author : Pakshal Jain
    Date : 28/10/2022
    Program : To Accept Height and Width from user and Calculate Area of Rectangle
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Calculate
{
    //Characteristics of Class
    float Height = 0.0f;
    float Width = 0.0f;

    //Constructor of Class
    Calculate(float value,float value2)
    {
        this.Height = value;
        this.Width = value2;
    }

    //Behaviour of Class
    float RectangleArea()
    {
        float area = 0.0f;
        
        area = this.Height * this.Width;

        return area;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Area
{
    //Main Function
    public static void main(String args[])
    {
        float Height = 0.0f;
        float Width = 0.0f;
        float fret = 0.0f;

        System.out.println("Jay Ganesh....");

        //Creating object of SCanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Height of Rectangle...");
        Height = sobj.nextFloat();

        System.out.println("Enter Width of Rectangle...");
        Width = sobj.nextFloat();

        //Creating object of Calculate Class
        Calculate cobj = new Calculate(Height,Width);
        //Call To Behaviour of Class
        fret = cobj.RectangleArea();

        //Printing Area of Rectangle
        System.out.println("Area of Rectangle is : "+fret);
    }
}