/*
    Author : Pakshal Jain
    Date : 06/10/2022
    Program : To Calculate Differece Between Summation of Factors and Nonfactors of Entered Number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//Class Declaration
class Find
{
    //Characteristics of Class
    private int No = 0;

    //Constructor of Class
    Find(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    int factdiff()
    {
        int i = 0;
        int sum = 0;
        int sum2 = 0;
        int diff = 0;

        for(i = 1;i < this.No;i++)
        {
            if(this.No % i == 0)
            {
                sum = sum + i;
            }
            else if(this.No % i != 0)
            {
                sum2 = sum2 + i;
            }
        }

        diff = sum - sum2;

        return diff;
    }
}//End of Class

//Main Class
class Diff
{
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        System.out.println("Jay Ganesh...");
        
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating object of Find Class
        Find fobj = new Find(No);
        //Calling Behvaiour of Find Class
        iret = fobj.factdiff();

        System.out.println("Difference Between Summation of Nonfactors and factors of Entered Number is : "+iret);
    }
}