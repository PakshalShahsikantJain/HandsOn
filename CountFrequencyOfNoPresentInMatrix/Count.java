/*
    Author : Pakshal Shashikant Jain 
    Date : 03/08/2024
    Program : Write a program which accept matrix and one number from user and return
              frequency of that number. 
*/

//Required libraries
import java.lang.*;
import java.util.*;

//Start of class
class Matrix 
{
    //Characteristics of class
    int Arr[][];
    int iRow;
    int iCol;
    int ino;

    //Constructor of class
    Matrix()    
    {
        this.Arr = null;
        this.iRow = 0;
        this.iCol = 0;
        this.ino = 0;
    }

    //Behaviour of class to insert elements in matrix 
    void Accept() 
    {
        int i = 0;
        int j = 0;
        int ino = 0;

        //Creating object of Scanner class to take inputm from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user
        System.out.print("Enter number of rows : ");
        this.iRow = sobj.nextInt();

        System.out.print("Enter number of cols : ");
        this.iCol = sobj.nextInt();

        System.out.print("Enter number to count frequency of : ");
        this.ino = sobj.nextInt();

        //allocating memory to matrix
        this.Arr = new int[this.iRow][this.iCol];

        //Inserting elements in matrix
        System.out.println("Enter elements in array : ");
        for(i = 0;i < this.iRow;i++)
        {
            System.out.printf("Enter  elements in %d row \n",(i + 1));
            for(j = 0;j < this.iCol;j++)
            {
                System.out.printf("Enter element no %d : ",(j + 1));
                this.Arr[i][j] = sobj.nextInt();
            }
        }

        //Printing elements of matrix
        System.out.println("Elements of Matrix are : ");
        for(i = 0;i < this.iRow;i++)
        {
            for(j = 0;j < this.iCol;j++)
            {
                System.out.printf("%d\t",this.Arr[i][j]);
            }
            System.out.println();
        }
    }

    //Behaviour of class to count frequecy of enterd elements
    int CountFrequency() 
    {
        int i = 0;
        int j = 0;
        int icnt = 0;

        for(i = 0;i < this.iRow;i++)
        {
            for(j = 0;j < this.iCol;j++)
            {
                if(this.Arr[i][j] == this.ino)
                {
                    icnt++;
                }
            }
        }

        return icnt;
    }
}

//Main class
class Count
{
    //Main function
    public static void main(String args[])
    {
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of matrix class
        Matrix mobj = new Matrix();

        //Call to behaviour of class
        mobj.Accept();
        iret = mobj.CountFrequency();

        //Printing frequecny of entered number
        System.out.printf("Frequeny of entered number is : %d\n",iret);
    }
}