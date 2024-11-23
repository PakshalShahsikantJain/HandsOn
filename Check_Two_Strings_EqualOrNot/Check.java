/*
    Author : Pakshal Shashikant Jain 
    Date : 14/09/2023
    Program : Write a program which 2 strings from user and check whether
              contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Infosystems"
              Output : TRUE 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Required libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringCmp
{
    //Characteristics of Class
    String str = " ";
    String str2 = " ";
    char arr[];
    char brr[];

    //Constructor of Class
    StringCmp()
    {
        this.str = " ";
        this.str2 = " ";
        this.arr = null;
        this.brr = null;
    }

    //Behaviour of Class To Take input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.println("Enter First String : ");
        this.str = sobj.nextLine();
        
        System.out.println("Enter Second String : ");
        this.str2 = sobj.nextLine();

        //Allocating Memory To Array
        this.arr = new char[this.str.length()];
        this.brr = new char[this.str2.length()];

        //Creating Character Array of Entered String
        this.arr = this.str.toCharArray();
        this.brr = this.str2.toCharArray();
    }

    //Behaviour of Class To Comaper Two Strings
    boolean StrCmpX()
    {
        int i = 0;
        int j = 0;

        if((this.arr == null)&&(this.brr == null))
        {
            return false;
        }
        else if(this.arr.length != this.brr.length)
        {
            return false;
        }

        //Logic To Check Both Strings Equal Or Not
        while((i != this.arr.length - 1)&&(j != this.brr.length - 1))
        {
            if(this.arr[i] != this.brr[j])
            {
                break;
            }
            i++;
            j++;
        }

        if(this.arr[i] != this.brr[j])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}//End of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Check
{
    //Main Function
    public static void main(String args[])
    {
        boolean bret = false;
        System.out.println("Jay Ganesh....");

        //Creating object of StringCmp Class
        StringCmp sobj = new StringCmp();

        //Call To Behaviours of Class
        sobj.Accept();
        bret = sobj.StrCmpX();
        
        //Handeling Condition if bret is true
        if(bret == true)
        {
            System.out.println("Both Strings are Equal");
        }
        //Handleing Condition if bret is false
        else
        {
            System.out.println("Both Strings are Not Equal");
        }
    }
}