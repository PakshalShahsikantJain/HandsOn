/*
    Author : Pakshal Jain
    Date : 15/02/2022
    Program : To Convert Entered Money From Dollar To Inr
*/

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Conversion
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Conversion(int no)
    {
        //Handleing Condition if Entered Number is Less Than Zero
        if(no < 0)
        {
            no = -no;
        }
        this.No = no;
    }

    //Behaviour of Class
    int DollarToInr()
    {   
        int ans = 0;

        //logic to convert Money From Dollar To Inr
        ans = this.No * 70;

        return ans;
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Convert
{
    //Main Function
    public static void main(String args[])
    {
        int No = 0;
        int iret = 0;

        //Creating Object of Scanner Class To Take Input From user
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay ganesh...");

        //Taking Input From user
        System.out.println("Enter One Number");
        No = sobj.nextInt();

        //Creating object of Conversion Class
        Conversion cobj = new Conversion(No);
        //Call To Behaviour of Class
        iret = cobj.DollarToInr();  

        //Printing Obtained Ouput
        System.out.println("Converted Money From Dollar To Inr is : "+iret);
    }
}