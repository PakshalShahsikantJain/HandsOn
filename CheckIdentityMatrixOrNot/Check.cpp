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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
class Check
{
    private : //Access specifier of class
        //Characteristics of class
        int **arr;
        int irow;
        int icol;

    public : //Access specifier of class
        //Constructor of class
        Check(int **ARR,int iRow,int iCol)
        {
            this->arr = ARR;
            this->irow = iRow;
            this->icol = iCol;
        }
    
    //Behaviour of class
    BOOL CheckIdentity()
    {
        int i = 0;
        int j = 0;
        BOOL flag = TRUE;

        //Logic to check
        for(i = 0;i < this->irow;i++)
        {
            for(j = 0;j < this->icol;j++)
            {
                if(i == j)
                {
                    if(this->arr[i][j] != 1)
                    {
                        flag = FALSE;
                    }
                }
                else 
                {
                    if(arr[i][j] != 0)
                    {
                        flag = FALSE;
                    }
                }
            }
        }

        return flag;
    } 
};//End of class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main()
{
    int **arr  = NULL;
    int irow = 0;
    int icol = 0;
    int i = 0;
    int j = 0;
    BOOL bret = FALSE;

    cout<<"Jay Ganesh....\n";

    //Taking input from user 
    cout<<"Enter number of Rows : ";
    cin>>irow;

    cout<<"Enter number of cols : ";
    cin>>icol;

    //Allocating memory to matrix  
    arr = (int **)malloc(irow * sizeof(int*));
    for(i = 0;i < irow;i++)
    {
        arr[i] = (int *)malloc(icol * sizeof(int));
    }

    //Taking elements of matrix as input from user 
    cout<<"Enter elements in matrix : \n";
    for(i = 0;i < irow;i++)
    {   
        cout<<"---Enter element in row "<<i+1<<"---\n";
        for(j = 0;j < icol;j++)
        {
            cout<<"Enter element no "<<j+1<<" : ";
            cin>>arr[i][j];
        }
    }

    //Displaying elements of matrix
    cout<<"Element of matrix are : \n";
    for(i = 0;i < irow;i++)
    {   
        for(j = 0;j < icol;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }

    //Creating object of check class
    Check *cobj = new Check(arr,irow,icol);

    //Call to behaviour of class
    bret = cobj->CheckIdentity();

    if(bret == TRUE)
    {
        cout<<"Entered Matrix is Identity Matrix";
    }
    else 
    {
        cout<<"Entered Matrix is not an Identity Matrix";
    }

    //Deallocting memory of matrix
    for(i = 0;i < irow;i++)
    {
        free(arr[i]);
    }

    free(arr);
    free(cobj);

    return 0;
}