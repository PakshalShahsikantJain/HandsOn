/*
    Author : Pakshal Shashikant Jain 
    Date : 07/09/2023
    Program : Write a program which accept one number from user and count number of
              ON (1) bits in it without using % and / operator.

              Input : 11
              Output : 3
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Bit
{
    //Characteristics of Class
    int iNo;
    
    //Constructor of Class
    Bit()
    {
        this.iNo = 0;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Clas To Take intput from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One Number");
        this.iNo = sobj.nextInt();
    }

    //Behaviour of Class To Count Number of ON Bits of Entered Number
    int CountOnBit()
    {
        int iMask = 0X00000001;
        int i = 0;
        int iResult = 0;
        int icnt = 0;

        //Logic To Count 
        for(i = 1;i <= 32;i++)
        {
            iMask = iMask << (i - 1);
            iResult = iMask & this.iNo;
            if(iMask == iResult)
            {
                icnt++;
            }
            iMask = 0X00000001;
            iResult = 0;
        }

        return icnt;
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
class Count 
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of Bit Class
        Bit bobj = new Bit();
        
        //Call TO Behaviours of Class
        bobj.Accept();
        iret = bobj.CountOnBit();

        //Printing Count of Bits ON
        System.out.println("Count of ON Bits of Entered Number is : "+iret);
    }
}