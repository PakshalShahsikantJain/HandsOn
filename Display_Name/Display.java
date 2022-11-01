/*
    Author : Pakshal Jain
    Date : 09/10/2022
    Program : To Take Input as His/Her Full Name From User and Print It 
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Display
{
    public static void main(String arsg[])
    {
        String str = " ";

        System.out.println("Jay Ganesh....");

        System.out.println("Enter Your Full Name");
        Scanner sobj = new Scanner(System.in);
        str = sobj.nextLine();

        System.out.println("Your Full Name is : "+str);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////