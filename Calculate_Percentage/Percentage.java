/*
    Author : Pakshal Jain
    Date : 15/10/2022
    Program : To Calulate Precentage of Given Marks
*/

//Require Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Calculate
{
    //Characteristics of Class
    int No = 0;
    float No2 = 0.0f;

    //Constructor of Class
    Calculate(int no,float no2)
    {
        this.No = no;
        this.No2 = no2;
    }

    //Behaviour of Class
    float Find()
    {
        //logic to calculate Percentage
        float ans = 0.0f;

        ans = this.No2 / this.No * 100;

        return ans;
    }
}

//Main Class
class Percentage 
{
    public static void main(String args[])
    {
        int No = 0;
        float No2 = 0.0f;
        float fret = 0.0f;

        //Creating object of Scanner Class To take input
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh....");

        System.out.println("Enter Total Marks");
        No = sobj.nextInt();

        System.out.println("Enter Obtained Marks");
        No2 = sobj.nextFloat();

        //Creating object of Calculate Class
        Calculate cobj = new Calculate(No,No2);

        //Calling Behaviour of Find Class
        fret = cobj.Find();

        //Printing Final output
        System.out.println("Percentage is : "+fret+"%");
    }
}