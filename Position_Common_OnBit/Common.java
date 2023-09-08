/*
    Author : Pakshal Shashikant Jain 
    Date : 08/09/2023
    Program : Write a program which accept two numbers from user and display position
              of common ON bits from that two numbers.
              Input : 10 15 (1010 1111)
              Output : 2 4
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
    int iNo2;
    
    //Constructor of Class
    Bit()
    {
        this.iNo = 0;
        this.iNo2 = 0;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Clas To Take intput from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One Number");
        this.iNo = sobj.nextInt();

        System.out.println("Enter One Number");
        this.iNo2 = sobj.nextInt();

    }

    //Behaviour of Class To Display Position
    void CommonBit()
    {
        int iResult = 0;
        int iPos = 0;
        int iRem = 0;

        iResult = this.iNo & this.iNo2;
        
        System.out.println("Positions of Common Bits are : ");
        iPos = 1;
        while(iResult != 0)
        {
            iRem = iResult % 2;
            if(iRem == 1)
            {
                System.out.print(iPos + "\t");
            }
            iPos++;
            iResult = iResult / 2;
        }
    }
}//End of Class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
class Common 
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of Bit Class
        Bit bobj = new Bit();
        
        //Call TO Behaviours of Class
        bobj.Accept();
        bobj.CommonBit();

    }
}