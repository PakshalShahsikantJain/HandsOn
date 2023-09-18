/*
    Author : Pakshal Shashikant Jain
    Date : 15/09/2023
    Program : Write a program which 2 strings from user and check whether first
              N contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Logic Building"
                      10
              Output : TRUE
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringCmp
{
    //Characteristics of Class
    char arr[];
    char brr[];
    String str;
    String str2;
    int icnt;

    //Constructor of Class
    StringCmp()
    {
        this.arr = null;
        this.brr = null;
        this.str = " ";
        this.str2 = " ";
        this.icnt = 0;
    }

    //Behaviour of Class TO Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter First String");
        this.str = sobj.nextLine();

        System.out.println("Enter Second String");
        this.str2 = sobj.nextLine();

        System.out.println("Enter One size");
        this.icnt = sobj.nextInt();

        this.arr = new char[this.str.length()];
        this.brr = new char[this.str2.length()];

        this.arr = this.str.toCharArray();
        this.brr = this.str2.toCharArray();
    }

    //Behaviour of class To Compare
    boolean StrNCmpX()
    {
        int i = 0;
        int j = 0;

        if((this.arr == null)&&(this.brr == null))
        {
            return false;
        }        

        //Logic To Compare
        while(((i != this.arr.length)&&(j != this.brr.length))&&(icnt != 0))
        {
            if(this.arr[i] != this.brr[j])
            {
                break;
            }
            i++;
            j++;
            icnt--;
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

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Compare
{
    //Main Function
    public static void main(String args[])
    {
        boolean bret = false;

        System.out.println("Jay ganesh....");

        //Creating object of StringCmp Class
        StringCmp sobj = new StringCmp();

        //Call To Behaviours of Class
        sobj.Accept();
        bret = sobj.StrNCmpX();

        //Handeling Conditions According To Output
        if(bret == true)
        {
            System.out.println("First N Contents Of Both String are Equal");
        }
        else
        {
            System.out.println("First N Contents Of Both String are Not Equal");
        }
    }
}