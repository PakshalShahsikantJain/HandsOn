/*
    Author : Pakshal Shashikant Jain 
    Date : 7/08/2024
    Program : Write a program which accept matrix and reverse the contents of each row. 
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

    //Function to reverse contents of each row of the give matrix 
    void ReverseRow() 
    {
        int i = 0;
        int j = 0;

        //Logic to reverse contents of each row of the matrix
        cout<<"Updated matrix is as follows : \n";
        for(i = 0;i < this->irow;i++)
        {
            for(j = this->icol - 1;j > -1;j--)
            {
                cout<<this->arr[i][j]<<"\t";
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
    mobj->ReverseRow();

    //Deallocating memory of object
    free(mobj);

    return 0;
}