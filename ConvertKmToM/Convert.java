/*
    Author : Pakshal Jain
    Date : 29/10/2022
    Program : To Convert Entered Km into M
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Conversion
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Conversion(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    int KmToM()
    {
        int ans = 0;

        ans = this.No * 1000;

        return ans;
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Convert
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        System.out.println("Jay ganesh...");

        //Creating object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter Distance in Km");
        No = sobj.nextInt();

        //Creating Object of Conversion Class
        Conversion cobj = new Conversion(No);
        //Call To Behaviour of Class
        iret = cobj.KmToM();

        //Printing Converted KM into M
        System.out.println("Converted Km into M is : "+iret);
    }
}