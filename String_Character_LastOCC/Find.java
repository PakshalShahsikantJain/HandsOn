/*
    Author : Pakshal Shashikant Jain 
    Date : 20/08/2023
    Program : Write a program which accept string from user and accept one
              character. Return index of first occurrence of that character.
              Input : "Marvellous Multi OS"
                      'M'
              Output : 11
              
              Input : "Marvellous Multi OS"
                      'W'
              Output : -1

              Input : "Marvellous Multi OS"
                      'e'
              Output : 4  
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class FindLast
{
    //Characteristics of Class
    char arr[];
    char ch;
    String str;

    //Constructor of Class
    FindLast()
    {
        this.arr = null;
        this.ch = ' ';
        this.str = " ";
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input
        Scanner sobj = new Scanner(System.in);

        //Taking String Input from user
        System.out.println("Enter One String");
        this.str = sobj.nextLine();

        //Taking Character Input from user
        System.out.println("Enter One Character");
        this.ch = sobj.next().charAt(0);

        this.arr = new char[this.str.length()];

        this.arr = this.str.toCharArray();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Function To Find LastOccurance
    int LastOcc()
    {
        int i = 0;
        int ipos = -1;
        
        if(this.arr == null)
        {
            return -1;
        }

        //Logic To Find Last Occurance
        while(i != this.arr.length - 1)
        {
            if(this.arr[i] == this.ch)
            {
                ipos = i;
            }
            i++;
        }

        return ipos;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Find
{
    //Main Function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of FindLast Class
        FindLast fobj = new FindLast();

        //Call To Behaviour of Class
        fobj.Accept();
        iret = fobj.LastOcc();

        //Printing Last Occurance of Entered Character Found 
        System.out.printf("Last Occurance of Character %c is at index number %d",fobj.ch,iret);
    }
}