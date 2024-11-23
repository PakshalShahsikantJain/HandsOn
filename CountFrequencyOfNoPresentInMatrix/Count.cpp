/*
    Author : Pakshal Shashikant Jain 
    Date : 03/08/2024
    Program : Write a program which accept matrix and one number from user and return
              frequency of that number. 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
#include<iostream>
#include<stdlib.h>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Start of class
class Matrix 
{
    private : //Access specifier of class
        //Characteristics of class
        int **arr;   
        int irow;
        int icol;
        int ino;

    public : //Access specifier of class
        //Constructor of class
        Matrix() 
        {
            this->arr = NULL;
            this->irow = 0;
            this->icol = 0;
            this->ino = 0;
        }

    //Behaviour of class to accept input from user 
    Accept()
    {
        int i = 0;
        int j = 0;

        //Taking input from user
        printf("Enter Number of Rows : ");
        scanf("%d",&this->irow);

        printf("Enter number of Cols : ");
        scanf("%d",&this->icol);

        //Dynamic memory allocation of matrix 
        this->arr = (int **)malloc(this->irow * sizeof(int *));

        for(i = 0;i < this->irow;i++)
        {
            this->arr[i] = (int *)malloc(icol * sizeof(int));
        }

        //Inserting elements in matrix
        cout<<"Enter element into the matrix : \n";
        for(i = 0;i < this->irow;i++)
        {
            printf("Enter elements in row : %d\n",(i + 1));
            for(j = 0;j < this->icol;j++)
            {
                //Taking input from user
                printf("Enter element no %d : ",(j + 1));
                scanf("%d",&this->arr[i][j]);
            }
        }

        //Taking input from user
        printf("Enter One number you want to count frequency of : ");
        scanf("%d",&this->ino);

        //Printing elements of matrix 
        cout<<"Elements of matrix are : \n";
        for(i = 0;i < this->irow;i++)
        {
            for(j = 0;j < this->icol;j++)
            {
                printf("%d\t",this->arr[i][j]);
            }
            printf("\n");
        }
    }

    //Behaviour of class to Count frequency of matrix
    int CountNoMatrix() 
    {
        int i = 0;
        int j = 0;
        int icnt = 0;

        //Logic to count 
        for(i = 0;i < this->irow;i++)
        {
            for(j = 0;j < this->icol;j++)
            {
                if(this->arr[i][j] == this->ino)
                {
                    icnt++;
                }
            }
        }

        cout<<"Frequecny of Enter no is "<<icnt<<"\n";
    }

    //Desctructor of class
    ~Matrix() 
    {
        cout<<"Inside Destructor"<<endl<<endl;
    }
};//End of class

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function 
int main() 
{
    int iret = 0;

    cout<<"Jay Ganesh....\n";

    //Creating object of Matrix class
    Matrix *mobj = new Matrix();
    
    //Call to Behaviours of class
    mobj->Accept();
    mobj->CountNoMatrix();

    //Deallocting memory of object
    free(mobj);

    return 0;
}