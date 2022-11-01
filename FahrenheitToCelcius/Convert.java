/*
    Author : Pakshal Jain
    Date : 29/10/2022
    Program : To Convert Entered Temparature From Fahrenheit To Celcius
*/

//Reuired Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class FToC
{
    //Characteristics of Class
    float No = 0.0f;    

    //Constructor of Class
    FToC(float no)
    {
        this.No = no;
    }   
    //Behaviour of Class
    float convert()
    {
        float ans = 0.0f;

        ans = (this.No - 32) * 5 / 9;

        return ans;
    }
}//End of Class

//Main Class
class Convert
{
    //Main Function
    public static void main(String args[])
    {
        float No = 0.0f;
        float fret = 0.0f;

        //Creating object of Scanner class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh...");

        //Taking Input From User
        System.out.println("Enter Temperature in Fahrenheit..");
        No = sobj.nextFloat();

        //Creating object of FToC Class
        FToC fobj = new FToC(No);
        
        //Call To Behaviour of Class
        fret = fobj.convert();

        //Printing Converted Temperature
        System.out.println("Temperature Converted From Fahrenheit To Celcius is : "+fret);
    }
}