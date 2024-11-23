import java.lang.*;
import java.util.*;

class Matrix 
{
    int arr[][];
    int irow;
    int icol;

    Matrix(int Arr[][],int iRow,int iCol) 
    {
        this.arr = Arr;
        this.irow = iRow;
        this.icol = iCol;
    }

    boolean CheckMatrix()
    {
        int i = 0;
        int j = 0;
        int icnt = 0;
        int icnt2 = 0;

        for(i = 0;i < this.irow;i++)
        {
            for(j = 0;j < this.icol;j++)
            {
                if(this.arr[i][j] == 0)
                {
                    icnt++;
                }
                else 
                {
                    icnt2++;
                }
            }
        }

        if(icnt > icnt2)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}

class Check 
{
    public static void main(String args[])
    {
        int arr[][] = null;
        int irow = 0;
        int icol = 0;
        int i = 0;
        int j = 0;
        boolean bret = false;

        System.out.println("Jay Ganesah....");
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        irow = sobj.nextInt();

        System.out.println("Enter number of cols : ");
        icol = sobj.nextInt();

        arr = new int[irow][icol];

        System.out.println("Enter elements in matrix");
        for(i = 0;i < irow;i++)
        {
            System.out.printf("----Enter elements of %d row----\n",i + 1);
            for(j = 0;j < icol;j++)
            {
                System.out.printf("Enter element no %d : ",j + 1);
                arr[i][j] = sobj.nextInt();
            }
        }

        Matrix mobj = new Matrix(arr,irow,icol);
        bret = mobj.CheckMatrix();

        if(bret == true)
        {
            System.out.println("Entered matrix is sparse matrix");
        }
        else 
        {
            System.out.println("Entered matrix is not a sparse matrix");
        }
    }
}