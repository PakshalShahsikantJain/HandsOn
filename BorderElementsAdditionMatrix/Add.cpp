/*
    Author : Pakshal Shashikant Jain
    Date : 26/08/2024
    Program : Write a program which accept matrix from user and return addition of Border
              elements.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraires
using namespace std;
#include<iostream>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//start of class
class Matrix 
{
    //characteristics of class
    private :  //Access specifier
        int **Arr;
        int iRow;
        int iCol;

    public : //Access specifier 
        Matrix(int **arr,int irow,int icol) //constructor of class
        {
            this->Arr = arr;
            this->iRow = irow;
            this->iCol = icol;
        }

    //Behaviour of class to add Border elements of the matrix 
    int AddBorder()
    {
        int i = 0;
        int j = 0;
        int isum = 0;

        //Logic to calulation addition
        for(i = 0;i < this->iRow;i++)
        {
            for(j = 0;j < this->iCol;j++)
            {
                if((i == 0)||(j == 0)||(i == (iRow - 1))||(j == (iCol - 1)))
                {
                    // printf("%d\t",arr[i][j]);
                    isum = isum + this->Arr[i][j];
                }
            }
        }

        return isum;
    }
};//End of class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Entry point function
int main() 
{
    int row = 0;
    int col = 0;
    int i = 0;
    int j = 0;
    int **Arr = NULL;
    int iret = 0;

    cout<<"Jay Ganesh....\n";

    //Taking input from the user 
    cout<<"Enter Number of Rows : ";   // << Insertion operator 
    cin>>row;   // >> Extraction operator
     
    cout<<"Enter Number of Cols : ";
    cin>>col;

    //Allocating memory to matrix
    Arr = (int **)malloc(row * sizeof(int **));

    for(i = 0;i < row;i++)
    {
        Arr[i] = (int *)malloc(col * sizeof(int));
    }

    //Inserting elements of matrix
    cout<<"Enter Elements into the matrix : \n";
    for(i = 0;i < row;i++)
    {
        printf("---Enter Elements of %d row : ---\n",(i + 1));
        for(j = 0;j < col;j++)
        {
            printf("Enter element no %d : ",(j + 1));
            scanf("%d",&Arr[i][j]);
        }
    }

    //Printing matrix
    cout<<"Elements of matrix are as follows : \n";
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            cout<<Arr[i][j]<<"\t";
        }
        cout<<"\n";
    }

    //Creating object of matrix class
    Matrix *mobj = new Matrix(Arr,row,col);

    //Call to behaviour of class
    iret = mobj->AddBorder();
    cout<<"Addition of Border elemets is : "<<iret<<"\n";

    //Deallocating memory of pointers
    free(Arr);
    free(mobj);

    return 0;
}