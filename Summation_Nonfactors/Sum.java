/*
    Author : Pakshal Jain
    Date : 05/10/2022
    Program : To Calculate Summation of Nonfactors of Entered Number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class NonFact 
{
    //Characteristics of Class
    int No = 0;
    
    //Constructor of Class
    public NonFact(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    int summation()
    {
        int i = 0;
        int ans = 0;

        //Logic
        for(i = 1;i < this.No;i++)
        {
            if(this.No % i != 0)
            {
                ans = ans + i;        
            }
        }

        return ans;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Sum
{
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Jay Ganesh....");
        
        System.out.println("Enter one Number");
        No = sobj.nextInt();

        //Creating object of Nonfact Class
        NonFact nobj = new NonFact(No);
        //Calling Behaviour of Class
        iret = nobj.summation();

        System.out.println("Summation of Nonfactors of Entered Number is : "+iret); 
    }    
}