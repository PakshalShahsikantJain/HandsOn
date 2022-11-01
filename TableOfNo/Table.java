/*
    Author : Pakshal Jain 
    Date : 24/10/2022
    Program : To Display Table of Entered Number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Display
{
    //Charactristics of Class
    int No = 0;
    int No2 = 0;

    //Constructor of Class
    Display(int no,int no2)
    {
        this.No = no;
        this.No2 = no2;
    }
    //Behaviour of Class
    void DispTab()
    {
        int i = 0;
        int table = 0;

        System.out.println("Printing Table of Entered Number...");
        for(i = 1;i <= this.No2;i++)
        {
            table = this.No * i;
            System.out.print(table+"\t");
        }
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Table 
{
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;

        System.out.println("Jay Ganesh....");
        
        //Creating obect of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter One Number To Display Table of....");
        No = sobj.nextInt();

        System.out.println("Enter Number Till You Want To Display Table i.e eg 2 * ? ");
        No2 = sobj.nextInt();

        //Creating object of Display Class
        Display dobj = new Display(No,No2);
        //Call To Behaviour of Class
        dobj.DispTab();
    }
}