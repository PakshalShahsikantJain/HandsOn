/*
    Author : Pakshal Shashikant Jain
    Date : 04/08/2024
    Program : Write a program which accept matrix and return largest number from both the
              diagonals 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to find largest number from both diagonal of matrix
int MaxDiagonal(int **arr,int irow,int icol) 
{
    int i = 0;
    int j = 0;
    int imax = 0;

    int ino = 0;
    
    //Logic to find largest number from matrix 
    for(i = 0;i < irow;i++)
    {
        for(j = 0;j < icol;j++)
        {
            if((i == j)||((i + j) == (icol - 1)))
            {
                if(arr[i][j] > imax)
                {
                    imax = arr[i][j];
                }
            }
        }
    }

    //Returning largest number
    return imax;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
int main() 
{
    int i = 0;
    int j = 0;
    int row = 0;
    int col = 0;
    int iret = 0;

    int **arr = NULL;    // int arr[?][?];   eg. int arr[3][4] 
    //arr is 2 dimensional array which contains 3 one dimensional array and each
    //one dimensional array contain 4 elements and each element is of type integer 

    printf("Jay Ganesh....\n");

    //Taking input from user
    printf("Enter Number of Rows : ");
    scanf("%d",&row);

    printf("Enter Number of Columns : ");
    scanf("%d",&col);

    //allocating memory for matrix
    arr = (int **)malloc(row * sizeof(int *));

    for(i = 0;i < row;i++)
    {
        arr[i] = (int *)malloc(col * sizeof(int));
    }

    //Taking elements of matarix as input from user
    printf("Enter Elements of Matrix : \n");
    for(i = 0;i < row;i++)
    {
        printf("---Enter Elements into %d Row---\n",(i + 1));
        for(j = 0;j < col;j++)
        {
            printf("Enter Element No %d : ",(j + 1));
            scanf("%d",&arr[i][j]);
        }
    }

    //Printing Elements of Matrix
    printf("Elements of Matrix are : \n");
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }

    //Call to MaxDiagonal function
    iret = MaxDiagonal(arr,row,col);

    //Printing largest number
    printf("Largest number from both the diagonal is : %d",iret);

    return 0;
}