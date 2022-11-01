/*
    Author : Pakshal Jain
    Date : 22/10/2022
    Program : To Convert Single Digit Entered Number into Word
*/
import java.lang.*;
import java.util.*;

//Class Declaration
class Display
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Display(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    void conv()
    {   
        //Handeling Condition if Entered Number is Zero
        if(this.No < 0)
        {
            this.No = -this.No;
        }
        //Logic To Convert Number into Word
        switch(this.No)
        {
            case 0 :
                System.out.print("Zero");
                break;
            case 1 :
                System.out.print("One");
                break;
            case 2 :
                System.out.print("Two");
                break;
            case 3 :
                System.out.print("Three");
                break;
            case 4 :
                System.out.print("Four");
                break;
            case 5 :
                System.out.print("Five");
                break;
            case 6 :
                System.out.print("Six");
                break;
            case 7 :
                System.out.print("Seven");
                break;
            case 8 :
                System.out.print("Eight");
                break;
            case 9 :
                System.out.print("Nine");
                break;
            default :
                System.out.print("Invalid Number");
                break;
        }
    }
}

//Main Class
class Convert
{
    public static void main(String args[])
    {
        int No = 0;

        System.out.println("Jay Ganesh...");
        //Creating Object of Scanner Class To Take Input From User
        Scanner sobj = new Scanner(System.in);

        //Taking Input From User
        System.out.println("Enter One Number");
        No = sobj.nextInt();
        
        //Creating object of Display Class
        Display dobj = new Display(No);
        
        //Call To Behaviour of Class
        dobj.conv();
    }
}