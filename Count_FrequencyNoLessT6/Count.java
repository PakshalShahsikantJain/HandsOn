/*
    Auhtor : Pakshal Jain
    Date : 18/10/2022
    Program : To Count Frequecy of Digits Which is Less Than 6
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////

//Class Declaration 
class Frequency
{
    //Characteristics of Class
    int No = 0;
    
    //Constructor of Class
    Frequency(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    int count()
    {
        int Digit = 0;
        int icnt = 0;

        //Logic To Count
        while(No != 0)
        {
            Digit = this.No % 10;
            if(Digit < 6)
            {
                icnt++;
            }    
            this.No = this.No / 10;
        }

        return icnt;
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Count
{
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        System.out.println("Jay Ganesh....");
        //Creating object of Scanner Class To Take input
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating Object of Frequency Class
        Frequency fobj = new Frequency(No);
        //Calling Behaviour of Class
        iret = fobj.count();

        System.out.println("Frequency of Digits Less Than 6 is "+iret);
    }
}