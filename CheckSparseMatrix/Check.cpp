#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

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

    BOOL CheckSparse() 
    {
        int i = 0;
        int j = 0;
        int icnt = 0;
        int icnt2 = 0;

        for(i = 0;i < this->irow;i++)
        {
            for(j = 0;j < this->icol;j++)
            {
                if(this->arr[i][j] == 0)
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
            return TRUE;
        }
        else 
        {
            return FALSE;
        }
    }
};

int main() 
{
    int **arr = NULL;
    int irow = 0;
    int icol = 0;
    BOOL bret = FALSE;

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

    bret = mobj->CheckSparse();
    if(bret == TRUE)
    {
        cout<<"Entered matrix is sparse matrix\n";
    }
    else 
    {
        cout<<"Entered matrix is not a sparse matrix\n";
    }

    return 0;
}