#include<iostream>
#include<math.h>
using namespace std;

class Matrix
{
    private : 
        int **arr;
        int irow;
        int icol;

    public :
        Matrix(int **Arr,int iRow,int iCol) 
        {
            this->arr = Arr;
            this->irow = iRow;
            this->icol = iCol;
        }

    int TraceOfMatrix() 
    {
        int i = 0;
        int j = 0;
        int isum = 0;
        
        for(i = 0;i < this->irow;i++)
        {
            for(j = 0;j < this->icol;j++)
            {
                if(i == j)
                {
                    isum = isum + this->arr[i][j];
                }
            }
        }

        return isum;
    }

    int NormalOfMatrix() 
    {
        int i = 0;
        int j = 0;
        int isum = 0;
        int Sqrt = 0;

        for(i = 0;i < this->irow;i++)
        {
            for(j = 0;j < this->icol;j++)
            {
                isum = isum + this->arr[i][j];
            }
        }

        Sqrt = sqrt(isum);

        return Sqrt;
    }
};

int main() 
{
    int **arr = NULL;
    int irow = 0;
    int icol = 0;
    int iret = 0;
    int i = 0;
    int j = 0;

    cout<<"Jay Ganesh....\n";

    cout<<"Enter number of rows : ";
    cin>>irow;

    cout<<"Enter number of cols : ";
    cin>>icol;

    arr = (int**)malloc(irow * sizeof(int**));
    for(i = 0;i < irow;i++)
    {
        arr[i] = (int *)malloc(icol * sizeof(int));
    }
    
    cout<<"Enter elements of matrix \n";
    for(i = 0;i < irow;i++)
    {
        printf("-----Enter elements of %d row-----\n",(i + 1));
        for(j = 0;j < icol;j++)
        {
            cout<<"Enter element no "<<j + 1<<" : ";
            cin>>arr[i][j];
        }
    }   

    cout<<"Elements of matrix are : \n";
    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }   

    Matrix *mobj = new Matrix(arr,irow,icol);

    iret = mobj->TraceOfMatrix();
    cout<<"Trace of matrix is : "<<iret<<"\n";

    iret = mobj->NormalOfMatrix();
    cout<<"Normal of matrix is approx : "<<iret<<"\n";

    sfor(i = 0;i < irow;i++)
    {
        free(arr[i]);
    }
    
    free(arr);

    return 0;
}