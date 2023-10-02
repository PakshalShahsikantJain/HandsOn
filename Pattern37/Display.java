/*
    Author : Pakshal Shashikant Jain
    Date : 02/10/2023
    Program : Write a program which accept string from user and print below
              pattern.

              Input : "Marvellous"
              Output : M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
                       M a r v e l l o u s
              
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A 
*/

////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Pattern
{
    //Characteristics of Class
    String str;
    char arr[];

    //Constructor of Class
    Pattern()
    {
        this.str = " ";
        this.arr = null;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {   
        //Creating object of Scanner Class To Take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();
    
        this.arr = new char[this.str.length()];
        this.arr = this.str.toCharArray();
    }
    
    //Behaviour of Class To Display Pattern
    void display()
    {
        int i = 0;
        int j = 0;

        if(this.str == null)
        {
            return;
        }

        //Logic To Print Given Pattern
        for(i = 0;i < this.arr.length;i++)
        {
            for(j = 0;j < this.arr.length;j++)
            {
                System.out.printf("%s\t",this.arr[j]);
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
        System.out.println("Jay Ganesh....");

        //Creating object Pattern Class
        Pattern pobj = new Pattern();

        //Call To Behaviours of Class
        pobj.Accept();
        pobj.display();
    }
}