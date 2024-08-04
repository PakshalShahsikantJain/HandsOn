/*
    Author : Pakshal Shashikant Jain
    Date : 04/08/2024
    Program : Write a program which accept matrix and return largest number from both the
              diagonals 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
import java.lang.*;
import java.util.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of class
class Matrix 
{
    //Characteristics of class
    int Arr[][];
    int iRow;
    int iCol;

    //constructor of class
    Matrix(int arr[][],int irow,int icol) 
    {
        this.Arr = arr;
        this.iRow = irow;
        this.iCol = icol;
    }

    //Beahviour of class to find largest no from both diagonals of matrix
    int MaxDiagonal() throws ArrayIndexOutOfBoundsException
    {
        int imax = 0;
        int i = 0;
        int j = 0;
        
        //Logic to calculate find largest no
        for(i = 0;i < this.iRow;i++)
        {
            for(j = 0;j < this.iCol;j++)
            {
                if((i == j)||((i + j) == (this.iCol - 1))) 
                {
                    if(this.Arr[i][j] > imax)
                    {
                        imax = this.Arr[i][j];
                    }
                }
            }
        }

        return imax;
    }
}//End of class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main class
class Find
{
    //Entry point function
    public static void main(String args[])
    {
        int arr[][] = null;
        int iRow = 0;
        int iCol = 0;
        int i = 0;
        int j = 0;
        int iret = 0;

        System.out.println("Jay Ganesh....");

        //Creating object of scanner class to take input from user
        Scanner sobj = new Scanner(System.in);

        //Taking input from user 
        System.out.print("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.print("Enter number of columns : ");
        iCol = sobj.nextInt();

        //Allocating memory to matrix
        arr = new int[iRow][iCol];

        //Inserting elements into the matrix 
        System.out.println("Enter Elements of the matrix : ");
        for(i = 0;i < iRow;i++)
        {
            System.out.printf("Enter elements of %d row : \n",(i + 1));
            for(j = 0;j < iCol;j++)
            {
                System.out.printf("Enter %d element : ",(j + 1));
                arr[i][j] = sobj.nextInt();
            }
        }

        //Printing element of the matrix
        System.out.println("Elements of matrix are : ");
        for(i = 0;i < iRow;i++)
        {
            for(j = 0;j < iCol;j++)
            {
                System.out.printf("%d\t",arr[i][j]);
            }

            System.out.println();
        }

        //Creating object of  Matrix class
        Matrix mobj = new Matrix(arr,iRow,iCol);

        try 
        {
            //call to beahviour of class
            iret = mobj.MaxDiagonal();

            //Printing addition of matrix
            System.out.printf("Largest no from both the diagonal of matrix is : %d\n",iret);
        }
        catch (Exception e)
        {
            System.out.println("An exception occures while performing operations"+e);
        }
    }
}