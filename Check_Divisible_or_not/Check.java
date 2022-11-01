/*
    Auhtor : Pakshal Jain
    Date : 14/09/2022
    Program : To Check Whether Entered Number is Divisible By or Not
*/

//Required Imports
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Find
{
    int No = 0;

    public Find(int no)
    {
        this.No = no;
    }

    boolean check()
    {
        if(this.No % 5 == 0)
        {
            return true;
        } 
        else 
        {
            return false;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Check
{
    public static void main(String args[])
    {
        int No = 0;
        boolean bret = false;

        System.out.println("Ganapati Bappa Morya......");
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter One Number");
        No = sobj.nextInt();

        Find fobj = new Find(No);
        bret = fobj.check();

        if(bret == true)
        {
            System.out.println("Entered Number is Divisible By 5");
        }
        else 
        {
            System.out.println("Entered Number is Not Divisible By 5");
        }
    }
}