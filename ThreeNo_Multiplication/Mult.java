/*
    Auhtor : Pakshal Jain
    Date : 12/10/2022
    Program : To Calculate Multiplication of Entered Three number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Calculate
{
    //Characteristics of Class
    int No = 0;
    int No2 = 0;
    int No3 = 0;

    //Constructor of Class
    Calculate(int no,int no2,int no3)
    {
        this.No = no;
        this.No2 = no2;
        this.No3 = no3;
    }

    //Behaviour of Class
    int multiplication()
    {
        int ans = 0;
        
        //Logic
        //Handeling Condtion if Any of Entered Numbers is Zero
        if((this.No == 0)&&(this.No2 == 0))
        {
            ans = this.No3;
        }
        else if((this.No2 == 0)&&(this.No3 == 0))
        {
            ans = this.No;
        }
        else if((this.No == 0)&&(this.No3 == 0))
        {
            ans = this.No2;
        }
        else if(this.No == 0)
        {
            ans = this.No2 * this.No3;
        }
        else if(this.No2 == 0)
        {
            ans = this.No * this.No3;
        }
        else if(this.No3 == 0)
        {
            ans = this.No * this.No2;
        }
        //Handeling Condition if Entered Numbers are Not Zero
        else 
        {
            ans = this.No * this.No2 * this.No3;
        }

        return ans;
    } 
} //End of Class

//Main Class Declaration
class Mult 
{
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;
        int No3 = 0;
        int iret = 0;

        System.out.println("Jay Ganesh...");

        //Creating Object of Scanner Class To take input from User
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First number");
        No = sobj.nextInt();

        System.out.println("Enter Second Number");
        No2 = sobj.nextInt();

        System.out.println("Enter Third Number");
        No3 = sobj.nextInt();

        //Creating Object of Calcualte Class
        Calculate cobj = new Calculate(No,No2,No3);

        //Handeling Condition All Entered Numbers are Zero
        if((No == 0)&&(No2 == 0)&&(No3 == 0))
        {
            iret = No * No2 * No3;
        }
        else 
        {
            //Calling Behaviour of Class
            iret = cobj.multiplication();
        }

        //Printing Final Output
        System.out.println("Multiplication of Entered Three Numbers is : "+iret);
    }
}