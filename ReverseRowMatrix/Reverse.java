/*
    Author : Pakshal Shashikant Jain 
    Date : 7/08/2024
    Program : Write a program which accept matrix and reverse the contents of each row. 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import java.lang.*;
import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of class
class Matrix 
{
    //Characteristics of class
    int arr[][];
    int irow;
    int icol;

    //Constructor of class
    Matrix() 
    {
        this.arr = null;
        this.irow = 0;
        this.icol = 0;
    }

    //Behaviour of class to take input from user
    void Accept()
    {
        int i = 0;
        int j = 0;

        //Creating object of Scanner class to take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.print("Enter number of rows : ");
        this.irow = sobj.nextInt();

        System.out.print("Enter number of cols : ");
        this.icol = sobj.nextInt();

        //Allocating memory of matrix 
        this.arr = new int[this.irow][this.icol];

        //Inserting element into the matrix 
        System.out.println("Enter elements into the matrix : ");
        for(i = 0;i < this.irow;i++)
        {   
            System.out.printf("----Enter elements of %d row : ----\n",i + 1);
            for(j = 0;j < this.icol;j++)
            {
                System.out.printf("Enter element no %d : ",j + 1);
                this.arr[i][j] = sobj.nextInt();
            }
        }
    }

    //Behaviour of class to reverse contents of each row of the matrix 
    void ReverseRow()
    {
        int i = 0;
        int j = 0;

        //Logic to reverse contents of each row of the matrix
        for(i = 0;i < this.irow;i++)
        {   
            for(j = this.icol - 1;j > -1;j--)
            {
                System.out.printf("%d\t",this.arr[i][j]);
            }
            System.out.println();
        }
    }
}//End of class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Class
class Reverse
{
    //Main function
    public static void main(String args[])
    {
        System.out.println("Jay Ganesh....\n");

        //Creating object of matrix class    
        Matrix mobj = new Matrix();

        //call to behaviour of class
        mobj.Accept();
        mobj.ReverseRow();
    }
}