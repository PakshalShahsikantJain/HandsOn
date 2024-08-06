/*
    Author : Pakshal Shashikant Jain 
    Date : 5/08/2024
    Program : Write a program which accept matrix from user and display transpose of the
              matrix.

              The transpose of a given matrix is formed by interchanging the rows and
              columns of a matrix. 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Reqired libraries
using namespace std;
#include<iostream>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of class
class Matrix 
{
    private : //Access specifier of class
        //Characateristics of class
        int **arr;
        int irow;
        int icol;

    public : //Access specifier of class 
        Matrix()  //constructor of class
        {
            this->arr = NULL;
            this->irow = 0;
            this->icol = 0;
        }

    //Behaviour of class to take input from user 
    void Accept()
    {
        int i = 0;
        int j = 0;

        //Taking input from user 
        cout<<"Enter number of rows : ";
        cin>>this->irow;

        cout<<"Enter number of cols : ";
        cin>>this->icol;

        //Allocating memory to matrix 
        this->arr = (int **)malloc(this->irow * sizeof(int *));

        for(i = 0;i < this->irow;i++)
        {
            this->arr[i] = (int *)malloc(this->icol * sizeof(int));
        }

        //Inserting elements into the matrix 
        cout<<"Enter elements in the matrix : \n";
        for(i = 0;i < this->irow;i++)
        {
            cout<<"----Enter element in "<<i + 1<<" row : ----\n";
            for(j = 0;j < this->icol;j++)
            {
                cout<<"Enter element no "<<j+1<<" : ";
                cin>>this->arr[i][j];
            }
        }

        //Printing matrix 
        cout<<"Elements of matrix are : \n";
        for(i = 0;i < this->irow;i++)
        {
            for(j = 0;j < this->icol;j++)
            {
                cout<<this->arr[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }

    //Function to Display Transpose of the give matrix 
    void TransposeMatrix() 
    {
        int i = 0;
        int j = 0;

        //Printing transpose of the matrix 
        cout<<"Transpose of the matrix is as follows : \n";
        for(i = 0;i < this->irow;i++)
        {
            for(j = 0;j < this->icol;j++)
            {
                cout<<this->arr[j][i]<<"\t";
            }
            cout<<"\n";
        }

        //Dellocating memory of the matrix 
        for(i = 0;i < this->irow;i++)
        {
            free(this->arr[i]);
        }

        free(this->arr);
    }

    //Destructor of class
    ~Matrix()
    {
        cout<<"Inside Destructor : \n";
    }
};//End of class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function 
int main() 
{
    cout<<"Jay Ganesh....\n";

    //Creating object of matrix class
    Matrix *mobj = new Matrix();
    
    //Call to behaviour of class
    mobj->Accept();
    mobj->TransposeMatrix();

    //Deallocating memory of object
    free(mobj);

    return 0;
}