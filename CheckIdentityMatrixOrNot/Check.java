/*
    Author : Pakshal Shashikant Jain 
    Date : 07/08/2024
    Program : Write a program which accept matrix and check whether the matrix is
              identity matrix or not.

              Identity matrix is a square matrix with 1’s along the diagonal from upper left to
              lower right and 0’s in all other positions.
              If it satisfies the structure as explained before then the matrix is called as
              identity matrix. 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Matrix 
{
    //Characteristics of class
    int arr[][];
    int irow;
    int icol;

    //Constructor of class
    Matrix(int Arr[][],int iRow,int iCol) 
    {
        this.arr = Arr;
        this.irow = iRow;
        this.icol = iCol;
    }

    //Behaviour of class to check entered matrix is identity matrix or not
    boolean CheckIdentity()
    {
        int i = 0;
        int j = 0;
        boolean flag = true;

        //Logic to check
        for(i = 0;i < this.irow;i++)
        {
            for(j = 0;j < this.icol;j++)
            {
                if(i == j)
                {
                    if(arr[i][j] != 1)
                    {
                        flag = false;
                    }
                }
                else 
                {
                    if(arr[i][j] != 0)
                    {
                        flag = false;
                    }
                }
            }
        }

        return flag;
    }
}//End of class

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main class
class Check
{
    //Main function
    public static void main(String args[])
    {
        int arr[][] = null;
        int irow = 0;
        int icol = 0;
        int i = 0;
        int j = 0;
        boolean bret = false;

        //Creating object of Scanner class to take input from user
        Scanner sobj = new Scanner(System.in);

        System.out.println("Jay Ganesh.....");
        
        //Taking input from user
        System.out.println("Enter number of rows : ");
        irow = sobj.nextInt();

        System.out.println("Enter number of cols : ");
        icol = sobj.nextInt();

        //Allocating memory for matrix
        arr = new int[irow][icol];

        //Inserting element in matrix
        for(i = 0;i < irow;i++)
        {
            System.out.printf("Enter element in %d row\n",i + 1);
            for(j = 0;j < icol;j++)
            {
                System.out.printf("Enter element no %d : ",j + 1);
                arr[i][j] = sobj.nextInt();
            }
        }

        //Displaying entered matrix
        System.out.println("Element of matrix are : ");
        for(i = 0;i < irow;i++)
        {
            for(j = 0;j < icol;j++)
            {
                System.out.printf("%d\t",arr[i][j]);
            }
            System.out.println();
        }

        //Creating object of matrix class
        Matrix mobj = new Matrix(arr,irow,icol);

        //call to behaviour of class
        bret = mobj.CheckIdentity();

        if(bret == true)
        {
            System.out.println("Entered matrix is identity matrix");
        }
        else 
        {
            System.out.println("Entered matrix is not an identity matrix");
        }
    }
}