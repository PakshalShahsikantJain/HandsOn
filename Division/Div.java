/*
    Author : Pakshal Jain 
    Date : 04/09/2022
    Program : To Calculate Division of Two Numbers
*/

//Required imports
import java.lang.*;
import java.util.*;

class Division 
{
    //Characteristics
    int No = 0;
    int No2 = 0;

    //Parameterised Constructor
    Division(int value,int value2)
    {
        this.No = value;
        this.No2 = value2;
    }

    //Behaviour
    int div()
    {
        int ans = 0;

        if(No2 == 0)
        {
            System.out.println("Error : Please Enter Number Greater Than Zero");
            return 0;
        }
        else if(No2 < 0)
        {
            No2 = -No2;
        }

        ans = this.No / this.No2;

        return ans;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

class Div 
{
    public static void main(String args[])
    {
        int No = 0;
        int No2 = 0;
        int ret = 0;

        System.out.println("Jay Ganesh....");

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter First Number....");
        No = sobj.nextInt();

        System.out.println("Enter Second Number.....");
        No2 = sobj.nextInt();

        Division dobj = new Division(No,No2);
        ret = dobj.div();

        System.out.println("Division is : "+ret);
    }
}