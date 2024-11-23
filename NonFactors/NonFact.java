/*
    Author : Pakshal Jain
    Date : 04/10/2022
    Program : To Print Nonfactors of Entered Number
*/

//Required Libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Find
{
    //Characteristics of Class
    int No = 0;

    //Constructor of Class
    Find(int no)
    {
        this.No = no;
    }
    //Behaviour of Class
    void nonfact()
    {
        int i = 0;

        System.out.println("Nonfactors of Entered Number is As Follows");

        for(i = 1;i < this.No;i++)
        {
            if(this.No % i != 0)
            {
                System.out.print(i+"\t");
            }
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class NonFact
{
    public static void main(String args[])
    {
        int No = 0;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Jay Ganesh....");
        
        System.out.println("Ente One Number");
        No = sobj.nextInt();
        //Creating object of Class
        Find fobj = new Find(No);
        //Calling Behaviour of Class
        fobj.nonfact();       
    }
}