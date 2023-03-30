/*
    Author : Pakshal Shashikant Jain 
    Date : 26/03/2023
    Program : To Print Below Given Pattern 
    
    Input : iRow = 4 iCol = 4
    Output : * * * *
             * * * #
             * * # #
             * # # # 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern 
{
    //Characteristics of Class
    int No = 0;
    int No2 = 0;

    //Constructor of Class
    Pattern()
    {
        this.No = 0;
        this.No2 = 0;
    }

    //Behaviour of Class
    void Accept()
    {
        //Creating object of Scanner Class To Take input From User
        Scanner sobj = new Scanner(System.in);
        
        //Taking Input From User
        System.out.println("Enter Number of Rows You Want..");
        this.No = sobj.nextInt();

        System.out.println("Enter Number of Columns You Want..");
        this.No2 = sobj.nextInt();
    }

    //Behaviour of Class
    void display()
    {
        int i = 0;
        int j = 0;

        //Logic To Print Pattern 
        System.out.println("Priting Below Given Pattern : ");
        for(i = 1;i <= this.No;i++)
        {
            for(j = this.No2;j > 0;j--)
            {
                if((i == j)||(i < j))
                {
                    System.out.printf("*\t");
                }
                else 
                {
                    System.out.printf("#\t");
                }
            }
            System.out.println();
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Display
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Ganapati Bappa Morya.....");

        //Creating object of pattern Class
        Pattern pobj = new Pattern();

        //Call To Behaviour of Class
        pobj.Accept();
        pobj.display();

        //Deallocating Memory of Object
        pobj = null;
    }
}