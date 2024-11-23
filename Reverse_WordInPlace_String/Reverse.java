/*
    Author : Pakshal Shashikant Jain
    Date : 26/09/2023
    Program : Write a program which accept string from user and reverse each
              word in place.
              
              Input : "Marvellous Multi OS
              Output : "suollevraM itluM SO" 
*/

///////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class StringRev
{
    //Characteristics of Class
    String str;
    char arr[];

    //Constructor of Class
    StringRev()
    {
        this.str = " ";
        this.arr = null;
    }

    //Behaviour of Class To Take Input from user
    void Accept()
    {
        //Creating object of Scanner Class To Take Input from user
        Scanner sobj = new Scanner(System.in);
        this.str = sobj.nextLine();

        this.arr = new char[this.str.length() + 1];

        this.arr = this.str.toCharArray();
    }

    //Behaviour of Class To Reverse Words of Entered Stroing
    void StrWrdRev()
    {
        int first = 0;
        int last = 0;
        int i = 0;
        int j = 0;
        char temp = ' ';

        //Logic To Reverse
        while(last != this.arr.length)
        {
            if(this.arr[last] == ' ')
            {
                while((this.arr[last] == ' ')&&(last != this.arr.length))
                {
                    last++;
                }
                last--;
            }   
            else
            {   
                first = last;
                while((this.arr[last] != ' ')&&(last != this.arr.length - 1))
                {
                    last++;
                }
                
                if(this.arr[last] == ' ')
                {
                    last--;
                }
                
                i = first;
                j = last;
                
                while(i <= j)
                {
                    temp = this.arr[i];
                    this.arr[i] = this.arr[j];
                    this.arr[j] = temp;

                    i++;
                    j--;
                }
            }
            last++;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Reverse
{
    //Main Function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....");

        //Creating object of StringRev Class   
        StringRev sobj = new StringRev();

        //Call To Behaviours of Class
        sobj.Accept();
        sobj.StrWrdRev();

        System.out.print(sobj.arr);
    }
}