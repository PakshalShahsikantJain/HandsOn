/*
    Author : Pakshal Jain
    Date : 24/09/2022
    Program : To Convert Case of Entered Character....
*/

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Convert
{
    //Characterstics of Class
    char ch = ' ';

    //Constructor of Class
    Convert(char Ch)
    {
        this.ch = Ch;
    }

    //Behaviout of Class
    char conv()
    {
        int cret = 0;

        //Logic To Convert Case of Character
        if((this.ch >= 'A')&&(this.ch <= 'Z'))
        {
            cret = (int)this.ch + 32;
        }
        else if((this.ch >= 'a')&&(this.ch <= 'z'))
        {
            cret = (int)this.ch - 32;
        }

        return (char)cret;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Conv
{
    public static void main(String args[])
    {
        char ch = ' ';
        char cret = ' ';

        Scanner sobj = new Scanner(System.in);
        System.out.println("Jay Ganesh.....");
        
        System.out.println("Enter One Character..");
        ch = sobj.next().charAt(0);

        System.out.println("Entered Character is : "+ch);
        //Creating object of Class
        Convert cobj = new Convert(ch);
        //Calling Behaviour of Class
        cret = cobj.conv();

        System.out.println("Converted Character is : "+cret);                                                                                                                                                                                                  
    }
}
