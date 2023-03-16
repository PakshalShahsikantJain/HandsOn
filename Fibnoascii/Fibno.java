/*
    Author : Pakshal Shashikant Jain 
    Date : 16/03/2023
    Program : To Print Fibnoasii Series 
*/

//Required libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Series
{
    //Characteristics of Class
    int No = 0;
    
    //Constructor of Class
    Series(int no)
    {
        this.No = no;
    }

    //Behaviour of Class
    void Display()  
    {
        int i = 0;
        int Sum = 0;
        int no = 0;
        int no2 = 1;    

        //Logic To Print Fibnoascii Series
        System.out.println("Printing Fibnoascii Series : ");
        System.out.printf("%d\t",no);
        System.out.printf("%d\t",no2);

        for(i = 0;i < this.No;i++)
        {
            Sum = no + no2;
            System.out.printf("%d\t",Sum);
            no = no2;
            no2 = Sum;
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main class
class Fibno
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;

        //Creating Object of Scnner class To Take Input From user
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh....");

        //Taking input From User
        System.out.println("Enter Number Till You Want Fibnoascii Series");
        No = sobj.nextInt();

        //Creating object of Series Class
        Series obj = new Series(No);

        //Call To Behaviour of Class
        obj.Display();
    }
}