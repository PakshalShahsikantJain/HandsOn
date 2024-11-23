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

    int TraceOfMatrix()
    {
        int i = 0;
        int j = 0;
        int isum = 0;

        for(i = 0;i < this.irow;i++)
        {
            for(j = 0;j < this.icol;j++)
            {
                if(i == j)
                {
                    isum = isum + this.arr[i][j];
                }
            }
        }

        return isum;
    }

    double NormalOfMatrix() 
    {
        int i = 0;
        int j = 0;
        double isum = 0;
        double Sqrt = 0;

        for(i = 0;i < this.irow;i++)
        {
            for(j = 0;j < this.icol;j++)
            {
                isum = isum + this.arr[i][j];
            }
        }

        Sqrt = Math.sqrt(isum);

        return Sqrt; 
    }
}

class Find 
{
    public static void main(String args[])
    {
        int arr[][] = null;
        int irow = 0;
        int icol = 0;
        int i = 0;
        int j = 0;
        int iret = 0;
        double iret2 = 0;

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

        System.out.println("Elements of matrix are ");
        for(i = 0;i < irow;i++)
        {
            for(j = 0;j < icol;j++)
            {
                System.out.printf("%d\t",arr[i][j]);
            }
            System.out.println();
        }

        Matrix mobj = new Matrix(arr,irow,icol);
        
        iret = mobj.TraceOfMatrix();
        System.out.printf("Transpose of matrix is : %d\n",iret);

        iret2 = mobj.NormalOfMatrix();
        System.out.printf("Normal of matrix is : %.4f",iret2);
    }
}