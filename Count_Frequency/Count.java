/*
    Author : Pakshal Jain
    Date : 17/10/2022
    Program : To Count Frequency of Two in Entered Number
*/

//Requrired Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Frequency
{
    //Characteristics of Class
    int No = 0;
    int icnt = 0;

    //Constructor of Class
    Frequency(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    int count()
    {
        int Digit = 0;

        //Logic To Count Frequency of Two
        while(this.No != 0)
        {
            Digit = this.No % 10;
            if(Digit == 2)
            {
                this.icnt++;
            }
            this.No = this.No / 10;
        }

        return this.icnt;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Count
{
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        //Creating Object of Scanner Class To take input from user
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay ganesh....");

        //Taking Input From User
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating object of Frequency Class
        Frequecy fobj = new Frequency(No);
        //Calling Behaviour of Class
        iret = fobj.count();

        System.out.println("Frequency of Two In Entered Number is : "+iret);
    }
}